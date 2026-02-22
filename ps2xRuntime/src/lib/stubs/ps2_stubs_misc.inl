void calloc_r(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t count = getRegU32(ctx, 5); // $a1
    const uint32_t size = getRegU32(ctx, 6);  // $a2
    const uint32_t guestAddr = runtime ? runtime->guestCalloc(count, size) : 0u;
    setReturnU32(ctx, guestAddr);
}

void ret0(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}

void ret1(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnU32(ctx, 1u);
    ctx->pc = getRegU32(ctx, 31);
}

void reta0(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnU32(ctx, getRegU32(ctx, 4));
    ctx->pc = getRegU32(ctx, 31);
}

void free_r(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t guestAddr = getRegU32(ctx, 5); // $a1
    if (runtime && guestAddr != 0u)
    {
        runtime->guestFree(guestAddr);
    }
}

void malloc_r(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t size = getRegU32(ctx, 5); // $a1
    const uint32_t guestAddr = runtime ? runtime->guestMalloc(size) : 0u;
    setReturnU32(ctx, guestAddr);
}

void malloc_trim_r(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void mbtowc_r(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("mbtowc_r", rdram, ctx, runtime);
}

void printf_r(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t format_addr = getRegU32(ctx, 5); // $a1
    const std::string formatOwned = readPs2CStringBounded(rdram, runtime, format_addr, 1024);
    int ret = -1;

    if (format_addr != 0)
    {
        std::string rendered = formatPs2StringWithArgs(rdram, ctx, runtime, formatOwned.c_str(), 2);
        if (rendered.size() > 2048)
        {
            rendered.resize(2048);
        }
        const std::string logLine = sanitizeForLog(rendered);
        uint32_t count = 0;
        {
            std::lock_guard<std::mutex> lock(g_printfLogMutex);
            count = ++g_printfLogCount;
        }
        if (count <= kMaxPrintfLogs)
        {
            std::cout << "PS2 printf: " << logLine;
            std::cout << std::flush;
        }
        else if (count == kMaxPrintfLogs + 1)
        {
            std::cerr << "PS2 printf logging suppressed after " << kMaxPrintfLogs << " lines" << std::endl;
        }
        ret = static_cast<int>(rendered.size());
    }
    else
    {
        std::cerr << "printf_r error: Invalid format string address provided: 0x" << std::hex << format_addr << std::dec << std::endl;
    }

    setReturnS32(ctx, ret);
}

void sceCdRI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceCdRI", rdram, ctx, runtime);
}

void sceCdRM(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceCdRM", rdram, ctx, runtime);
}

void sceFsDbChk(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceFsDbChk", rdram, ctx, runtime);
}

void sceFsIntrSigSema(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceFsIntrSigSema", rdram, ctx, runtime);
}

void sceFsSemExit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceFsSemExit", rdram, ctx, runtime);
}

void sceFsSemInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceFsSemInit", rdram, ctx, runtime);
}

void sceFsSigSema(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceFsSigSema", rdram, ctx, runtime);
}

void sceIDC(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceIDC", rdram, ctx, runtime);
}

void sceMpegFlush(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegFlush", rdram, ctx, runtime);
}

void sceRpcFreePacket(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceRpcFreePacket", rdram, ctx, runtime);
}

void sceRpcGetFPacket(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceRpcGetFPacket", rdram, ctx, runtime);
}

void sceRpcGetFPacket2(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceRpcGetFPacket2", rdram, ctx, runtime);
}

void sceSDC(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSDC", rdram, ctx, runtime);
}

void sceSifCmdIntrHdlr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifCmdIntrHdlr", rdram, ctx, runtime);
}

void sceSifLoadModule(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifLoadModule", rdram, ctx, runtime);
}

void sceSifSendCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifSendCmd", rdram, ctx, runtime);
}

void sceVu0ecossin(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ecossin", rdram, ctx, runtime);
}

void abs(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("abs", rdram, ctx, runtime);
}

void atan(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("atan", rdram, ctx, runtime);
}

void close(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioClose(rdram, ctx, runtime);
}

void DmaAddr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("DmaAddr", rdram, ctx, runtime);
}

void exit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("exit", rdram, ctx, runtime);
}

void fstat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t statAddr = getRegU32(ctx, 5);
    if (uint8_t *statBuf = getMemPtr(rdram, statAddr))
    {
        std::memset(statBuf, 0, 128);
        setReturnS32(ctx, 0);
        return;
    }
    setReturnS32(ctx, -1);
}

void getpid(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("getpid", rdram, ctx, runtime);
}

void iopGetArea(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("iopGetArea", rdram, ctx, runtime);
}

void lseek(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioLseek(rdram, ctx, runtime);
}

void memchr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("memchr", rdram, ctx, runtime);
}

void open(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioOpen(rdram, ctx, runtime);
}

void Pad_init(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void Pad_set(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("Pad_set", rdram, ctx, runtime);
}

void rand(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("rand", rdram, ctx, runtime);
}

void read(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioRead(rdram, ctx, runtime);
}

void sceCdApplyNCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdBreak(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceCdChangeThreadPriority(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdDelayThread(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceCdDiskReady(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 2);
}

void sceCdGetDiskType(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    // SCECdPS2DVD
    setReturnS32(ctx, 0x14);
}

void sceCdGetReadPos(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnU32(ctx, g_cdStreamingLbn);
}

void sceCdGetToc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t tocAddr = getRegU32(ctx, 4);
    if (uint8_t *toc = getMemPtr(rdram, tocAddr))
    {
        std::memset(toc, 0, 1024);
    }
    setReturnS32(ctx, 1);
}

void sceCdInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    g_cdInitialized = true;
    g_lastCdError = 0;
    setReturnS32(ctx, 1);
}

void sceCdInitEeCB(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdIntToPos(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t lsn = getRegU32(ctx, 4);
    uint32_t posAddr = getRegU32(ctx, 5);
    uint8_t *pos = getMemPtr(rdram, posAddr);
    if (!pos)
    {
        setReturnS32(ctx, 0);
        return;
    }

    uint32_t adjusted = lsn + 150;
    const uint32_t minutes = adjusted / (60 * 75);
    adjusted %= (60 * 75);
    const uint32_t seconds = adjusted / 75;
    const uint32_t sectors = adjusted % 75;

    pos[0] = toBcd(minutes);
    pos[1] = toBcd(seconds);
    pos[2] = toBcd(sectors);
    pos[3] = 0;
    setReturnS32(ctx, 1);
}

void sceCdMmode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    g_cdMode = getRegU32(ctx, 4);
    setReturnS32(ctx, 1);
}

void sceCdNcmdDiskReady(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 2);
}

void sceCdPause(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdPosToInt(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t posAddr = getRegU32(ctx, 4);
    const uint8_t *pos = getConstMemPtr(rdram, posAddr);
    if (!pos)
    {
        setReturnS32(ctx, -1);
        return;
    }

    const uint32_t minutes = fromBcd(pos[0]);
    const uint32_t seconds = fromBcd(pos[1]);
    const uint32_t sectors = fromBcd(pos[2]);
    const uint32_t absolute = (minutes * 60 * 75) + (seconds * 75) + sectors;
    const int32_t lsn = static_cast<int32_t>(absolute) - 150;
    setReturnS32(ctx, lsn);
}

void sceCdReadChain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t chainAddr = getRegU32(ctx, 4);
    bool ok = true;

    for (int i = 0; i < 64; ++i)
    {
        uint32_t *entry = reinterpret_cast<uint32_t *>(getMemPtr(rdram, chainAddr + (i * 16)));
        if (!entry)
        {
            ok = false;
            break;
        }

        const uint32_t lbn = entry[0];
        const uint32_t sectors = entry[1];
        const uint32_t buf = entry[2];
        if (lbn == 0xFFFFFFFFu || sectors == 0)
        {
            break;
        }

        uint32_t offset = buf & PS2_RAM_MASK;
        size_t bytes = static_cast<size_t>(sectors) * kCdSectorSize;
        const size_t maxBytes = PS2_RAM_SIZE - offset;
        if (bytes > maxBytes)
        {
            bytes = maxBytes;
        }

        if (!readCdSectors(lbn, sectors, rdram + offset, bytes))
        {
            ok = false;
            break;
        }

        g_cdStreamingLbn = lbn + sectors;
    }

    setReturnS32(ctx, ok ? 1 : 0);
}

void sceCdReadClock(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t clockAddr = getRegU32(ctx, 4);
    uint8_t *clockData = getMemPtr(rdram, clockAddr);
    if (!clockData)
    {
        setReturnS32(ctx, 0);
        return;
    }

    std::time_t now = std::time(nullptr);
    std::tm localTm{};
#ifdef _WIN32
    localtime_s(&localTm, &now);
#else
    localtime_r(&now, &localTm);
#endif

    // sceCdCLOCK format (BCD fields).
    clockData[0] = 0;
    clockData[1] = toBcd(static_cast<uint32_t>(localTm.tm_sec));
    clockData[2] = toBcd(static_cast<uint32_t>(localTm.tm_min));
    clockData[3] = toBcd(static_cast<uint32_t>(localTm.tm_hour));
    clockData[4] = 0;
    clockData[5] = toBcd(static_cast<uint32_t>(localTm.tm_mday));
    clockData[6] = toBcd(static_cast<uint32_t>(localTm.tm_mon + 1));
    clockData[7] = toBcd(static_cast<uint32_t>((localTm.tm_year + 1900) % 100));
    setReturnS32(ctx, 1);
}

void sceCdReadIOPm(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    sceCdRead(rdram, ctx, runtime);
}

