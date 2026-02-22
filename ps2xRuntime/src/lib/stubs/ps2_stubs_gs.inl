void sceGsExecLoadImage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t imgAddr = getRegU32(ctx, 4);
    uint32_t srcAddr = getRegU32(ctx, 5);

    GsImageMem img{};
    if (!runtime || !readGsImage(rdram, imgAddr, img))
    {
        setReturnS32(ctx, -1);
        return;
    }

    const uint32_t rowBytes = bytesForPixels(img.psm, static_cast<uint32_t>(img.width));
    if (rowBytes == 0)
    {
        setReturnS32(ctx, -1);
        return;
    }

    uint32_t fbw = img.vram_width ? img.vram_width : std::max<uint32_t>(1, (img.width + 63) / 64);
    uint32_t base = static_cast<uint32_t>(img.vram_addr) * 2048u;
    uint32_t stride = bytesForPixels(img.psm, fbw * 64u);
    if (stride == 0)
    {
        setReturnS32(ctx, -1);
        return;
    }

    uint8_t *gsvram = runtime->memory().getGSVRAM();
    uint8_t *src = getMemPtr(rdram, srcAddr);
    if (!gsvram || !src)
    {
        setReturnS32(ctx, -1);
        return;
    }

    for (uint32_t row = 0; row < img.height; ++row)
    {
        uint32_t dstOff = base + (static_cast<uint32_t>(img.y) + row) * stride + bytesForPixels(img.psm, static_cast<uint32_t>(img.x));
        uint32_t srcOff = row * rowBytes;
        if (dstOff >= PS2_GS_VRAM_SIZE)
            break;
        uint32_t copyBytes = rowBytes;
        if (dstOff + copyBytes > PS2_GS_VRAM_SIZE)
            copyBytes = PS2_GS_VRAM_SIZE - dstOff;
        std::memcpy(gsvram + dstOff, src + srcOff, copyBytes);
    }

    if (img.width >= 320 && img.height >= 200)
    {
        auto &gs = runtime->memory().gs();
        gs.dispfb1 = makeDispFb(img.vram_addr, fbw, img.psm, 0, 0);
        gs.display1 = makeDisplay(0, 0, 0, 0, img.width - 1, img.height - 1);
    }

    setReturnS32(ctx, 0);
}

void sceGsExecStoreImage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t imgAddr = getRegU32(ctx, 4);
    uint32_t dstAddr = getRegU32(ctx, 5);

    GsImageMem img{};
    if (!runtime || !readGsImage(rdram, imgAddr, img))
    {
        setReturnS32(ctx, -1);
        return;
    }

    const uint32_t rowBytes = bytesForPixels(img.psm, static_cast<uint32_t>(img.width));
    if (rowBytes == 0)
    {
        setReturnS32(ctx, -1);
        return;
    }

    uint32_t fbw = img.vram_width ? img.vram_width : std::max<uint32_t>(1, (img.width + 63) / 64);
    uint32_t base = static_cast<uint32_t>(img.vram_addr) * 2048u;
    uint32_t stride = bytesForPixels(img.psm, fbw * 64u);
    if (stride == 0)
    {
        setReturnS32(ctx, -1);
        return;
    }

    uint8_t *gsvram = runtime->memory().getGSVRAM();
    uint8_t *dst = getMemPtr(rdram, dstAddr);
    if (!gsvram || !dst)
    {
        setReturnS32(ctx, -1);
        return;
    }

    for (uint32_t row = 0; row < img.height; ++row)
    {
        uint32_t srcOff = base + (static_cast<uint32_t>(img.y) + row) * stride + bytesForPixels(img.psm, static_cast<uint32_t>(img.x));
        uint32_t dstOff = row * rowBytes;
        if (srcOff >= PS2_GS_VRAM_SIZE)
            break;
        uint32_t copyBytes = rowBytes;
        if (srcOff + copyBytes > PS2_GS_VRAM_SIZE)
            copyBytes = PS2_GS_VRAM_SIZE - srcOff;
        std::memcpy(dst + dstOff, gsvram + srcOff, copyBytes);
    }

    setReturnS32(ctx, 0);
}

void sceGsGetGParam(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t addr = writeGsGParamToScratch(runtime);
    setReturnU32(ctx, addr);
}

void sceGsPutDispEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t envAddr = getRegU32(ctx, 4);
    GsDispEnvMem env{};
    if (readGsDispEnv(rdram, envAddr, env))
    {
        auto &gs = runtime->memory().gs();
        if (env.pmode)
            gs.pmode = env.pmode;
        if (env.smode2)
            gs.smode2 = env.smode2;
        gs.dispfb1 = env.dispfb;
        gs.display1 = env.display;
        if (env.bgcolor)
            gs.bgcolor = env.bgcolor;

    }
    setReturnS32(ctx, 0);
}

void sceGsPutDrawEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    static int s_callCount = 0;
    ++s_callCount;
    uint32_t envAddr = getRegU32(ctx, 4);
    uint8_t *ptr = getMemPtr(rdram, envAddr);
    if (!ptr)
    {
        std::fprintf(stderr, "[sceGsPutDrawEnv #%d] FAILED: null ptr for envAddr=0x%08x\n", s_callCount, envAddr);
        setReturnS32(ctx, -1);
        return;
    }

    if (s_callCount <= 10 || (s_callCount % 200) == 0) {
        uint64_t gifTag0 = 0, gifTag1 = 0;
        std::memcpy(&gifTag0, ptr, 8);
        std::memcpy(&gifTag1, ptr + 8, 8);
        uint32_t nloop = (uint32_t)(gifTag0 & 0x7FFF);
        uint32_t flg = (uint32_t)((gifTag0 >> 26) & 0x3);
        uint32_t nreg = (uint32_t)((gifTag0 >> 60) & 0xF);
        if (nreg == 0) nreg = 16;
        std::fprintf(stderr, "[sceGsPutDrawEnv #%d] envAddr=0x%08x nloop=%u flg=%u nreg=%u\n",
                     s_callCount, envAddr, nloop, flg, nreg);
        uint32_t numQW = (flg == 0) ? nloop * nreg : nloop;
        if (numQW > 8) numQW = 8;
        for (uint32_t i = 0; i < numQW; ++i) {
            uint64_t data = 0, addr = 0;
            std::memcpy(&data, ptr + 16 + i * 16, 8);
            std::memcpy(&addr, ptr + 16 + i * 16 + 8, 8);
            uint32_t regId = (uint32_t)(addr & 0xFF);
            const char *regName = "?";
            if (regId == 0x4C) regName = "FRAME_1";
            else if (regId == 0x4D) regName = "FRAME_2";
            else if (regId == 0x40) regName = "SCISSOR_1";
            else if (regId == 0x18) regName = "XYOFFSET_1";
            else if (regId == 0x19) regName = "XYOFFSET_2";
            else if (regId == 0x47) regName = "TEST_1";
            else if (regId == 0x42) regName = "ALPHA_1";
            else if (regId == 0x4E) regName = "ZBUF_1";
            std::fprintf(stderr, "  [DrawEnv %u] reg=0x%02x(%s) data=0x%016llx",
                         i, regId, regName, (unsigned long long)data);
            if (regId == 0x4C || regId == 0x4D) {
                uint32_t fbp = (uint32_t)(data & 0x1FF);
                uint32_t fbw = (uint32_t)((data >> 16) & 0x3F);
                uint32_t psm = (uint32_t)((data >> 24) & 0x3F);
                uint32_t fbmsk = (uint32_t)(data >> 32);
                std::fprintf(stderr, " fbp=%u(base=0x%x) fbw=%u psm=%u fbmsk=0x%08x", fbp, fbp * 8192, fbw, psm, fbmsk);
            }
            std::fprintf(stderr, "\n");
        }
    }

    runtime->gs().processGIFPacket(ptr, 144);

    setReturnS32(ctx, 0);
}

void sceGsResetGraph(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t mode = getRegU32(ctx, 4);
    uint32_t interlace = getRegU32(ctx, 5);
    uint32_t omode = getRegU32(ctx, 6);
    uint32_t ffmode = getRegU32(ctx, 7);

    if (mode == 0)
    {
        g_gparam.interlace = static_cast<uint8_t>(interlace & 0x1);
        g_gparam.omode = static_cast<uint8_t>(omode & 0xFF);
        g_gparam.ffmode = static_cast<uint8_t>(ffmode & 0x1);
        writeGsGParamToScratch(runtime);

        auto &gs = runtime->memory().gs();
        gs.pmode = makePmode(1, 0, 0, 0, 0, 0x80);
        gs.smode2 = (interlace & 0x1) | ((ffmode & 0x1) << 1);
        gs.dispfb1 = makeDispFb(0, 10, 0, 0, 0);
        gs.display1 = makeDisplay(0, 0, 0, 0, 639, 447);
    }

    setReturnS32(ctx, 0);
}

