# -*- coding: utf-8 -*-

# Define your item pipelines here
#
# Don't forget to add your pipeline to the ITEM_PIPELINES setting
# See: http://doc.scrapy.org/en/latest/topics/item-pipeline.html

import sys
import MySQLdb
import hashlib
from scrapy.exceptions import DropItem
from scrapy.http import Request

class IrctcPipeline(object):
  def __init__(self):
    self.conn = MySQLdb.connect(user='root', passwd='123', db='DBMS', host='localhost', charset="utf8", use_unicode=True)
    self.cursor = self.conn.cursor()

  def process_item(self, item, spider):
    try:
        self.cursor.execute("""INSERT INTO retry (`pname`, `phone`)
                    VALUES (%s, %s)""",
                   (item['pname'][0],
                    item['phone'][0]))

        self.conn.commit()


    except MySQLdb.Error, e:
        print "Error %d: %s" % (e.args[0], e.args[1])


    return item