void sceCdSearchFile(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t fileAddr = getRegU32(ctx, 4);
    uint32_t pathAddr = getRegU32(ctx, 5);
    const std::string path = readPs2CStringBounded(rdram, pathAddr, 260);
    const std::string normalizedPath = normalizeCdPathNoPrefix(path);
    static uint32_t traceCount = 0;
    const uint32_t callerRa = getRegU32(ctx, 31);
    const bool shouldTrace = (traceCount < 128u) || ((traceCount % 512u) == 0u);
    if (shouldTrace)
    {
        std::cout << "[sceCdSearchFile] pc=0x" << std::hex << ctx->pc
                  << " ra=0x" << callerRa
                  << " file=0x" << fileAddr
                  << " pathAddr=0x" << pathAddr
                  << " path=\"" << sanitizeForLog(path) << "\""
                  << std::dec << std::endl;
    }
    ++traceCount;

    if (path.empty())
    {
        static uint32_t emptyPathCount = 0;
        if (emptyPathCount < 64 || (emptyPathCount % 512u) == 0u)
        {
            std::ostringstream preview;
            preview << std::hex;
            for (uint32_t i = 0; i < 16; ++i)
            {
                const uint8_t byte = *getConstMemPtr(rdram, pathAddr + i);
                preview << (i == 0 ? "" : " ") << static_cast<uint32_t>(byte);
            }
            std::cerr << "[sceCdSearchFile] empty path at 0x" << std::hex << pathAddr
                      << " preview=" << preview.str()
                      << " ra=0x" << callerRa << std::dec << std::endl;
        }
        ++emptyPathCount;
        g_lastCdError = -1;
        setReturnS32(ctx, 0);
        return;
    }

    if (normalizedPath.empty())
    {
        static uint32_t emptyNormalizedCount = 0;
        if (emptyNormalizedCount < 64u || (emptyNormalizedCount % 512u) == 0u)
        {
            std::cerr << "sceCdSearchFile failed: " << sanitizeForLog(path)
                      << " (normalized path is empty, root: " << getCdRootPath().string() << ")"
                      << std::endl;
        }
        ++emptyNormalizedCount;
        g_lastCdError = -1;
        setReturnS32(ctx, 0);
        return;
    }

    CdFileEntry entry;
    bool found = registerCdFile(path, entry);
    CdFileEntry resolvedEntry = entry;
    std::string resolvedPath;
    bool usedRemapFallback = false;

    // Remap is fallback-only: if the requested .IDX exists, keep it.
    // This avoids feeding AFS payload sectors to code that expects IDX metadata.
    if (!found)
    {
        const CdFileEntry missingEntry{};
        if (tryRemapGdInitSearchToAfs(path, callerRa, missingEntry, resolvedEntry, resolvedPath))
        {
            found = true;
            usedRemapFallback = true;
        }
    }

    if (!found)
    {
        static std::string lastFailedPath;
        static uint32_t samePathFailCount = 0;
        if (path == lastFailedPath)
        {
            ++samePathFailCount;
        }
        else
        {
            lastFailedPath = path;
            samePathFailCount = 1;
        }

        if (samePathFailCount <= 16u || (samePathFailCount % 512u) == 0u)
        {
            std::cerr << "sceCdSearchFile failed: " << sanitizeForLog(path)
                      << " (root: " << getCdRootPath().string()
                      << ", repeat=" << samePathFailCount << ")" << std::endl;
        }
        setReturnS32(ctx, 0);
        return;
    }

    if (usedRemapFallback)
    {
        std::cout << "[sceCdSearchFile] remap gd-init search \"" << sanitizeForLog(path)
                  << "\" -> \"" << sanitizeForLog(resolvedPath) << "\"" << std::endl;
    }

    if (!writeCdSearchResult(rdram, fileAddr, path, resolvedEntry))
    {
        g_lastCdError = -1;
        setReturnS32(ctx, 0);
        return;
    }

    g_cdStreamingLbn = resolvedEntry.baseLbn;
    if (shouldTrace)
    {
        std::cout << "[sceCdSearchFile:ok] path=\"" << sanitizeForLog(path)
                  << "\" lsn=0x" << std::hex << resolvedEntry.baseLbn
                  << " size=0x" << resolvedEntry.sizeBytes
                  << " sectors=0x" << resolvedEntry.sectors
                  << std::dec << std::endl;
    }
    setReturnS32(ctx, 1);
}

void sceCdSeek(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    g_cdStreamingLbn = getRegU32(ctx, 4);
    setReturnS32(ctx, 1);
}

void sceCdStandby(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, g_cdInitialized ? 6 : 0);
}

void sceCdStInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdStop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdStPause(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdStRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t sectors = getRegU32(ctx, 4);
    uint32_t buf = getRegU32(ctx, 5);
    uint32_t errAddr = getRegU32(ctx, 7);

    uint32_t offset = buf & PS2_RAM_MASK;
    size_t bytes = static_cast<size_t>(sectors) * kCdSectorSize;
    const size_t maxBytes = PS2_RAM_SIZE - offset;
    if (bytes > maxBytes)
    {
        bytes = maxBytes;
    }

    const bool ok = readCdSectors(g_cdStreamingLbn, sectors, rdram + offset, bytes);
    if (ok)
    {
        g_cdStreamingLbn += sectors;
    }

    if (int32_t *err = reinterpret_cast<int32_t *>(getMemPtr(rdram, errAddr)); err)
    {
        *err = ok ? 0 : g_lastCdError;
    }

    setReturnS32(ctx, ok ? static_cast<int32_t>(sectors) : 0);
}

void sceCdStream(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdStResume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdStSeek(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    g_cdStreamingLbn = getRegU32(ctx, 4);
    setReturnS32(ctx, 1);
}

void sceCdStSeekF(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    g_cdStreamingLbn = getRegU32(ctx, 4);
    setReturnS32(ctx, 1);
}

void sceCdStStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    g_cdStreamingLbn = getRegU32(ctx, 4);
    setReturnS32(ctx, 1);
}

void sceCdStStat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceCdStStop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceCdSyncS(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceCdTrayReq(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t statusPtr = getRegU32(ctx, 5);
    if (uint32_t *status = reinterpret_cast<uint32_t *>(getMemPtr(rdram, statusPtr)); status)
    {
        *status = 0;
    }
    setReturnS32(ctx, 1);
}

void sceClose(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioClose(rdram, ctx, runtime);
}

void sceDeci2Close(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2Close", rdram, ctx, runtime);
}

void sceDeci2ExLock(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2ExLock", rdram, ctx, runtime);
}

void sceDeci2ExRecv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2ExRecv", rdram, ctx, runtime);
}

void sceDeci2ExReqSend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2ExReqSend", rdram, ctx, runtime);
}

void sceDeci2ExSend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2ExSend", rdram, ctx, runtime);
}

void sceDeci2ExUnLock(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2ExUnLock", rdram, ctx, runtime);
}

void sceDeci2Open(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2Open", rdram, ctx, runtime);
}

void sceDeci2Poll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2Poll", rdram, ctx, runtime);
}

void sceDeci2ReqSend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDeci2ReqSend", rdram, ctx, runtime);
}

void sceDmaCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaCallback", rdram, ctx, runtime);
}

void sceDmaDebug(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaDebug", rdram, ctx, runtime);
}

void sceDmaGetChan(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t chanArg = getRegU32(ctx, 4);
    const uint32_t channelBase = resolveDmaChannelBase(rdram, chanArg);
    setReturnU32(ctx, channelBase);
}

void sceDmaGetEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaGetEnv", rdram, ctx, runtime);
}

void sceDmaLastSyncTime(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaLastSyncTime", rdram, ctx, runtime);
}

void sceDmaPause(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaPause", rdram, ctx, runtime);
}

void sceDmaPutEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaPutEnv", rdram, ctx, runtime);
}

void sceDmaPutStallAddr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaPutStallAddr", rdram, ctx, runtime);
}

void sceDmaRecv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaRecv", rdram, ctx, runtime);
}

void sceDmaRecvI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaRecvI", rdram, ctx, runtime);
}

void sceDmaRecvN(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaRecvN", rdram, ctx, runtime);
}

void sceDmaReset(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceDmaRestart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaRestart", rdram, ctx, runtime);
}

void sceDmaSend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, submitDmaSend(rdram, ctx, runtime, false));
}

void sceDmaSendI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, submitDmaSend(rdram, ctx, runtime, false));
}

void sceDmaSendM(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, submitDmaSend(rdram, ctx, runtime, false));
}

void sceDmaSendN(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, submitDmaSend(rdram, ctx, runtime, true));
}

void sceDmaSync(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, submitDmaSync(rdram, ctx, runtime));
}

void sceDmaSyncN(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, submitDmaSync(rdram, ctx, runtime));
}

void sceDmaWatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceDmaWatch", rdram, ctx, runtime);
}

void sceFsInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceFsInit", rdram, ctx, runtime);
}