void sceGsResetPath(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceGsSetDefClear(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    TODO_NAMED("sceGsSetDefClear", rdram, ctx, runtime);
}

void sceGsSetDefDBuffDc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceGsSetDefDispEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t envAddr = getRegU32(ctx, 4);
    uint32_t psm = getRegU32(ctx, 5);
    uint32_t w = getRegU32(ctx, 6);
    uint32_t h = getRegU32(ctx, 7);
    uint32_t dx = readStackU32(rdram, ctx, 16);
    uint32_t dy = readStackU32(rdram, ctx, 20);

    if (w == 0)
        w = 640;
    if (h == 0)
        h = 448;

    uint32_t fbw = (w + 63) / 64;
    uint64_t dispfb = makeDispFb(0, fbw, psm, 0, 0);
    uint64_t display = makeDisplay(dx, dy, 0, 0, w - 1, h - 1);

    writeGsDispEnv(rdram, envAddr, display, dispfb);
    setReturnS32(ctx, 0);
}

void sceGsSetDefDrawEnv(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t envAddr = getRegU32(ctx, 4);
    uint32_t param_2 = getRegU32(ctx, 5);
    int32_t w = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 6) & 0xFFFF));
    int32_t h = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 7) & 0xFFFF));
    uint32_t param_5 = readStackU32(rdram, ctx, 16);
    uint32_t param_6 = readStackU32(rdram, ctx, 20);

    if (w <= 0)
        w = 640;
    if (h <= 0)
        h = 448;

    uint32_t psm = param_2 & 0xFU;
    uint32_t fbw = ((static_cast<uint32_t>(w) + 63u) >> 6) & 0x3FU;
    sceGszbufaddr(rdram, ctx, runtime);
    int32_t zbuf = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 2) & 0xFFFF));

    uint8_t *const ptr = getMemPtr(rdram, envAddr);
    if (!ptr)
    {
        setReturnS32(ctx, 8);
        return;
    }

    uint64_t *const words = reinterpret_cast<uint64_t *>(ptr);

    // sceGsDrawEnv1 layout: GIF tag (16 bytes) + 8 A+D entries (128 bytes) = 144 bytes
    words[0] = 0x1000000000008008ULL; // NLOOP=8, EOP=1, FLG=PACKED, NREG=1
    words[1] = 0x000000000000000EULL; // REG descriptor = A+D

    // FRAME_1 (register 0x4C)
    words[2] = (static_cast<uint64_t>(fbw) << 16) | (static_cast<uint64_t>(psm) << 24);
    words[3] = 0x4c;

    // ZBUF_1 (register 0x4E)
    words[4] = (static_cast<uint64_t>(zbuf) & 0xFFFFULL) | (static_cast<uint64_t>(param_6 & 0xF) << 24) |
               (param_5 == 0 ? 0x100000000ULL : 0ULL);
    words[5] = 0x4e;

    // XYOFFSET_1 (register 0x18)
    int32_t off_x = 0x800 - (w >> 1);
    int32_t off_y = 0x800 - (h >> 1);
    words[6] = (static_cast<uint64_t>(static_cast<uint32_t>(off_y) & 0xFFFF) << 36) |
               (static_cast<uint32_t>(off_x) & 0xFFFF) * 16ULL;
    words[7] = 0x18;

    // SCISSOR_1 (register 0x40)
    words[8] = (static_cast<uint64_t>(static_cast<uint32_t>(h - 1) & 0xFFFF) << 48) |
               (static_cast<uint64_t>(static_cast<uint32_t>(w - 1) & 0xFFFF) << 16);
    words[9] = 0x40;

    // PRMODECONT (register 0x1A)
    words[10] = 1;
    words[11] = 0x1a;

    // COLCLAMP (register 0x46)
    words[12] = 1;
    words[13] = 0x46;

    // DTHE (register 0x45)
    words[14] = (param_2 & 2) ? 1ULL : 0ULL;
    words[15] = 0x45;

    // TEST_1 (register 0x47)
    words[16] = (param_5 == 0) ? 0x30000ULL : ((static_cast<uint64_t>(param_5 & 3) << 17) | 0x10000ULL);
    words[17] = 0x47;

    setReturnS32(ctx, 8);
}

void sceGsSetDefDrawEnv2(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    sceGsSetDefDrawEnv(rdram, ctx, runtime);
}

