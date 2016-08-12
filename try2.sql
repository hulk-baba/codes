SELECT * FROM artists ar INNER JOIN tracks tr ON tr.artistid = ar.artistid INNER JOIN tracklists tl ON tl.tracknum=1 AND tr.name = 'intro' AND tr.trackid =tl.trackid;