void sceFsReset(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceIoctl(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceIoctl", rdram, ctx, runtime);
}

void sceIpuInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    // Real implementation per decompilation: setD4_CHCR(1), then IPU_CTRL/CMD/IN_FIFO writes.
    // Busy-waits are skipped (we perform the writes; no IPU hardware to wait on).
    static constexpr uint32_t REG_IPU_CTRL   = 0x10002010u;
    static constexpr uint32_t REG_IPU_CMD   = 0x10002000u;
    static constexpr uint32_t REG_IPU_IN_FIFO = 0x10007010u;
    static constexpr uint32_t IQVAL_BASE    = 0x1721e0u;  // _iqval
    static constexpr uint32_t VQVAL_BASE    = 0x172230u;  // _vqval
    static constexpr uint32_t SETD4_CHCR_ENTRY = 0x126428u;

    if (!runtime)
        return;

    PS2Memory &mem = runtime->memory();

    // 1) setD4_CHCR(1)
    auto setD4 = runtime->lookupFunction(SETD4_CHCR_ENTRY);
    if (setD4)
    {
        ctx->r[4] = _mm_set_epi64x(0, 1);  // a0 = 1
        setD4(rdram, ctx, runtime);
    }

    // 2) REG_IPU_CTRL = 0x40000000
    mem.write32(REG_IPU_CTRL, 0x40000000u);
    // 3) REG_IPU_CMD = 0
    mem.write32(REG_IPU_CMD, 0u);

    // 4) Copy _iqval blocks to IPU_IN_FIFO (0x1721e0 + 0, 0x10, 0x20, 0x30, 0x40, then 0x40 three more times)
    __m128i v;
    v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x00u);
    mem.write128(REG_IPU_IN_FIFO, v);
    v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x10u);
    mem.write128(REG_IPU_IN_FIFO, v);
    v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x20u);
    mem.write128(REG_IPU_IN_FIFO, v);
    v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x30u);
    mem.write128(REG_IPU_IN_FIFO, v);
    v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x40u);
    mem.write128(REG_IPU_IN_FIFO, v);
    mem.write128(REG_IPU_IN_FIFO, v);
    mem.write128(REG_IPU_IN_FIFO, v);
    mem.write128(REG_IPU_IN_FIFO, v);

    // 5) REG_IPU_CMD = 0x50000000, then 0x58000000
    mem.write32(REG_IPU_CMD, 0x50000000u);
    mem.write32(REG_IPU_CMD, 0x58000000u);

    // 6) Copy _vqval blocks (0x172230, 0x172240)
    v = runtime->Load128(rdram, ctx, VQVAL_BASE + 0x00u);
    mem.write128(REG_IPU_IN_FIFO, v);
    v = runtime->Load128(rdram, ctx, VQVAL_BASE + 0x10u);
    mem.write128(REG_IPU_IN_FIFO, v);

    // 7) REG_IPU_CMD = 0x60000000, then 0x90000000
    mem.write32(REG_IPU_CMD, 0x60000000u);
    mem.write32(REG_IPU_CMD, 0x90000000u);

    // 8) REG_IPU_CTRL = 0x40000000, REG_IPU_CMD = 0
    mem.write32(REG_IPU_CTRL, 0x40000000u);
    mem.write32(REG_IPU_CMD, 0u);
}

void sceIpuRestartDMA(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceIpuRestartDMA", rdram, ctx, runtime);
}

void sceIpuStopDMA(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceIpuStopDMA", rdram, ctx, runtime);
}

void sceIpuSync(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceIpuSync", rdram, ctx, runtime);
}

void sceLseek(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioLseek(rdram, ctx, runtime);
}

void sceMcChangeThreadPriority(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcChangeThreadPriority", rdram, ctx, runtime);
}

void sceMcChdir(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcChdir", rdram, ctx, runtime);
}

void sceMcClose(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcClose", rdram, ctx, runtime);
}

void sceMcDelete(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcDelete", rdram, ctx, runtime);
}

void sceMcFlush(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcFlush", rdram, ctx, runtime);
}

void sceMcFormat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcFormat", rdram, ctx, runtime);
}

void sceMcGetDir(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcGetDir", rdram, ctx, runtime);
}

void sceMcGetEntSpace(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcGetEntSpace", rdram, ctx, runtime);
}

void sceMcGetInfo(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcGetInfo", rdram, ctx, runtime);
}

void sceMcGetSlotMax(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcGetSlotMax", rdram, ctx, runtime);
}

void sceMcInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static uint32_t logCount = 0;
    if (logCount < 8)
    {
        std::cout << "ps2_stub sceMcInit -> 0" << std::endl;
        ++logCount;
    }
    setReturnS32(ctx, 0);
}

void sceMcMkdir(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcMkdir", rdram, ctx, runtime);
}

void sceMcOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcOpen", rdram, ctx, runtime);
}

void sceMcRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcRead", rdram, ctx, runtime);
}

void sceMcRename(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcRename", rdram, ctx, runtime);
}

void sceMcSeek(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcSeek", rdram, ctx, runtime);
}

void sceMcSetFileInfo(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcSetFileInfo", rdram, ctx, runtime);
}

void sceMcSync(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcSync", rdram, ctx, runtime);
}

void sceMcUnformat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcUnformat", rdram, ctx, runtime);
}

void sceMcWrite(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMcWrite", rdram, ctx, runtime);
}

// Font globals (gp-relative): sceeFontScrWidth -0x7b60, sceeFontScrHeight -0x7b5c, sceeFontClut -0x7b64,
// sceeFontModeAdj -0x7c98, default_colour -0x7b4c, default_scly -0x7b50, default_sclx -0x7b54, default_fontid -0x7b58
static void writeU32AtGp(uint8_t *rdram, uint32_t gp, int32_t offset, uint32_t value)
{
    const uint32_t addr = gp + static_cast<uint32_t>(offset);
    if (uint8_t *p = getMemPtr(rdram, addr))
        *reinterpret_cast<uint32_t *>(p) = value;
}

void sceeFontInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t gp = getRegU32(ctx, 28);
    const uint32_t a0 = getRegU32(ctx, 4);
    const uint32_t a1 = getRegU32(ctx, 5);
    const uint32_t a2 = getRegU32(ctx, 6);
    const uint32_t a3 = getRegU32(ctx, 7);
    writeU32AtGp(rdram, gp, -0x7b60, a1);  // sceeFontScrWidth
    writeU32AtGp(rdram, gp, -0x7b5c, a2);  // sceeFontScrHeight
    writeU32AtGp(rdram, gp, -0x7b64, a0);  // sceeFontClut
    writeU32AtGp(rdram, gp, -0x7c98, a3);  // sceeFontModeAdj
    writeU32AtGp(rdram, gp, -0x7b4c, 0x7f7f7f7f);  // default_colour
    writeU32AtGp(rdram, gp, -0x7b50, 0x3f800000);  // default_scly 1.0f
    writeU32AtGp(rdram, gp, -0x7b54, 0x3f800000);  // default_sclx 1.0f
    writeU32AtGp(rdram, gp, -0x7b58, 0);           // default_fontid

    if (runtime && a0 != 0u)
    {
        uint8_t *vram = runtime->memory().getGSVRAM();
        if (vram)
        {
            uint32_t clutOff = a0 * 256u;
            if (clutOff + 64u <= PS2_GS_VRAM_SIZE)
            {
                for (uint32_t i = 0; i < 16u; ++i)
                {
                    uint8_t alpha = static_cast<uint8_t>((i * 0x80u) / 15u);
                    uint32_t entry = (i == 0)
                        ? 0x00000000u
                        : (0x80u | (0x80u << 8) | (0x80u << 16) | (static_cast<uint32_t>(alpha) << 24));
                    std::memcpy(vram + clutOff + i * 4u, &entry, 4);
                }
                std::fprintf(stderr, "[sceeFontInit] CLUT at cbp=0x%x (byteOff=0x%x):\n", a0, clutOff);
                for (uint32_t i = 0; i < 16u; ++i)
                {
                    uint32_t v; std::memcpy(&v, vram + clutOff + i * 4u, 4);
                    std::fprintf(stderr, "  CLUT[%2u] = 0x%08x (r=%u g=%u b=%u a=%u)\n",
                           i, v, v & 0xFF, (v >> 8) & 0xFF, (v >> 16) & 0xFF, (v >> 24) & 0xFF);
                }
            }
        }
    }

    setReturnS32(ctx, static_cast<int32_t>(a0 + 4));
}