void sceGsSetDefLoadImage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    uint32_t imgAddr = getRegU32(ctx, 4);
    const GsSetDefImageArgs args = decodeGsSetDefImageArgs(rdram, ctx);

    GsImageMem img{};
    img.x = static_cast<uint16_t>(args.x);
    img.y = static_cast<uint16_t>(args.y);
    img.width = static_cast<uint16_t>(args.width);
    img.height = static_cast<uint16_t>(args.height);
    img.vram_addr = static_cast<uint16_t>(args.vramAddr);
    img.vram_width = static_cast<uint8_t>(args.vramWidth);
    img.psm = static_cast<uint8_t>(args.psm);

    writeGsImage(rdram, imgAddr, img);
    setReturnS32(ctx, 0);
}

void sceGsSetDefStoreImage(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    sceGsSetDefLoadImage(rdram, ctx, runtime);
}

void sceGsSwapDBuffDc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    // can we get away with that ? kkkk
    static int cur = 0;
    cur ^= 1;
    setReturnS32(ctx, cur);
}

void sceGsSyncPath(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    int32_t mode = static_cast<int32_t>(getRegU32(ctx, 4));
    auto &mem = runtime->memory();

    if (mode == 0)
    {
        uint32_t count = 0;
        constexpr uint32_t kTimeout = 0x1000000;

        while ((mem.readIORegister(0x10009000) & 0x100) != 0)
        {
            if (++count > kTimeout)
            {
                std::cerr << "sceGsSyncPath: DMA Ch.1 does not terminate" << std::endl;
                setReturnS32(ctx, -1);
                return;
            }
        }

        while ((mem.readIORegister(0x1000A000) & 0x100) != 0)
        {
            if (++count > kTimeout)
            {
                std::cerr << "sceGsSyncPath: DMA Ch.2 does not terminate" << std::endl;
                setReturnS32(ctx, -1);
                return;
            }
        }

        while ((mem.readIORegister(0x10003C00) & 0x1F000003) != 0)
        {
            if (++count > kTimeout)
            {
                std::cerr << "sceGsSyncPath: VIF1 does not terminate" << std::endl;
                setReturnS32(ctx, -1);
                return;
            }
        }

        // VU1 status via CFC2 — not emulated, always idle

        while ((mem.readIORegister(0x10003020) & 0xC00) != 0)
        {
            if (++count > kTimeout)
            {
                std::cerr << "sceGsSyncPath: GIF does not terminate" << std::endl;
                setReturnS32(ctx, -1);
                return;
            }
        }

        setReturnS32(ctx, 0);
    }
    else
    {
        uint32_t result = 0;

        if ((mem.readIORegister(0x10009000) & 0x100) != 0)
            result |= 1;
        if ((mem.readIORegister(0x1000A000) & 0x100) != 0)
            result |= 2;
        if ((mem.readIORegister(0x10003C00) & 0x1F000003) != 0)
            result |= 4;
        // VU1 status: not emulated, always idle
        if ((mem.readIORegister(0x10003020) & 0xC00) != 0)
            result |= 0x10;

        setReturnS32(ctx, result);
    }
}

void sceGsSyncV(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceGsSyncVCallback(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    setReturnS32(ctx, 0);
}

void sceGszbufaddr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
{
    (void)rdram;
    uint32_t param_1 = getRegU32(ctx, 4);
    int32_t w = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 6) & 0xFFFF));
    int32_t h = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 7) & 0xFFFF));

    int32_t width_blocks = (w + 63) >> 6;
    if (w + 63 < 0)
        width_blocks = (w + 126) >> 6;

    int32_t height_blocks;
    if ((param_1 & 2) != 0)
    {
        int32_t v = (h + 63) >> 6;
        if (h + 63 < 0)
            v = (h + 126) >> 6;
        height_blocks = v;
    }
    else
    {
        int32_t v = (h + 31) >> 5;
        if (h + 31 < 0)
            v = (h + 62) >> 5;
        height_blocks = v;
    }

    int32_t product = width_blocks * height_blocks;

    uint64_t gparam_val = 0;
    if (runtime)
    {
        uint8_t *scratch = runtime->memory().getScratchpad();
        if (scratch)
        {
            std::memcpy(&gparam_val, scratch + 0x100, sizeof(gparam_val));
        }
    }
    if ((gparam_val & 0xFFFF0000FFFFULL) == 1ULL)
        product = (product * 0x10000) >> 16;
    else
        product = (product * 0x20000) >> 16;

    setReturnS32(ctx, product);
}
