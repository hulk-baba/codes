import scrapy

class IrctcSpider(scrapy.Spider):
    name = 'irctc'
    allowed_domains = ["https://www.irctc.co.in/"]
    start_urls = ["https://www.irctc.co.in/eticketing/captchaImage"]

    def parse(self,response):
        link = response.xpath('//img[@id="cimage"]/@src').extract();
        print link;