void sceeFontLoadFont(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static constexpr uint32_t kFontBase = 0x176148u;
    static constexpr uint32_t kFontEntrySz = 0x24u;

    const uint32_t fontDataAddr = getRegU32(ctx, 4);
    const int fontId = (int)getRegU32(ctx, 5);
    const int tbp0 = (int)getRegU32(ctx, 7);

    std::fprintf(stderr, "[sceeFontLoadFont] fontDataAddr=0x%x fontId=%d tbp0=%d\n",
           fontDataAddr, fontId, tbp0);

    if (!fontDataAddr || !runtime) {
        setReturnS32(ctx, tbp0);
        return;
    }

    int width     = (int)FAST_READ32(fontDataAddr + 0x00u);
    int height    = (int)FAST_READ32(fontDataAddr + 0x04u);
    uint32_t raw8 = FAST_READ32(fontDataAddr + 0x08u);
    int fontDataSz= (int)FAST_READ32(fontDataAddr + 0x0cu);

    std::fprintf(stderr, "[sceeFontLoadFont] width=%d height=%d pointsize=0x%x fontDataSz=%d\n",
           width, height, raw8, fontDataSz);

    uint32_t pointsize = raw8;
    uint32_t fontOff = (uint32_t)(fontId * (int)kFontEntrySz);
    if (raw8 & 0x40000000u) {
        pointsize = raw8 - 0x40000000u;
        FAST_WRITE32(kFontBase + fontOff + 0x20u, 1u);
    } else {
        FAST_WRITE32(kFontBase + fontOff + 0x20u, 0u);
    }

    int tw = width;
    if (width >= 0) tw = width; else tw = width + 0x3f;
    tw >>= 6;

    int qwc = fontDataSz;
    if (fontDataSz >= 0) qwc = fontDataSz; else qwc = fontDataSz + 0xf;
    qwc >>= 4;

    uint32_t glyphSrc = fontDataAddr + (uint32_t)fontDataSz + 0x10u;
    uint32_t glyphAlloc = runtime->guestMalloc(0x2010u, 0x40u);
    FAST_WRITE32(kFontBase + fontOff, glyphAlloc);

    std::fprintf(stderr, "[sceeFontLoadFont] glyphSrc=0x%x glyphAlloc=0x%x tw=%d qwc=%d\n",
           glyphSrc, glyphAlloc, tw, qwc);

    if (glyphAlloc != 0u) {
        uint8_t *dst = getMemPtr(rdram, glyphAlloc);
        const uint8_t *src = getConstMemPtr(rdram, glyphSrc);
        if (dst && src) {
            std::memcpy(dst, src, 0x2010u);
            uint32_t nonZero = 0;
            for (int i = 0; i < 0x2010; i++) if (dst[i]) nonZero++;
            std::fprintf(stderr, "[sceeFontLoadFont] glyph copy done, nonZero=%u/8208\n", nonZero);
            std::fprintf(stderr, "[sceeFontLoadFont] first 16 glyph bytes: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
                   dst[0],dst[1],dst[2],dst[3],dst[4],dst[5],dst[6],dst[7],
                   dst[8],dst[9],dst[10],dst[11],dst[12],dst[13],dst[14],dst[15]);
        }
    }

    uint32_t isDoubleByte = FAST_READ32(kFontBase + fontOff + 0x20u);
    if (isDoubleByte == 0u) {
        uint32_t kernSrc = glyphSrc + 0x2010u;
        uint32_t kernAlloc = runtime->guestMalloc(0xc400u, 0x40u);
        if (glyphAlloc != 0u) {
            FAST_WRITE32(glyphAlloc + 0x2000u, kernAlloc);
        }
        if (kernAlloc != 0u) {
            uint8_t *dst = getMemPtr(rdram, kernAlloc);
            const uint8_t *src = getConstMemPtr(rdram, kernSrc);
            if (dst && src)
                std::memcpy(dst, src, 0xc400u);
        }
    }

    FAST_WRITE32(kFontBase + fontOff + 0x18u, pointsize);
    FAST_WRITE32(kFontBase + fontOff + 0x08u, (uint32_t)tbp0);
    FAST_WRITE32(kFontBase + fontOff + 0x0cu, tw);

    {
        int logW = 0;
        bool extra = false;
        int w = width;
        if (w != 1) {
            while (w != 1) {
                if (w & 1) extra = true;
                logW++;
                w = (int)((uint32_t)w >> 1);
                if (w == 0) break;
            }
        }
        if (extra) logW++;
        FAST_WRITE32(kFontBase + fontOff + 0x10u, (uint32_t)logW);
    }
    {
        int logH = 0;
        bool extra = false;
        int h = height;
        if (h != 1) {
            while (h != 1) {
                if (h & 1) extra = true;
                logH++;
                h = (int)((uint32_t)h >> 1);
                if (h == 0) break;
            }
        }
        if (extra) logH++;
        FAST_WRITE32(kFontBase + fontOff + 0x14u, (uint32_t)logH);
    }

    FAST_WRITE32(kFontBase + fontOff + 0x04u, 0u);

    uint32_t spaceWidth = getRegU32(ctx, 6);
    FAST_WRITE32(kFontBase + fontOff + 0x1cu, spaceWidth);

    {
        uint32_t headerQWs = 6;
        uint32_t imageBytes = (uint32_t)qwc * 16u;
        uint32_t totalBytes = headerQWs * 16u + imageBytes;

        std::vector<uint8_t> packet(totalBytes, 0);
        auto store64 = [&](uint32_t off, uint64_t val) {
            std::memcpy(packet.data() + off, &val, 8);
        };

        // QW0: GIF A+D tag — NLOOP=4, NREG=1, FLG=PACKED(0), EOP=0
        store64(0x00, 0x1000000000000004ull);
        store64(0x08, 0x000000000000000Eull);

        // QW1: BITBLTBUF (reg 0x50) — DBP=tbp0, DBW=tw, DPSM=PSMT4(20)
        uint64_t bitbltbuf = ((uint64_t)(uint32_t)tbp0 << 32)
                           | ((uint64_t)(uint32_t)tw << 48)
                           | 0x1400000000000000ull;
        store64(0x10, bitbltbuf);
        store64(0x18, 0x0000000000000050ull);

        // QW2: TRXPOS (reg 0x51) — all zeros (start at 0,0)
        store64(0x20, 0ull);
        store64(0x28, 0x0000000000000051ull);

        // QW3: TRXREG (reg 0x52) — RRW=width, RRH=height
        uint64_t trxreg = (uint64_t)(uint32_t)width
                        | ((uint64_t)(uint32_t)height << 32);
        store64(0x30, trxreg);
        store64(0x38, 0x0000000000000052ull);

        // QW4: TRXDIR (reg 0x53) — 0 = host→local
        store64(0x40, 0ull);
        store64(0x48, 0x0000000000000053ull);

        // QW5: GIF IMAGE tag — NLOOP=qwc, EOP=1, FLG=IMAGE(2)
        uint64_t imageTag = (uint64_t)(uint32_t)qwc
                          | 0x0800000000008000ull;
        store64(0x50, imageTag);
        store64(0x58, 0ull);

        // QW6+: font texture image data from fontDataAddr + 0x10
        const uint8_t *imgSrc = getConstMemPtr(rdram, fontDataAddr + 0x10u);
        if (imgSrc && imageBytes > 0)
            std::memcpy(packet.data() + headerQWs * 16u, imgSrc, imageBytes);

        runtime->gs().processGIFPacket(packet.data(), totalBytes);

        {
            uint8_t *vram = runtime->memory().getGSVRAM();
            if (vram) {
                uint32_t texBase = (uint32_t)tbp0 * 256u;
                uint32_t texStride = (uint32_t)tw * 64u / 2u;
                std::fprintf(stderr, "[sceeFontLoadFont] VRAM verify: texBase=0x%x texStride=%u\n", texBase, texStride);
                for (int row = 0; row < 4; row++) {
                    uint32_t rowOff = texBase + (uint32_t)row * texStride;
                    std::fprintf(stderr, "  VRAM row %d (off=0x%x): %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
                           row, rowOff,
                           vram[rowOff+0], vram[rowOff+1], vram[rowOff+2], vram[rowOff+3],
                           vram[rowOff+4], vram[rowOff+5], vram[rowOff+6], vram[rowOff+7],
                           vram[rowOff+8], vram[rowOff+9], vram[rowOff+10], vram[rowOff+11],
                           vram[rowOff+12], vram[rowOff+13], vram[rowOff+14], vram[rowOff+15]);
                }
            }
        }
    }

    int retTbp = tbp0;
    {
        int dataAligned = fontDataSz;
        if (fontDataSz >= 0) dataAligned = fontDataSz; else dataAligned = fontDataSz + 0x7f;
        retTbp += (dataAligned >> 7);
    }

    std::fprintf(stderr, "[sceeFontLoadFont] fontEntry[0x%x]: glyphPtr=0x%x tbp=0x%x tw=%u logW=%u logH=%u ptsz=%u dbl=%u ret=%d\n",
           kFontBase + fontOff,
           FAST_READ32(kFontBase + fontOff + 0x00u),
           FAST_READ32(kFontBase + fontOff + 0x08u),
           FAST_READ32(kFontBase + fontOff + 0x0cu),
           FAST_READ32(kFontBase + fontOff + 0x10u),
           FAST_READ32(kFontBase + fontOff + 0x14u),
           FAST_READ32(kFontBase + fontOff + 0x18u),
           FAST_READ32(kFontBase + fontOff + 0x20u),
           retTbp);

    setReturnS32(ctx, retTbp);
}

void sceeFontPrintfAt2(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceeFontSetColour(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t gp = getRegU32(ctx, 28);
    writeU32AtGp(rdram, gp, -0x7b4c, getRegU32(ctx, 4));
}

void sceeFontSetFont(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t gp = getRegU32(ctx, 28);
    writeU32AtGp(rdram, gp, -0x7b58, getRegU32(ctx, 4));
}

void sceeFontSetScale(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t gp = getRegU32(ctx, 28);
    uint32_t sclx_bits;
    uint32_t scly_bits;
    std::memcpy(&sclx_bits, &ctx->f[12], sizeof(float));
    std::memcpy(&scly_bits, &ctx->f[13], sizeof(float));
    writeU32AtGp(rdram, gp, -0x7b54, sclx_bits);
    writeU32AtGp(rdram, gp, -0x7b50, scly_bits);
}

void sceMpegAddBs(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegAddBs", rdram, ctx, runtime);
}

void sceMpegAddCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegAddCallback", rdram, ctx, runtime);
}

void sceMpegAddStrCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    // Minimal: return 0 (no previous callback)
    setReturnU32(ctx, 0u);
}

void sceMpegClearRefBuff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)ctx;
    (void)runtime;
    // Clear +0x28 at each ref frame/top/bot if the pointer is non-null. Globals at 0x171800 + offsets.
    static const uint32_t kRefGlobalAddrs[] = {
        0x171800u, 0x17180Cu, 0x171818u, 0x171804u, 0x171810u, 0x17181Cu
    };
    for (uint32_t addr : kRefGlobalAddrs)
    {
        uint8_t *p = getMemPtr(rdram, addr);
        if (!p)
            continue;
        uint32_t ptr = *reinterpret_cast<uint32_t *>(p);
        if (ptr != 0u)
        {
            uint8_t *q = getMemPtr(rdram, ptr + 0x28u);
            if (q)
                *reinterpret_cast<uint32_t *>(q) = 0u;
        }
    }
    setReturnU32(ctx, 1u);
}

// Write 32/64-bit to guest memory at address (for sceMpegCreate struct setup).
static void guestWrite32(uint8_t *rdram, uint32_t addr, uint32_t value)
{
    if (uint8_t *p = getMemPtr(rdram, addr))
        *reinterpret_cast<uint32_t *>(p) = value;
}
static void guestWrite64(uint8_t *rdram, uint32_t addr, uint64_t value)
{
    if (uint8_t *p = getMemPtr(rdram, addr))
    {
        *reinterpret_cast<uint32_t *>(p) = static_cast<uint32_t>(value);
        *reinterpret_cast<uint32_t *>(p + 4) = static_cast<uint32_t>(value >> 32);
    }
}

