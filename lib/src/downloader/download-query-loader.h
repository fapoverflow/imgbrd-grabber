#ifndef DOWNLOAD_QUERY_LOADER_H
#define DOWNLOAD_QUERY_LOADER_H

#include <QMap>
#include <QString>


class DownloadQueryImage;
class DownloadQueryGroup;
class Profile;

class DownloadQueryLoader
{
	public:
		static bool load(const QString &path, QList<DownloadQueryImage> &uniques, QList<DownloadQueryGroup> &groups, Profile *profile);
		static bool save(const QString &path, const QList<DownloadQueryImage> &uniques, const QList<DownloadQueryGroup> &groups);
};

#endif // DOWNLOAD_QUERY_LOADER_H
