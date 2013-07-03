/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OISFUCryptoKey, SFUMoveableFileOutputStream, SFUZipOutputEntry, <SFUOutputStream>, NSMutableArray, NSData, SFUZipFreeSpaceEntry;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
    SFUMoveableFileOutputStream *mOutputStream;
    OISFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    SFUZipOutputEntry *mCurrentEntry;
    SFUZipOutputEntry *mLastEntryInFile;
    <SFUOutputStream> *mEntryOutputStream;
    char *mBuffer;
    NSMutableArray *mFreeList;
    SFUZipFreeSpaceEntry *mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

+ (unsigned long)approximateBytesForEntryHeaderWithName:(id)arg1;

- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)coalesceAndTruncateFreeSpace;
- (unsigned int)crc32ForEntry:(id)arg1;
- (unsigned long long)freeBytes;
- (id)entriesAtPath:(id)arg1;
- (void)setEncryptedDocumentUuid:(id)arg1;
- (void)removeEntryWithName:(id)arg1;
- (BOOL)canRemoveEntryWithName:(id)arg1;
- (void)setCrc32ForCurrentEntry:(unsigned int)arg1;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)arg1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(BOOL)arg2;
- (void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(BOOL)arg2;
- (void)beginEntryWithName:(id)arg1 isCompressed:(BOOL)arg2 uncompressedSize:(unsigned long long)arg3;
- (unsigned long)writeLocalFileHeaderForEntry:(id)arg1;
- (void)finishEntry;
- (id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (void)moveToPath:(id)arg1;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (id)entryNames;
- (void)reset;
- (void)flush;
- (void)close;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