void sceMpegCreate(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t param_1 = getRegU32(ctx, 4);   // a0
    const uint32_t param_2 = getRegU32(ctx, 5);   // a1
    const uint32_t param_3 = getRegU32(ctx, 6);   // a2

    const uint32_t uVar3 = (param_2 + 3u) & 0xFFFFFFFCu;
    const int32_t iVar2_signed = static_cast<int32_t>(param_3) - static_cast<int32_t>(uVar3 - param_2);

    if (iVar2_signed <= 0x117)
    {
        setReturnU32(ctx, 0u);
        return;
    }

    const uint32_t puVar4 = uVar3 + 0x108u;
    const uint32_t innerSize = static_cast<uint32_t>(iVar2_signed) - 0x118u;

    // param_1[0x10] = uVar3
    guestWrite32(rdram, param_1 + 0x40, uVar3);

    // _alalcInit effect: puVar4+0 = a1, +4 = a2, +8 = a1, +12 = a1 (a1 = uVar3+0x118, a2 = innerSize)
    const uint32_t a1_init = uVar3 + 0x118u;
    guestWrite32(rdram, puVar4 + 0x0, a1_init);
    guestWrite32(rdram, puVar4 + 0x4, innerSize);
    guestWrite32(rdram, puVar4 + 0x8, a1_init);
    guestWrite32(rdram, puVar4 + 0xC, a1_init);

    // _alalcAlloc: allocate 0x600 bytes; store result at uVar3+0x44
    const uint32_t allocResult = runtime ? runtime->guestMalloc(0x600, 8u) : (uVar3 + 0x200u);
    guestWrite32(rdram, uVar3 + 0x44, allocResult);

    // param_1[0..2] = 0; param_1[4..0xe] = 0xffffffff/0 as per decompilation
    guestWrite32(rdram, param_1 + 0x00, 0);
    guestWrite32(rdram, param_1 + 0x04, 0);
    guestWrite32(rdram, param_1 + 0x08, 0);
    guestWrite64(rdram, param_1 + 0x10, 0xFFFFFFFFFFFFFFFFULL);
    guestWrite64(rdram, param_1 + 0x18, 0xFFFFFFFFFFFFFFFFULL);
    guestWrite64(rdram, param_1 + 0x20, 0);
    guestWrite64(rdram, param_1 + 0x28, 0xFFFFFFFFFFFFFFFFULL);
    guestWrite64(rdram, param_1 + 0x30, 0xFFFFFFFFFFFFFFFFULL);
    guestWrite64(rdram, param_1 + 0x38, 0);

    // Zero fields at uVar3 (offsets b4..f8, 0c, 14, 2c, 34, 3c)
    static const unsigned s_zeroOffsets[] = {
        0xB4, 0xB8, 0xBC, 0xC0, 0xC4, 0xC8, 0xCC, 0xD0, 0xD4, 0xD8, 0xDC, 0xE0, 0xE4, 0xE8, 0xF8,
        0x0C, 0x14, 0x2C, 0x34, 0x3C,
        0x48, 0xFC, 0x100, 0x104, 0x70, 0x90, 0xAC
    };
    for (unsigned off : s_zeroOffsets)
        guestWrite32(rdram, uVar3 + off, 0u);
    guestWrite64(rdram, uVar3 + 0x78, 0);
    guestWrite64(rdram, uVar3 + 0x88, 0);

    guestWrite64(rdram, uVar3 + 0xF0, 0xFFFFFFFFFFFFFFFFULL);
    guestWrite32(rdram, uVar3 + 0x1C, 0x1209F8u);   // _defStopDMA
    guestWrite32(rdram, uVar3 + 0x24, 0x120A08u);   // _defRestartDMA
    guestWrite32(rdram, uVar3 + 0xB0, 1u);
    guestWrite32(rdram, uVar3 + 0x9C, 0xFFFFFFFFu);
    guestWrite32(rdram, uVar3 + 0x80, 0xFFFFFFFFu);
    guestWrite32(rdram, uVar3 + 0x94, 0xFFFFFFFFu);
    guestWrite32(rdram, uVar3 + 0x98, 0xFFFFFFFFu);

    // _theSceMpeg = param_1 (global at 0x1717bc per asm)
    guestWrite32(rdram, 0x1717BCu, param_1);

    // Ref frame globals: store ref pointers into _forwFrame, _zTop, etc. (addresses 0x171800 + i*4)
    static const uint32_t s_refValues[] = {
        0x171A50u, 0x171C58u, 0x171CC0u, 0x171D28u, 0x171D90u,
        0x171AB8u, 0x171B20u, 0x171B88u, 0x171BF0u
    };
    for (unsigned i = 0; i < 9u; ++i)
        guestWrite32(rdram, 0x171800u + i * 4u, s_refValues[i]);

    // _alalcSetDynamic effect: return *(puVar4+8) (and write to +12; we already wrote +12 in _alalcInit)
    uint32_t setDynamicRet = a1_init;
    if (uint8_t *p = getMemPtr(rdram, puVar4 + 8))
        setDynamicRet = *reinterpret_cast<uint32_t *>(p);
    guestWrite32(rdram, puVar4 + 12, setDynamicRet);

    setReturnU32(ctx, setDynamicRet);
}

void sceMpegDelete(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegDelete", rdram, ctx, runtime);
}

void sceMpegDemuxPss(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegDemuxPss", rdram, ctx, runtime);
}

void sceMpegDemuxPssRing(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegDemuxPssRing", rdram, ctx, runtime);
}

void sceMpegDispCenterOffX(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegDispCenterOffX", rdram, ctx, runtime);
}

void sceMpegDispCenterOffY(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegDispCenterOffY", rdram, ctx, runtime);
}

void sceMpegDispHeight(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegDispHeight", rdram, ctx, runtime);
}

void sceMpegDispWidth(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegDispWidth", rdram, ctx, runtime);
}

void sceMpegGetDecodeMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegGetDecodeMode", rdram, ctx, runtime);
}

void sceMpegGetPicture(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    // Minimal: set struct fields and return 0; full impl would call _getpic
    const uint32_t param_1 = getRegU32(ctx, 4);
    if (uint8_t *base = getMemPtr(rdram, param_1))
    {
        const uint32_t iVar1 = *reinterpret_cast<uint32_t *>(base + 0x40);
        if (uint8_t *inner = getMemPtr(rdram, iVar1))
        {
            *reinterpret_cast<uint32_t *>(inner + 0xb0) = 1;
            *reinterpret_cast<uint32_t *>(inner + 0xd8) = (getRegU32(ctx, 5) & 0x0FFFFFFFu) | 0x20000000u;
            *reinterpret_cast<uint32_t *>(inner + 0xe4) = getRegU32(ctx, 6);
            *reinterpret_cast<uint32_t *>(inner + 0xdc) = 0;
            *reinterpret_cast<uint32_t *>(inner + 0xe0) = 0;
        }
    }
    setReturnU32(ctx, 0u);
}

void sceMpegGetPictureRAW8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegGetPictureRAW8", rdram, ctx, runtime);
}

void sceMpegGetPictureRAW8xy(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegGetPictureRAW8xy", rdram, ctx, runtime);
}

void sceMpegInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegInit", rdram, ctx, runtime);
}

void sceMpegIsEnd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegIsEnd", rdram, ctx, runtime);
}

void sceMpegIsRefBuffEmpty(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegIsRefBuffEmpty", rdram, ctx, runtime);
}

void sceMpegReset(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)runtime;
    const uint32_t param_1 = getRegU32(ctx, 4);
    uint8_t *base = getMemPtr(rdram, param_1);
    if (!base)
        return;
    uint32_t inner = *reinterpret_cast<uint32_t *>(base + 0x40);
    if (inner == 0u)
        return;
    guestWrite32(rdram, inner + 0x00, 0u);
    guestWrite32(rdram, inner + 0x04, 0u);
    guestWrite32(rdram, inner + 0x08, 0u);
    guestWrite32(rdram, param_1 + 0x08, 0u);
    guestWrite32(rdram, inner + 0x80, 0xFFFFFFFFu);
    guestWrite32(rdram, inner + 0xAC, 0u);
    // _clearEach() and _initSeqAgain() skipped (would require calling recompiled code and returning here)
    guestWrite32(rdram, 0x171904u, 0u);  // _totalFrames = 0
}

void sceMpegResetDefaultPtsGap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegResetDefaultPtsGap", rdram, ctx, runtime);
}

void sceMpegSetDecodeMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegSetDecodeMode", rdram, ctx, runtime);
}

void sceMpegSetDefaultPtsGap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegSetDefaultPtsGap", rdram, ctx, runtime);
}

void sceMpegSetImageBuff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceMpegSetImageBuff", rdram, ctx, runtime);
}

void sceOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioOpen(rdram, ctx, runtime);
}

void scePadEnd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadEnd", rdram, ctx, runtime);
}

void scePadEnterPressMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadEnterPressMode", rdram, ctx, runtime);
}

void scePadExitPressMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadExitPressMode", rdram, ctx, runtime);
}

void scePadGetButtonMask(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadGetButtonMask", rdram, ctx, runtime);
}

void scePadGetDmaStr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadGetDmaStr", rdram, ctx, runtime);
}

void scePadGetFrameCount(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadGetFrameCount", rdram, ctx, runtime);
}

void scePadGetModVersion(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    // Arbitrary non-zero module version.
    setReturnS32(ctx, 0x0200);
}

void scePadGetPortMax(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    setReturnS32(ctx, 2);
}

void scePadGetReqState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    // 0 = completed/no pending request.
    setReturnS32(ctx, 0);
}

void scePadGetSlotMax(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    // Most games use one slot unless multitap is active.
    setReturnS32(ctx, 1);
}

void scePadGetState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    // Pad state constants used by libpad: 6 means stable and ready.
    setReturnS32(ctx, 6);
}

void scePadInfoAct(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadInfoAct", rdram, ctx, runtime);
}

void scePadInfoComb(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadInfoComb", rdram, ctx, runtime);
}

void scePadInfoMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;

    const int32_t infoMode = static_cast<int32_t>(getRegU32(ctx, 6)); // a2
    const int32_t index = static_cast<int32_t>(getRegU32(ctx, 7));    // a3

    // Minimal DualShock-like capabilities to keep game-side pad setup paths alive.
    constexpr int32_t kPadTypeDualShock = 7;
    switch (infoMode)
    {
    case 1: // PAD_MODECURID
        setReturnS32(ctx, kPadTypeDualShock);
        return;
    case 2: // PAD_MODECUREXID
        setReturnS32(ctx, kPadTypeDualShock);
        return;
    case 3: // PAD_MODECUROFFS
        setReturnS32(ctx, 0);
        return;
    case 4: // PAD_MODETABLE
        if (index == -1)
        {
            setReturnS32(ctx, 1); // one available mode
        }
        else if (index == 0)
        {
            setReturnS32(ctx, kPadTypeDualShock);
        }
        else
        {
            setReturnS32(ctx, 0);
        }
        return;
    default:
        setReturnS32(ctx, 0);
        return;
    }
}

void scePadInfoPressMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    // Pressure mode is disabled in this minimal implementation.
    setReturnS32(ctx, 0);
}

void scePadInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    setReturnS32(ctx, 1);
}

void scePadInit2(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    setReturnS32(ctx, 1);
}

void scePadPortClose(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    setReturnS32(ctx, 1);
}

void scePadPortOpen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    setReturnS32(ctx, 1);
}

void scePadRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)runtime;

    const uint32_t dataAddr = getRegU32(ctx, 6); // a2
    uint8_t *data = getMemPtr(rdram, dataAddr);
    if (!data)
    {
        setReturnS32(ctx, 0);
        return;
    }

    // struct padButtonStatus (32 bytes): neutral state, no buttons pressed.
    std::memset(data, 0, 32);
    data[1] = 0x73; // analog/dualshock mode marker
    data[2] = 0xFF; // btns low (active-low)
    data[3] = 0xFF; // btns high
    data[4] = 0x80; // rjoy_h
    data[5] = 0x80; // rjoy_v
    data[6] = 0x80; // ljoy_h
    data[7] = 0x80; // ljoy_v

    setReturnS32(ctx, 1);
}

void scePadReqIntToStr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadReqIntToStr", rdram, ctx, runtime);
}

void scePadSetActAlign(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadSetActAlign", rdram, ctx, runtime);
}

void scePadSetActDirect(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadSetActDirect", rdram, ctx, runtime);
}

void scePadSetButtonInfo(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadSetButtonInfo", rdram, ctx, runtime);
}

void scePadSetMainMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadSetMainMode", rdram, ctx, runtime);
}

void scePadSetReqState(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadSetReqState", rdram, ctx, runtime);
}

void scePadSetVrefParam(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadSetVrefParam", rdram, ctx, runtime);
}

void scePadSetWarningLevel(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadSetWarningLevel", rdram, ctx, runtime);
}

void scePadStateIntToStr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("scePadStateIntToStr", rdram, ctx, runtime);
}

void scePrintf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    // Same as printf: format at a0, variadic args in a1-a3, t0-t3. Output to host stdout.
    uint32_t format_addr = getRegU32(ctx, 4);
    const std::string formatOwned = readPs2CStringBounded(rdram, runtime, format_addr, 1024);
    if (format_addr == 0)
        return;
    std::string rendered = formatPs2StringWithArgs(rdram, ctx, runtime, formatOwned.c_str(), 1);
    if (rendered.size() > 2048)
        rendered.resize(2048);
    const std::string logLine = sanitizeForLog(rendered);
    uint32_t count = 0;
    {
        std::lock_guard<std::mutex> lock(g_printfLogMutex);
        count = ++g_printfLogCount;
    }
    if (count <= kMaxPrintfLogs)
    {
        std::cout << "PS2 scePrintf: " << logLine;
        std::cout << std::flush;
    }
    else if (count == kMaxPrintfLogs + 1)
    {
        std::cerr << "PS2 printf logging suppressed after " << kMaxPrintfLogs << " lines" << std::endl;
    }
}

void sceRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioRead(rdram, ctx, runtime);
}

void sceResetttyinit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceResetttyinit", rdram, ctx, runtime);
}

void sceSdCallBack(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSdCallBack", rdram, ctx, runtime);
}

void sceSdRemote(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSdRemote", rdram, ctx, runtime);
}

void sceSdRemoteInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSdRemoteInit", rdram, ctx, runtime);
}

void sceSdTransToIOP(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSdTransToIOP", rdram, ctx, runtime);
}

void sceSetBrokenLink(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSetBrokenLink", rdram, ctx, runtime);
}

void sceSetPtm(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSetPtm", rdram, ctx, runtime);
}

namespace
{
    struct Ps2SifDmaTransfer
    {
        uint32_t src = 0;
        uint32_t dest = 0;
        int32_t size = 0;
        int32_t attr = 0;
    };
    static_assert(sizeof(Ps2SifDmaTransfer) == 16u, "Unexpected SIF DMA descriptor size");

    std::mutex g_sifDmaTransferMutex;
    uint32_t g_nextSifDmaTransferId = 1u;

    uint32_t allocateSifDmaTransferId()
    {
        std::lock_guard<std::mutex> lock(g_sifDmaTransferMutex);
        uint32_t id = g_nextSifDmaTransferId++;
        if (id == 0u)
        {
            id = g_nextSifDmaTransferId++;
        }
        return id;
    }

    bool copyGuestByteRange(uint8_t *rdram, uint32_t dstAddr, uint32_t srcAddr, uint32_t sizeBytes)
    {
        if (!rdram || sizeBytes == 0u)
        {
            return true;
        }

        const uint64_t srcBegin = srcAddr;
        const uint64_t srcEnd = srcBegin + static_cast<uint64_t>(sizeBytes);
        const uint64_t dstBegin = dstAddr;
        const bool copyBackward = (dstBegin > srcBegin) && (dstBegin < srcEnd);

        if (copyBackward)
        {
            for (uint32_t i = sizeBytes; i > 0u; --i)
            {
                const uint32_t index = i - 1u;
                const uint8_t *src = getConstMemPtr(rdram, srcAddr + index);
                uint8_t *dst = getMemPtr(rdram, dstAddr + index);
                if (!src || !dst)
                {
                    return false;
                }
                *dst = *src;
            }
            return true;
        }

        for (uint32_t i = 0; i < sizeBytes; ++i)
        {
            const uint8_t *src = getConstMemPtr(rdram, srcAddr + i);
            uint8_t *dst = getMemPtr(rdram, dstAddr + i);
            if (!src || !dst)
            {
                return false;
            }
            *dst = *src;
        }
        return true;
    }
}

void sceSifAddCmdHandler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifAddCmdHandler", rdram, ctx, runtime);
}

void sceSifAllocIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t reqSize = getRegU32(ctx, 4);
    const uint32_t alignedSize = (reqSize + (kIopHeapAlign - 1)) & ~(kIopHeapAlign - 1);
    if (alignedSize == 0 || g_iopHeapNext + alignedSize > kIopHeapLimit)
    {
        setReturnS32(ctx, 0);
        return;
    }

    const uint32_t allocAddr = g_iopHeapNext;
    g_iopHeapNext += alignedSize;
    setReturnS32(ctx, static_cast<int32_t>(allocAddr));
}

void sceSifBindRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::SifBindRpc(rdram, ctx, runtime);
}

void sceSifCheckStatRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::SifCheckStatRpc(rdram, ctx, runtime);
}

void sceSifDmaStat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    (void)getRegU32(ctx, 4); // trid

    // Transfers are applied immediately by sceSifSetDma in this runtime.
    setReturnS32(ctx, -1);
}

void sceSifExecRequest(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceSifExitCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifExitCmd", rdram, ctx, runtime);
}

void sceSifExitRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceSifFreeIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceSifGetDataTable(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifGetDataTable", rdram, ctx, runtime);
}

void sceSifGetIopAddr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifGetIopAddr", rdram, ctx, runtime);
}

void sceSifGetNextRequest(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceSifGetOtherData(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)runtime;

    const uint32_t rdAddr = getRegU32(ctx, 4);
    const uint32_t srcAddr = getRegU32(ctx, 5);
    const uint32_t dstAddr = getRegU32(ctx, 6);
    const int32_t sizeSigned = static_cast<int32_t>(getRegU32(ctx, 7));

    if (sizeSigned <= 0)
    {
        setReturnS32(ctx, 0);
        return;
    }

    const uint32_t size = static_cast<uint32_t>(sizeSigned);
    if (size > PS2_RAM_SIZE)
    {
        static uint32_t warnCount = 0;
        if (warnCount < 32u)
        {
            std::cerr << "sceSifGetOtherData rejected oversized transfer size=0x"
                      << std::hex << size << std::dec << std::endl;
            ++warnCount;
        }
        setReturnS32(ctx, -1);
        return;
    }

    if (!copyGuestByteRange(rdram, dstAddr, srcAddr, size))
    {
        static uint32_t warnCount = 0;
        if (warnCount < 32u)
        {
            std::cerr << "sceSifGetOtherData copy failed src=0x" << std::hex << srcAddr
                      << " dst=0x" << dstAddr
                      << " size=0x" << size
                      << std::dec << std::endl;
            ++warnCount;
        }
        setReturnS32(ctx, -1);
        return;
    }

    // SifRpcReceiveData_t keeps src/dest/size at offsets 0x10/0x14/0x18.
    if (uint8_t *rd = getMemPtr(rdram, rdAddr))
    {
        std::memcpy(rd + 0x10u, &srcAddr, sizeof(srcAddr));
        std::memcpy(rd + 0x14u, &dstAddr, sizeof(dstAddr));
        std::memcpy(rd + 0x18u, &size, sizeof(size));
    }

    setReturnS32(ctx, 0);
}

void sceSifGetReg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifGetReg", rdram, ctx, runtime);
}

void sceSifGetSreg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifGetSreg", rdram, ctx, runtime);
}

void sceSifInitCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifInitCmd", rdram, ctx, runtime);
}

void sceSifInitIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    g_iopHeapNext = kIopHeapBase;
    setReturnS32(ctx, 0);
}

void sceSifInitRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::SifInitRpc(rdram, ctx, runtime);
}

void sceSifIsAliveIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifIsAliveIop", rdram, ctx, runtime);
}

void sceSifLoadElf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::sceSifLoadElf(rdram, ctx, runtime);
}

void sceSifLoadElfPart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::sceSifLoadElfPart(rdram, ctx, runtime);
}

void sceSifLoadFileReset(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifLoadFileReset", rdram, ctx, runtime);
}

void sceSifLoadIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceSifLoadModuleBuffer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::sceSifLoadModuleBuffer(rdram, ctx, runtime);
}

void sceSifRebootIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceSifRegisterRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::SifRegisterRpc(rdram, ctx, runtime);
}

void sceSifRemoveCmdHandler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifRemoveCmdHandler", rdram, ctx, runtime);
}

void sceSifRemoveRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::SifRemoveRpc(rdram, ctx, runtime);
}

void sceSifRemoveRpcQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::SifRemoveRpcQueue(rdram, ctx, runtime);
}

void sceSifResetIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifResetIop", rdram, ctx, runtime);
}

void sceSifRpcLoop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceSifSetCmdBuffer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifSetCmdBuffer", rdram, ctx, runtime);
}

void sceSifSetDChain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    (void)runtime;
    setReturnS32(ctx, 0);
}

void sceSifSetDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)runtime;

    const uint32_t dmatAddr = getRegU32(ctx, 4);
    const uint32_t count = getRegU32(ctx, 5);
    if (!dmatAddr || count == 0u || count > 32u)
    {
        setReturnS32(ctx, 0);
        return;
    }

    bool ok = true;
    for (uint32_t i = 0; i < count; ++i)
    {
        const uint32_t entryAddr = dmatAddr + (i * static_cast<uint32_t>(sizeof(Ps2SifDmaTransfer)));
        const uint8_t *entry = getConstMemPtr(rdram, entryAddr);
        if (!entry)
        {
            ok = false;
            break;
        }

        Ps2SifDmaTransfer xfer{};
        std::memcpy(&xfer, entry, sizeof(xfer));
        if (xfer.size <= 0)
        {
            continue;
        }

        const uint32_t sizeBytes = static_cast<uint32_t>(xfer.size);
        if (sizeBytes > PS2_RAM_SIZE)
        {
            ok = false;
            break;
        }
        if (!copyGuestByteRange(rdram, xfer.dest, xfer.src, sizeBytes))
        {
            ok = false;
            break;
        }
    }

    if (!ok)
    {
        static uint32_t warnCount = 0;
        if (warnCount < 32u)
        {
            std::cerr << "sceSifSetDma failed dmat=0x" << std::hex << dmatAddr
                      << " count=0x" << count
                      << std::dec << std::endl;
            ++warnCount;
        }
        setReturnS32(ctx, 0);
        return;
    }

    setReturnS32(ctx, static_cast<int32_t>(allocateSifDmaTransferId()));
}

void sceSifSetIopAddr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifSetIopAddr", rdram, ctx, runtime);
}

void sceSifSetReg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifSetReg", rdram, ctx, runtime);
}

void sceSifSetRpcQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::SifSetRpcQueue(rdram, ctx, runtime);
}

void sceSifSetSreg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifSetSreg", rdram, ctx, runtime);
}

void sceSifSetSysCmdBuffer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifSetSysCmdBuffer", rdram, ctx, runtime);
}

void sceSifStopDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifStopDma", rdram, ctx, runtime);
}

void sceSifSyncIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 1);
}

void sceSifWriteBackDCache(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSifWriteBackDCache", rdram, ctx, runtime);
}

void sceSSyn_BreakAtick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_BreakAtick", rdram, ctx, runtime);
}

void sceSSyn_ClearBreakAtick(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_ClearBreakAtick", rdram, ctx, runtime);
}

void sceSSyn_SendExcMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SendExcMsg", rdram, ctx, runtime);
}

void sceSSyn_SendNrpnMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SendNrpnMsg", rdram, ctx, runtime);
}

void sceSSyn_SendRpnMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SendRpnMsg", rdram, ctx, runtime);
}

void sceSSyn_SendShortMsg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SendShortMsg", rdram, ctx, runtime);
}

void sceSSyn_SetChPriority(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SetChPriority", rdram, ctx, runtime);
}

void sceSSyn_SetMasterVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SetMasterVolume", rdram, ctx, runtime);
}

void sceSSyn_SetOutPortVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SetOutPortVolume", rdram, ctx, runtime);
}

void sceSSyn_SetOutputAssign(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SetOutputAssign", rdram, ctx, runtime);
}

void sceSSyn_SetOutputMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceSSyn_SetPortMaxPoly(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SetPortMaxPoly", rdram, ctx, runtime);
}

void sceSSyn_SetPortVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SetPortVolume", rdram, ctx, runtime);
}

void sceSSyn_SetTvaEnvMode(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSSyn_SetTvaEnvMode", rdram, ctx, runtime);
}

void sceSynthesizerAmpProcI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerAmpProcI", rdram, ctx, runtime);
}

void sceSynthesizerAmpProcNI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerAmpProcNI", rdram, ctx, runtime);
}

void sceSynthesizerAssignAllNoteOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerAssignAllNoteOff", rdram, ctx, runtime);
}

void sceSynthesizerAssignAllSoundOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerAssignAllSoundOff", rdram, ctx, runtime);
}

void sceSynthesizerAssignHoldChange(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerAssignHoldChange", rdram, ctx, runtime);
}

void sceSynthesizerAssignNoteOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerAssignNoteOff", rdram, ctx, runtime);
}

void sceSynthesizerAssignNoteOn(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerAssignNoteOn", rdram, ctx, runtime);
}

void sceSynthesizerCalcEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerCalcEnv", rdram, ctx, runtime);
}

void sceSynthesizerCalcPortamentPitch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerCalcPortamentPitch", rdram, ctx, runtime);
}

void sceSynthesizerCalcTvfCoefAll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerCalcTvfCoefAll", rdram, ctx, runtime);
}

void sceSynthesizerCalcTvfCoefF0(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerCalcTvfCoefF0", rdram, ctx, runtime);
}

void sceSynthesizerCent2PhaseInc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerCent2PhaseInc", rdram, ctx, runtime);
}

void sceSynthesizerChangeEffectSend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangeEffectSend", rdram, ctx, runtime);
}

void sceSynthesizerChangeHsPanpot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangeHsPanpot", rdram, ctx, runtime);
}

void sceSynthesizerChangeNrpnCutOff(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangeNrpnCutOff", rdram, ctx, runtime);
}

void sceSynthesizerChangeNrpnLfoDepth(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangeNrpnLfoDepth", rdram, ctx, runtime);
}

void sceSynthesizerChangeNrpnLfoRate(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangeNrpnLfoRate", rdram, ctx, runtime);
}

void sceSynthesizerChangeOutAttrib(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangeOutAttrib", rdram, ctx, runtime);
}

void sceSynthesizerChangeOutVol(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangeOutVol", rdram, ctx, runtime);
}

void sceSynthesizerChangePanpot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePanpot", rdram, ctx, runtime);
}

void sceSynthesizerChangePartBendSens(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePartBendSens", rdram, ctx, runtime);
}

void sceSynthesizerChangePartExpression(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePartExpression", rdram, ctx, runtime);
}

void sceSynthesizerChangePartHsExpression(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePartHsExpression", rdram, ctx, runtime);
}

void sceSynthesizerChangePartHsPitchBend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePartHsPitchBend", rdram, ctx, runtime);
}

void sceSynthesizerChangePartModuration(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePartModuration", rdram, ctx, runtime);
}

void sceSynthesizerChangePartPitchBend(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePartPitchBend", rdram, ctx, runtime);
}

void sceSynthesizerChangePartVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePartVolume", rdram, ctx, runtime);
}

void sceSynthesizerChangePortamento(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePortamento", rdram, ctx, runtime);
}

void sceSynthesizerChangePortamentoTime(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerChangePortamentoTime", rdram, ctx, runtime);
}

void sceSynthesizerClearKeyMap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerClearKeyMap", rdram, ctx, runtime);
}

void sceSynthesizerClearSpr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerClearSpr", rdram, ctx, runtime);
}

void sceSynthesizerCopyOutput(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerCopyOutput", rdram, ctx, runtime);
}

void sceSynthesizerDmaFromSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerDmaFromSPR", rdram, ctx, runtime);
}

void sceSynthesizerDmaSpr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerDmaSpr", rdram, ctx, runtime);
}

void sceSynthesizerDmaToSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerDmaToSPR", rdram, ctx, runtime);
}

void sceSynthesizerGetPartial(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerGetPartial", rdram, ctx, runtime);
}

void sceSynthesizerGetPartOutLevel(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerGetPartOutLevel", rdram, ctx, runtime);
}

void sceSynthesizerGetSampleParam(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerGetSampleParam", rdram, ctx, runtime);
}

void sceSynthesizerHsMessage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerHsMessage", rdram, ctx, runtime);
}

void sceSynthesizerLfoNone(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerLfoNone", rdram, ctx, runtime);
}

void sceSynthesizerLfoProc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerLfoProc", rdram, ctx, runtime);
}

void sceSynthesizerLfoSawDown(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerLfoSawDown", rdram, ctx, runtime);
}

void sceSynthesizerLfoSawUp(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerLfoSawUp", rdram, ctx, runtime);
}

void sceSynthesizerLfoSquare(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerLfoSquare", rdram, ctx, runtime);
}

void sceSynthesizerReadNoise(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerReadNoise", rdram, ctx, runtime);
}

void sceSynthesizerReadNoiseAdd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerReadNoiseAdd", rdram, ctx, runtime);
}

void sceSynthesizerReadSample16(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerReadSample16", rdram, ctx, runtime);
}

void sceSynthesizerReadSample16Add(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerReadSample16Add", rdram, ctx, runtime);
}

void sceSynthesizerReadSample8(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerReadSample8", rdram, ctx, runtime);
}

void sceSynthesizerReadSample8Add(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerReadSample8Add", rdram, ctx, runtime);
}

void sceSynthesizerResetPart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerResetPart", rdram, ctx, runtime);
}

void sceSynthesizerRestorDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerRestorDma", rdram, ctx, runtime);
}

void sceSynthesizerSelectPatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSelectPatch", rdram, ctx, runtime);
}

void sceSynthesizerSendShortMessage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSendShortMessage", rdram, ctx, runtime);
}

void sceSynthesizerSetMasterVolume(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetMasterVolume", rdram, ctx, runtime);
}

void sceSynthesizerSetRVoice(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetRVoice", rdram, ctx, runtime);
}

void sceSynthesizerSetupDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupDma", rdram, ctx, runtime);
}

void sceSynthesizerSetupLfo(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupLfo", rdram, ctx, runtime);
}

void sceSynthesizerSetupMidiModuration(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupMidiModuration", rdram, ctx, runtime);
}

void sceSynthesizerSetupMidiPanpot(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupMidiPanpot", rdram, ctx, runtime);
}

void sceSynthesizerSetupNewNoise(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupNewNoise", rdram, ctx, runtime);
}

void sceSynthesizerSetupReleaseEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupReleaseEnv", rdram, ctx, runtime);
}

void sceSynthesizerSetuptEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetuptEnv", rdram, ctx, runtime);
}

void sceSynthesizerSetupTruncateTvaEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupTruncateTvaEnv", rdram, ctx, runtime);
}

void sceSynthesizerSetupTruncateTvfPitchEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerSetupTruncateTvfPitchEnv", rdram, ctx, runtime);
}

void sceSynthesizerTonegenerator(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerTonegenerator", rdram, ctx, runtime);
}

void sceSynthesizerTransposeMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerTransposeMatrix", rdram, ctx, runtime);
}

void sceSynthesizerTvfProcI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerTvfProcI", rdram, ctx, runtime);
}

void sceSynthesizerTvfProcNI(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerTvfProcNI", rdram, ctx, runtime);
}

void sceSynthesizerWaitDmaFromSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerWaitDmaFromSPR", rdram, ctx, runtime);
}

void sceSynthesizerWaitDmaToSPR(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthesizerWaitDmaToSPR", rdram, ctx, runtime);
}

void sceSynthsizerGetDrumPatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthsizerGetDrumPatch", rdram, ctx, runtime);
}

void sceSynthsizerGetMeloPatch(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthsizerGetMeloPatch", rdram, ctx, runtime);
}

void sceSynthsizerLfoNoise(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthsizerLfoNoise", rdram, ctx, runtime);
}

void sceSynthSizerLfoTriangle(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceSynthSizerLfoTriangle", rdram, ctx, runtime);
}

void sceTtyHandler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceTtyHandler", rdram, ctx, runtime);
}

void sceTtyInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceTtyInit", rdram, ctx, runtime);
}

void sceTtyRead(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceTtyRead", rdram, ctx, runtime);
}

void sceTtyWrite(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceTtyWrite", rdram, ctx, runtime);
}

void sceVpu0Reset(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceVu0AddVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0AddVector", rdram, ctx, runtime);
}

void sceVu0ApplyMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ApplyMatrix", rdram, ctx, runtime);
}

void sceVu0CameraMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0CameraMatrix", rdram, ctx, runtime);
}

void sceVu0ClampVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ClampVector", rdram, ctx, runtime);
}

void sceVu0ClipAll(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ClipAll", rdram, ctx, runtime);
}

void sceVu0ClipScreen(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ClipScreen", rdram, ctx, runtime);
}

void sceVu0ClipScreen3(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ClipScreen3", rdram, ctx, runtime);
}

void sceVu0CopyMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0CopyMatrix", rdram, ctx, runtime);
}

void sceVu0CopyVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0CopyVector", rdram, ctx, runtime);
}

void sceVu0CopyVectorXYZ(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0CopyVectorXYZ", rdram, ctx, runtime);
}

void sceVu0DivVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0DivVector", rdram, ctx, runtime);
}

void sceVu0DivVectorXYZ(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0DivVectorXYZ", rdram, ctx, runtime);
}

void sceVu0DropShadowMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0DropShadowMatrix", rdram, ctx, runtime);
}

void sceVu0FTOI0Vector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0FTOI0Vector", rdram, ctx, runtime);
}

void sceVu0FTOI4Vector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0FTOI4Vector", rdram, ctx, runtime);
}

void sceVu0InnerProduct(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0InnerProduct", rdram, ctx, runtime);
}

void sceVu0InterVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0InterVector", rdram, ctx, runtime);
}

void sceVu0InterVectorXYZ(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0InterVectorXYZ", rdram, ctx, runtime);
}

void sceVu0InversMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0InversMatrix", rdram, ctx, runtime);
}

void sceVu0ITOF0Vector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ITOF0Vector", rdram, ctx, runtime);
}

void sceVu0ITOF12Vector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ITOF12Vector", rdram, ctx, runtime);
}

void sceVu0ITOF4Vector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ITOF4Vector", rdram, ctx, runtime);
}

void sceVu0LightColorMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0LightColorMatrix", rdram, ctx, runtime);
}

void sceVu0MulMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0MulMatrix", rdram, ctx, runtime);
}

void sceVu0MulVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0MulVector", rdram, ctx, runtime);
}

void sceVu0Normalize(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0Normalize", rdram, ctx, runtime);
}

void sceVu0NormalLightMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0NormalLightMatrix", rdram, ctx, runtime);
}

void sceVu0OuterProduct(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0OuterProduct", rdram, ctx, runtime);
}

void sceVu0RotMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0RotMatrix", rdram, ctx, runtime);
}

void sceVu0RotMatrixX(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0RotMatrixX", rdram, ctx, runtime);
}

void sceVu0RotMatrixY(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0RotMatrixY", rdram, ctx, runtime);
}

void sceVu0RotMatrixZ(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0RotMatrixZ", rdram, ctx, runtime);
}

void sceVu0RotTransPers(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0RotTransPers", rdram, ctx, runtime);
}

void sceVu0RotTransPersN(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0RotTransPersN", rdram, ctx, runtime);
}

void sceVu0ScaleVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ScaleVector", rdram, ctx, runtime);
}

void sceVu0ScaleVectorXYZ(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ScaleVectorXYZ", rdram, ctx, runtime);
}

void sceVu0SubVector(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0SubVector", rdram, ctx, runtime);
}

void sceVu0TransMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0TransMatrix", rdram, ctx, runtime);
}

void sceVu0TransposeMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0TransposeMatrix", rdram, ctx, runtime);
}

void sceVu0UnitMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    const uint32_t dstAddr = getRegU32(ctx, 4); // sceVu0FMATRIX dst
    alignas(16) const float identity[16] = {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f};

    if (!writeGuestBytes(rdram, runtime, dstAddr, reinterpret_cast<const uint8_t *>(identity), sizeof(identity)))
    {
        static uint32_t warnCount = 0;
        if (warnCount < 8)
        {
            std::cerr << "sceVu0UnitMatrix: failed to write matrix at 0x"
                      << std::hex << dstAddr << std::dec << std::endl;
            ++warnCount;
        }
    }

    setReturnS32(ctx, 0);
}

void sceVu0ViewScreenMatrix(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceVu0ViewScreenMatrix", rdram, ctx, runtime);
}

void sceWrite(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioWrite(rdram, ctx, runtime);
}

void srand(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("srand", rdram, ctx, runtime);
}

void stat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("stat", rdram, ctx, runtime);
}

void strcasecmp(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("strcasecmp", rdram, ctx, runtime);
}

void vfprintf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t file_handle = getRegU32(ctx, 4);  // $a0
    uint32_t format_addr = getRegU32(ctx, 5);  // $a1
    uint32_t va_list_addr = getRegU32(ctx, 6); // $a2
    FILE *fp = get_file_ptr(file_handle);
    const std::string formatOwned = readPs2CStringBounded(rdram, runtime, format_addr, 1024);
    int ret = -1;

    if (fp && format_addr != 0)
    {
        std::string rendered = formatPs2StringWithVaList(rdram, runtime, formatOwned.c_str(), va_list_addr);
        ret = std::fprintf(fp, "%s", rendered.c_str());
    }
    else
    {
        std::cerr << "vfprintf error: Invalid file handle or format address."
                  << " Handle: 0x" << std::hex << file_handle << " (file valid: " << (fp != nullptr) << ")"
                  << ", Format: 0x" << format_addr << std::dec
                  << std::endl;
    }

    setReturnS32(ctx, ret);
}

void vsprintf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t str_addr = getRegU32(ctx, 4);     // $a0
    uint32_t format_addr = getRegU32(ctx, 5);  // $a1
    uint32_t va_list_addr = getRegU32(ctx, 6); // $a2
    const std::string formatOwned = readPs2CStringBounded(rdram, runtime, format_addr, 1024);
    int ret = -1;

    if (format_addr != 0)
    {
        std::string rendered = formatPs2StringWithVaList(rdram, runtime, formatOwned.c_str(), va_list_addr);
        if (writeGuestBytes(rdram, runtime, str_addr, reinterpret_cast<const uint8_t *>(rendered.c_str()), rendered.size() + 1u))
        {
            ret = static_cast<int>(rendered.size());
        }
        else
        {
            std::cerr << "vsprintf error: Failed to write destination buffer at 0x"
                      << std::hex << str_addr << std::dec << std::endl;
        }
    }
    else
    {
        std::cerr << "vsprintf error: Invalid address provided."
                  << " Dest: 0x" << std::hex << str_addr
                  << ", Format: 0x" << format_addr << std::dec
                  << std::endl;
    }

    setReturnS32(ctx, ret);
}

void write(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    ps2_syscalls::fioWrite(rdram, ctx, runtime);
}
