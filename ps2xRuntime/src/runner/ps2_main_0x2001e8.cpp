#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: main
// Address: 0x2001e8 - 0x200990
void ps2_main_0x2001e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2001e8u;

    // 0x2001e8: 0x27bdff30
    ctx->pc = 0x2001e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2001ec: 0xffbf00c0
    ctx->pc = 0x2001ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2001f0: 0xffbe00b0
    ctx->pc = 0x2001f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2001f4: 0xffb700a0
    ctx->pc = 0x2001f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2001f8: 0xffb60090
    ctx->pc = 0x2001f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2001fc: 0xffb50080
    ctx->pc = 0x2001fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x200200: 0xffb40070
    ctx->pc = 0x200200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x200204: 0xffb30060
    ctx->pc = 0x200204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x200208: 0xffb20050
    ctx->pc = 0x200208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20020c: 0xffb10040
    ctx->pc = 0x20020cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x200210: 0xffb00030
    ctx->pc = 0x200210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x200214: 0x80802d
    ctx->pc = 0x200214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200218: 0xc0bdeea
    ctx->pc = 0x200218u;
    SET_GPR_U32(ctx, 31, 0x200220u);
    ctx->pc = 0x20021Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F7BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___main_0x2f7ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200220u; }
    }
    if (ctx->pc != 0x200220u) { return; }
    ctx->pc = 0x200220u;
    // 0x200220: 0x3c030037
    ctx->pc = 0x200220u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x200224: 0x24020003
    ctx->pc = 0x200224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x200228: 0xac62834c
    ctx->pc = 0x200228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935372), GPR_U32(ctx, 2));
    // 0x20022c: 0x3c030037
    ctx->pc = 0x20022cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x200230: 0x24020200
    ctx->pc = 0x200230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 512));
    // 0x200234: 0xac628350
    ctx->pc = 0x200234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935376), GPR_U32(ctx, 2));
    // 0x200238: 0x3c030037
    ctx->pc = 0x200238u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x20023c: 0x24020240
    ctx->pc = 0x20023cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 576));
    // 0x200240: 0xac628354
    ctx->pc = 0x200240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935380), GPR_U32(ctx, 2));
    // 0x200244: 0x3c030037
    ctx->pc = 0x200244u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x200248: 0x24020210
    ctx->pc = 0x200248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 528));
    // 0x20024c: 0xac628358
    ctx->pc = 0x20024cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935384), GPR_U32(ctx, 2));
    // 0x200250: 0x3c02003a
    ctx->pc = 0x200250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x200254: 0x3c013fc0
    ctx->pc = 0x200254u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x200258: 0x44810000
    ctx->pc = 0x200258u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x20025c: 0xe44014c0
    ctx->pc = 0x20025cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5312), bits); }
    // 0x200260: 0x3c020031
    ctx->pc = 0x200260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x200264: 0x8c42f184
    ctx->pc = 0x200264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x200268: 0x1040000d
    ctx->pc = 0x200268u;
    {
        const bool branch_taken_0x200268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20026Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200268) {
            ctx->pc = 0x2002A0u;
            goto label_2002a0;
        }
    }
    ctx->pc = 0x200270u;
    // 0x200270: 0x200202d
    ctx->pc = 0x200270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200274: 0x3c060031
    ctx->pc = 0x200274u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x200278: 0x24c6f1ac
    ctx->pc = 0x200278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294963628));
    // 0x20027c: 0x3c070031
    ctx->pc = 0x20027cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)49 << 16));
    // 0x200280: 0x24e7f1ae
    ctx->pc = 0x200280u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294963630));
    // 0x200284: 0x3c080031
    ctx->pc = 0x200284u;
    SET_GPR_U32(ctx, 8, ((uint32_t)49 << 16));
    // 0x200288: 0x2508f1b0
    ctx->pc = 0x200288u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294963632));
    // 0x20028c: 0x3c090031
    ctx->pc = 0x20028cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)49 << 16));
    // 0x200290: 0x2529f1b2
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294963634));
    // 0x200294: 0x3c0a0031
    ctx->pc = 0x200294u;
    SET_GPR_U32(ctx, 10, ((uint32_t)49 << 16));
    // 0x200298: 0xc0bde6a
    ctx->pc = 0x200298u;
    SET_GPR_U32(ctx, 31, 0x2002A0u);
    ctx->pc = 0x20029Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294963636));
    ctx->pc = 0x2F79A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeDemoStart_0x2f79a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002A0u; }
    }
    if (ctx->pc != 0x2002A0u) { return; }
    ctx->pc = 0x2002A0u;
label_2002a0:
    // 0x2002a0: 0x3c030031
    ctx->pc = 0x2002a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2002a4: 0x9462f1b2
    ctx->pc = 0x2002a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963634)));
    // 0x2002a8: 0x2404003c
    ctx->pc = 0x2002a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2002ac: 0x441018
    ctx->pc = 0x2002acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2002b0: 0xa462f1b2
    ctx->pc = 0x2002b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963634), (uint16_t)GPR_U32(ctx, 2));
    // 0x2002b4: 0x3c030031
    ctx->pc = 0x2002b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2002b8: 0x9462f1b4
    ctx->pc = 0x2002b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963636)));
    // 0x2002bc: 0x441018
    ctx->pc = 0x2002bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2002c0: 0xa462f1b4
    ctx->pc = 0x2002c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963636), (uint16_t)GPR_U32(ctx, 2));
    // 0x2002c4: 0x3c030037
    ctx->pc = 0x2002c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2002c8: 0x240200ff
    ctx->pc = 0x2002c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2002cc: 0xac628008
    ctx->pc = 0x2002ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294934536), GPR_U32(ctx, 2));
    // 0x2002d0: 0x3c020031
    ctx->pc = 0x2002d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2002d4: 0xac40f1c0
    ctx->pc = 0x2002d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963648), GPR_U32(ctx, 0));
    // 0x2002d8: 0xc080032
    ctx->pc = 0x2002D8u;
    SET_GPR_U32(ctx, 31, 0x2002E0u);
    ctx->pc = 0x2002DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2000C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        main_init_0x2000c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2002E0u; }
    }
    if (ctx->pc != 0x2002E0u) { return; }
    ctx->pc = 0x2002E0u;
    // 0x2002e0: 0x3c020031
    ctx->pc = 0x2002e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2002e4: 0x8c42f184
    ctx->pc = 0x2002e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2002e8: 0x50400027
    ctx->pc = 0x2002E8u;
    {
        const bool branch_taken_0x2002e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2002e8) {
            ctx->pc = 0x2002ECu;
            SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
            ctx->pc = 0x200388u;
            goto label_200388;
        }
    }
    ctx->pc = 0x2002F0u;
    // 0x2002f0: 0x3c04003a
    ctx->pc = 0x2002f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2002f4: 0x24844388
    ctx->pc = 0x2002f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17288));
    // 0x2002f8: 0x282d
    ctx->pc = 0x2002f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002fc: 0x302d
    ctx->pc = 0x2002fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200300: 0xc080d22
    ctx->pc = 0x200300u;
    SET_GPR_U32(ctx, 31, 0x200308u);
    ctx->pc = 0x200304u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200308u; }
    }
    if (ctx->pc != 0x200308u) { return; }
    ctx->pc = 0x200308u;
    // 0x200308: 0xc0b0112
    ctx->pc = 0x200308u;
    SET_GPR_U32(ctx, 31, 0x200310u);
    ctx->pc = 0x20030Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C0448u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaAlloc_0x2c0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200310u; }
    }
    if (ctx->pc != 0x200310u) { return; }
    ctx->pc = 0x200310u;
    // 0x200310: 0xc0b0176
    ctx->pc = 0x200310u;
    SET_GPR_U32(ctx, 31, 0x200318u);
    ctx->pc = 0x200314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C05D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaAlloc_0x2c05d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200318u; }
    }
    if (ctx->pc != 0x200318u) { return; }
    ctx->pc = 0x200318u;
    // 0x200318: 0x3c04003a
    ctx->pc = 0x200318u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20031c: 0x24844390
    ctx->pc = 0x20031cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17296));
    // 0x200320: 0x282d
    ctx->pc = 0x200320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200324: 0xc0b0c08
    ctx->pc = 0x200324u;
    SET_GPR_U32(ctx, 31, 0x20032Cu);
    ctx->pc = 0x200328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20032Cu; }
    }
    if (ctx->pc != 0x20032Cu) { return; }
    ctx->pc = 0x20032Cu;
    // 0x20032c: 0x3c04003a
    ctx->pc = 0x20032cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200330: 0x248443a8
    ctx->pc = 0x200330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17320));
    // 0x200334: 0x24050100
    ctx->pc = 0x200334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    // 0x200338: 0xc0b0c08
    ctx->pc = 0x200338u;
    SET_GPR_U32(ctx, 31, 0x200340u);
    ctx->pc = 0x20033Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200340u; }
    }
    if (ctx->pc != 0x200340u) { return; }
    ctx->pc = 0x200340u;
    // 0x200340: 0x3c04003a
    ctx->pc = 0x200340u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200344: 0x248443c0
    ctx->pc = 0x200344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17344));
    // 0x200348: 0x282d
    ctx->pc = 0x200348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20034c: 0xc0b0c08
    ctx->pc = 0x20034Cu;
    SET_GPR_U32(ctx, 31, 0x200354u);
    ctx->pc = 0x200350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200354u; }
    }
    if (ctx->pc != 0x200354u) { return; }
    ctx->pc = 0x200354u;
    // 0x200354: 0x3c04003a
    ctx->pc = 0x200354u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200358: 0x248443d8
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17368));
    // 0x20035c: 0x24050100
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    // 0x200360: 0xc0b0c08
    ctx->pc = 0x200360u;
    SET_GPR_U32(ctx, 31, 0x200368u);
    ctx->pc = 0x200364u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200368u; }
    }
    if (ctx->pc != 0x200368u) { return; }
    ctx->pc = 0x200368u;
    // 0x200368: 0xc0b179a
    ctx->pc = 0x200368u;
    SET_GPR_U32(ctx, 31, 0x200370u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200370u; }
    }
    if (ctx->pc != 0x200370u) { return; }
    ctx->pc = 0x200370u;
    // 0x200370: 0xc0b179a
    ctx->pc = 0x200370u;
    SET_GPR_U32(ctx, 31, 0x200378u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200378u; }
    }
    if (ctx->pc != 0x200378u) { return; }
    ctx->pc = 0x200378u;
    // 0x200378: 0xc0b1bd4
    ctx->pc = 0x200378u;
    SET_GPR_U32(ctx, 31, 0x200380u);
    ctx->pc = 0x20037Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200380u; }
    }
    if (ctx->pc != 0x200380u) { return; }
    ctx->pc = 0x200380u;
    // 0x200380: 0x10000025
    ctx->pc = 0x200380u;
    {
        const bool branch_taken_0x200380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200384u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x200380) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x200388u;
label_200388:
    // 0x200388: 0x248443f0
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17392));
    // 0x20038c: 0x282d
    ctx->pc = 0x20038cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200390: 0x302d
    ctx->pc = 0x200390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200394: 0xc080d22
    ctx->pc = 0x200394u;
    SET_GPR_U32(ctx, 31, 0x20039Cu);
    ctx->pc = 0x200398u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20039Cu; }
    }
    if (ctx->pc != 0x20039Cu) { return; }
    ctx->pc = 0x20039Cu;
    // 0x20039c: 0xc0b0112
    ctx->pc = 0x20039Cu;
    SET_GPR_U32(ctx, 31, 0x2003A4u);
    ctx->pc = 0x2003A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C0448u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaAlloc_0x2c0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003A4u; }
    }
    if (ctx->pc != 0x2003A4u) { return; }
    ctx->pc = 0x2003A4u;
    // 0x2003a4: 0xc0b0176
    ctx->pc = 0x2003A4u;
    SET_GPR_U32(ctx, 31, 0x2003ACu);
    ctx->pc = 0x2003A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C05D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaAlloc_0x2c05d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003ACu; }
    }
    if (ctx->pc != 0x2003ACu) { return; }
    ctx->pc = 0x2003ACu;
    // 0x2003ac: 0x3c04003a
    ctx->pc = 0x2003acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2003b0: 0x248443f8
    ctx->pc = 0x2003b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17400));
    // 0x2003b4: 0x282d
    ctx->pc = 0x2003b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003b8: 0xc0b0c08
    ctx->pc = 0x2003B8u;
    SET_GPR_U32(ctx, 31, 0x2003C0u);
    ctx->pc = 0x2003BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003C0u; }
    }
    if (ctx->pc != 0x2003C0u) { return; }
    ctx->pc = 0x2003C0u;
    // 0x2003c0: 0x3c04003a
    ctx->pc = 0x2003c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2003c4: 0x24844408
    ctx->pc = 0x2003c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17416));
    // 0x2003c8: 0x24050100
    ctx->pc = 0x2003c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2003cc: 0xc0b0c08
    ctx->pc = 0x2003CCu;
    SET_GPR_U32(ctx, 31, 0x2003D4u);
    ctx->pc = 0x2003D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003D4u; }
    }
    if (ctx->pc != 0x2003D4u) { return; }
    ctx->pc = 0x2003D4u;
    // 0x2003d4: 0x3c04003a
    ctx->pc = 0x2003d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2003d8: 0x24844418
    ctx->pc = 0x2003d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17432));
    // 0x2003dc: 0x282d
    ctx->pc = 0x2003dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003e0: 0xc0b0c08
    ctx->pc = 0x2003E0u;
    SET_GPR_U32(ctx, 31, 0x2003E8u);
    ctx->pc = 0x2003E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003E8u; }
    }
    if (ctx->pc != 0x2003E8u) { return; }
    ctx->pc = 0x2003E8u;
    // 0x2003e8: 0x3c04003a
    ctx->pc = 0x2003e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2003ec: 0x24844428
    ctx->pc = 0x2003ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17448));
    // 0x2003f0: 0x24050100
    ctx->pc = 0x2003f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2003f4: 0xc0b0c08
    ctx->pc = 0x2003F4u;
    SET_GPR_U32(ctx, 31, 0x2003FCu);
    ctx->pc = 0x2003F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003FCu; }
    }
    if (ctx->pc != 0x2003FCu) { return; }
    ctx->pc = 0x2003FCu;
    // 0x2003fc: 0xc0b179a
    ctx->pc = 0x2003FCu;
    SET_GPR_U32(ctx, 31, 0x200404u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200404u; }
    }
    if (ctx->pc != 0x200404u) { return; }
    ctx->pc = 0x200404u;
    // 0x200404: 0xc0b179a
    ctx->pc = 0x200404u;
    SET_GPR_U32(ctx, 31, 0x20040Cu);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20040Cu; }
    }
    if (ctx->pc != 0x20040Cu) { return; }
    ctx->pc = 0x20040Cu;
    // 0x20040c: 0xc0b1bd4
    ctx->pc = 0x20040Cu;
    SET_GPR_U32(ctx, 31, 0x200414u);
    ctx->pc = 0x200410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200414u; }
    }
    if (ctx->pc != 0x200414u) { return; }
    ctx->pc = 0x200414u;
    // 0x200414: 0x3c04003a
    ctx->pc = 0x200414u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_200418:
    // 0x200418: 0xc0b4a34
    ctx->pc = 0x200418u;
    SET_GPR_U32(ctx, 31, 0x200420u);
    ctx->pc = 0x20041Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17464));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200420u; }
    }
    if (ctx->pc != 0x200420u) { return; }
    ctx->pc = 0x200420u;
    // 0x200420: 0xc08102c
    ctx->pc = 0x200420u;
    SET_GPR_U32(ctx, 31, 0x200428u);
    ctx->pc = 0x2040B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitControls_0x2040b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200428u; }
    }
    if (ctx->pc != 0x200428u) { return; }
    ctx->pc = 0x200428u;
    // 0x200428: 0xc08103a
    ctx->pc = 0x200428u;
    SET_GPR_U32(ctx, 31, 0x200430u);
    ctx->pc = 0x2040E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ControlsUpdate_0x2040e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200430u; }
    }
    if (ctx->pc != 0x200430u) { return; }
    ctx->pc = 0x200430u;
    // 0x200430: 0x3c04003a
    ctx->pc = 0x200430u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200434: 0x24844458
    ctx->pc = 0x200434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17496));
    // 0x200438: 0x3c050031
    ctx->pc = 0x200438u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x20043c: 0xc0b4a34
    ctx->pc = 0x20043Cu;
    SET_GPR_U32(ctx, 31, 0x200444u);
    ctx->pc = 0x200440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963584));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200444u; }
    }
    if (ctx->pc != 0x200444u) { return; }
    ctx->pc = 0x200444u;
    // 0x200444: 0xc089bf0
    ctx->pc = 0x200444u;
    SET_GPR_U32(ctx, 31, 0x20044Cu);
    ctx->pc = 0x226FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        game_init_once_0x226fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20044Cu; }
    }
    if (ctx->pc != 0x20044Cu) { return; }
    ctx->pc = 0x20044Cu;
    // 0x20044c: 0xc082978
    ctx->pc = 0x20044Cu;
    SET_GPR_U32(ctx, 31, 0x200454u);
    ctx->pc = 0x20A5E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OptionsSetup_0x20a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200454u; }
    }
    if (ctx->pc != 0x200454u) { return; }
    ctx->pc = 0x200454u;
    // 0x200454: 0x3c04003a
    ctx->pc = 0x200454u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200458: 0xc0b4a34
    ctx->pc = 0x200458u;
    SET_GPR_U32(ctx, 31, 0x200460u);
    ctx->pc = 0x20045Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17528));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200460u; }
    }
    if (ctx->pc != 0x200460u) { return; }
    ctx->pc = 0x200460u;
    // 0x200460: 0x3c04003a
    ctx->pc = 0x200460u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200464: 0x24844488
    ctx->pc = 0x200464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17544));
    // 0x200468: 0x3c050031
    ctx->pc = 0x200468u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x20046c: 0x24a5f1bc
    ctx->pc = 0x20046cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963644));
    // 0x200470: 0x24060001
    ctx->pc = 0x200470u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x200474: 0xc080d22
    ctx->pc = 0x200474u;
    SET_GPR_U32(ctx, 31, 0x20047Cu);
    ctx->pc = 0x200478u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20047Cu; }
    }
    if (ctx->pc != 0x20047Cu) { return; }
    ctx->pc = 0x20047Cu;
    // 0x20047c: 0xc0803a0
    ctx->pc = 0x20047Cu;
    SET_GPR_U32(ctx, 31, 0x200484u);
    ctx->pc = 0x200E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontInit_0x200e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200484u; }
    }
    if (ctx->pc != 0x200484u) { return; }
    ctx->pc = 0x200484u;
    // 0x200484: 0xc0b4fa0
    ctx->pc = 0x200484u;
    SET_GPR_U32(ctx, 31, 0x20048Cu);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20048Cu; }
    }
    if (ctx->pc != 0x20048Cu) { return; }
    ctx->pc = 0x20048Cu;
    // 0x20048c: 0x3c05003a
    ctx->pc = 0x20048cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200490: 0x3c03003a
    ctx->pc = 0x200490u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x200494: 0x8c682310
    ctx->pc = 0x200494u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 8976)));
    // 0x200498: 0x25040003
    ctx->pc = 0x200498u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 8), 3));
    // 0x20049c: 0x2403ffff
    ctx->pc = 0x20049cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2004a0: 0x68182a
    ctx->pc = 0x2004a0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
    // 0x2004a4: 0x83400a
    ctx->pc = 0x2004a4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 4));
    // 0x2004a8: 0x84083
    ctx->pc = 0x2004a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x2004ac: 0x84080
    ctx->pc = 0x2004acu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x2004b0: 0x8ca72354
    ctx->pc = 0x2004b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 9044)));
    // 0x2004b4: 0x3c04003a
    ctx->pc = 0x2004b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2004b8: 0x24844490
    ctx->pc = 0x2004b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17552));
    // 0x2004bc: 0x40282d
    ctx->pc = 0x2004bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004c0: 0xe0302d
    ctx->pc = 0x2004c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004c4: 0xc0b4a34
    ctx->pc = 0x2004C4u;
    SET_GPR_U32(ctx, 31, 0x2004CCu);
    ctx->pc = 0x2004C8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2004CCu; }
    }
    if (ctx->pc != 0x2004CCu) { return; }
    ctx->pc = 0x2004CCu;
    // 0x2004cc: 0x3c020031
    ctx->pc = 0x2004ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2004d0: 0x8c42f198
    ctx->pc = 0x2004d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963608)));
    // 0x2004d4: 0x50400012
    ctx->pc = 0x2004D4u;
    {
        const bool branch_taken_0x2004d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2004d4) {
            ctx->pc = 0x2004D8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
            ctx->pc = 0x200520u;
            goto label_200520;
        }
    }
    ctx->pc = 0x2004DCu;
    // 0x2004dc: 0xc0b0112
    ctx->pc = 0x2004DCu;
    SET_GPR_U32(ctx, 31, 0x2004E4u);
    ctx->pc = 0x2004E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C0448u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaAlloc_0x2c0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2004E4u; }
    }
    if (ctx->pc != 0x2004E4u) { return; }
    ctx->pc = 0x2004E4u;
    // 0x2004e4: 0xc0b0176
    ctx->pc = 0x2004E4u;
    SET_GPR_U32(ctx, 31, 0x2004ECu);
    ctx->pc = 0x2004E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C05D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaAlloc_0x2c05d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2004ECu; }
    }
    if (ctx->pc != 0x2004ECu) { return; }
    ctx->pc = 0x2004ECu;
    // 0x2004ec: 0x24040400
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2004f0: 0xc084b4c
    ctx->pc = 0x2004F0u;
    SET_GPR_U32(ctx, 31, 0x2004F8u);
    ctx->pc = 0x2004F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x212D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeAlloc_0x212d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2004F8u; }
    }
    if (ctx->pc != 0x2004F8u) { return; }
    ctx->pc = 0x2004F8u;
    // 0x2004f8: 0x3c04003a
    ctx->pc = 0x2004f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2004fc: 0x248444c8
    ctx->pc = 0x2004fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17608));
    // 0x200500: 0x27a50020
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x200504: 0x24060001
    ctx->pc = 0x200504u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x200508: 0xc080d22
    ctx->pc = 0x200508u;
    SET_GPR_U32(ctx, 31, 0x200510u);
    ctx->pc = 0x20050Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200510u; }
    }
    if (ctx->pc != 0x200510u) { return; }
    ctx->pc = 0x200510u;
    // 0x200510: 0xc085ade
    ctx->pc = 0x200510u;
    SET_GPR_U32(ctx, 31, 0x200518u);
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x216B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMenu_0x216b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200518u; }
    }
    if (ctx->pc != 0x200518u) { return; }
    ctx->pc = 0x200518u;
    // 0x200518: 0x10000018
    ctx->pc = 0x200518u;
    {
        const bool branch_taken_0x200518 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200518) {
            ctx->pc = 0x20057Cu;
            goto label_20057c;
        }
    }
    ctx->pc = 0x200520u;
label_200520:
    // 0x200520: 0xc0b4a34
    ctx->pc = 0x200520u;
    SET_GPR_U32(ctx, 31, 0x200528u);
    ctx->pc = 0x200524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17616));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200528u; }
    }
    if (ctx->pc != 0x200528u) { return; }
    ctx->pc = 0x200528u;
    // 0x200528: 0xc089c36
    ctx->pc = 0x200528u;
    SET_GPR_U32(ctx, 31, 0x200530u);
    ctx->pc = 0x2270D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        game_init_data_0x2270d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200530u; }
    }
    if (ctx->pc != 0x200530u) { return; }
    ctx->pc = 0x200530u;
    // 0x200530: 0xc0898b8
    ctx->pc = 0x200530u;
    SET_GPR_U32(ctx, 31, 0x200538u);
    ctx->pc = 0x200534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2262E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockModels_0x2262e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200538u; }
    }
    if (ctx->pc != 0x200538u) { return; }
    ctx->pc = 0x200538u;
    // 0x200538: 0x3c020031
    ctx->pc = 0x200538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20053c: 0x8c42f184
    ctx->pc = 0x20053cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x200540: 0x1040000c
    ctx->pc = 0x200540u;
    {
        const bool branch_taken_0x200540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200544u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x200540) {
            ctx->pc = 0x200574u;
            goto label_200574;
        }
    }
    ctx->pc = 0x200548u;
    // 0x200548: 0x9442f1b0
    ctx->pc = 0x200548u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963632)));
    // 0x20054c: 0x14400005
    ctx->pc = 0x20054Cu;
    {
        const bool branch_taken_0x20054c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20054c) {
            ctx->pc = 0x200564u;
            goto label_200564;
        }
    }
    ctx->pc = 0x200554u;
    // 0x200554: 0xc0a0960
    ctx->pc = 0x200554u;
    SET_GPR_U32(ctx, 31, 0x20055Cu);
    ctx->pc = 0x200558u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32777));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20055Cu; }
    }
    if (ctx->pc != 0x20055Cu) { return; }
    ctx->pc = 0x20055Cu;
    // 0x20055c: 0x10000007
    ctx->pc = 0x20055Cu;
    {
        const bool branch_taken_0x20055c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20055c) {
            ctx->pc = 0x20057Cu;
            goto label_20057c;
        }
    }
    ctx->pc = 0x200564u;
label_200564:
    // 0x200564: 0xc0a0960
    ctx->pc = 0x200564u;
    SET_GPR_U32(ctx, 31, 0x20056Cu);
    ctx->pc = 0x200568u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32769));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20056Cu; }
    }
    if (ctx->pc != 0x20056Cu) { return; }
    ctx->pc = 0x20056Cu;
    // 0x20056c: 0x10000003
    ctx->pc = 0x20056Cu;
    {
        const bool branch_taken_0x20056c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20056c) {
            ctx->pc = 0x20057Cu;
            goto label_20057c;
        }
    }
    ctx->pc = 0x200574u;
label_200574:
    // 0x200574: 0xc0a0960
    ctx->pc = 0x200574u;
    SET_GPR_U32(ctx, 31, 0x20057Cu);
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20057Cu; }
    }
    if (ctx->pc != 0x20057Cu) { return; }
    ctx->pc = 0x20057Cu;
label_20057c:
    // 0x20057c: 0xc0b4fa0
    ctx->pc = 0x20057Cu;
    SET_GPR_U32(ctx, 31, 0x200584u);
    ctx->pc = 0x200580u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200584u; }
    }
    if (ctx->pc != 0x200584u) { return; }
    ctx->pc = 0x200584u;
    // 0x200584: 0x3c04003a
    ctx->pc = 0x200584u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200588: 0x248444f0
    ctx->pc = 0x200588u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17648));
    // 0x20058c: 0xc0b4a34
    ctx->pc = 0x20058Cu;
    SET_GPR_U32(ctx, 31, 0x200594u);
    ctx->pc = 0x200590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200594u; }
    }
    if (ctx->pc != 0x200594u) { return; }
    ctx->pc = 0x200594u;
    // 0x200594: 0x3c030037
    ctx->pc = 0x200594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x200598: 0x3c0200ff
    ctx->pc = 0x200598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)255 << 16));
    // 0x20059c: 0xac628008
    ctx->pc = 0x20059cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294934536), GPR_U32(ctx, 2));
    // 0x2005a0: 0x3c02003a
    ctx->pc = 0x2005a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2005a4: 0x24542050
    ctx->pc = 0x2005a4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 8272));
    // 0x2005a8: 0x3c120031
    ctx->pc = 0x2005a8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)49 << 16));
    // 0x2005ac: 0x241e0001
    ctx->pc = 0x2005acu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2005b0: 0x3c170031
    ctx->pc = 0x2005b0u;
    SET_GPR_U32(ctx, 23, ((uint32_t)49 << 16));
    // 0x2005b4: 0x3c160031
    ctx->pc = 0x2005b4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)49 << 16));
    // 0x2005b8: 0x3c150032
    ctx->pc = 0x2005b8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)50 << 16));
    // 0x2005bc: 0x0
    ctx->pc = 0x2005bcu;
    // NOP
label_2005c0:
    // 0x2005c0: 0xc0abc02
    ctx->pc = 0x2005C0u;
    SET_GPR_U32(ctx, 31, 0x2005C8u);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005C8u; }
    }
    if (ctx->pc != 0x2005C8u) { return; }
    ctx->pc = 0x2005C8u;
    // 0x2005c8: 0xc0befa8
    ctx->pc = 0x2005C8u;
    SET_GPR_U32(ctx, 31, 0x2005D0u);
    ctx->pc = 0x2005CCu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x2FBEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        srand_0x2fbea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005D0u; }
    }
    if (ctx->pc != 0x2005D0u) { return; }
    ctx->pc = 0x2005D0u;
    // 0x2005d0: 0xc0b4a86
    ctx->pc = 0x2005D0u;
    SET_GPR_U32(ctx, 31, 0x2005D8u);
    ctx->pc = 0x2005D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005D8u; }
    }
    if (ctx->pc != 0x2005D8u) { return; }
    ctx->pc = 0x2005D8u;
    // 0x2005d8: 0x40024800
    ctx->pc = 0x2005d8u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2005dc: 0xae820168
    ctx->pc = 0x2005dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 360), GPR_U32(ctx, 2));
    // 0x2005e0: 0x40034800
    ctx->pc = 0x2005e0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2005e4: 0x8e6221d0
    ctx->pc = 0x2005e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8656)));
    // 0x2005e8: 0xac430008
    ctx->pc = 0x2005e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2005ec: 0xaee0ff9c
    ctx->pc = 0x2005ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294967196), GPR_U32(ctx, 0));
    // 0x2005f0: 0x24020002
    ctx->pc = 0x2005f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2005f4: 0xc080b88
    ctx->pc = 0x2005F4u;
    SET_GPR_U32(ctx, 31, 0x2005FCu);
    ctx->pc = 0x2005F8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x202E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClockOncePerFrame_0x202e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2005FCu; }
    }
    if (ctx->pc != 0x2005FCu) { return; }
    ctx->pc = 0x2005FCu;
    // 0x2005fc: 0xc080366
    ctx->pc = 0x2005FCu;
    SET_GPR_U32(ctx, 31, 0x200604u);
    ctx->pc = 0x200D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadVU1GameLogic_0x200d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200604u; }
    }
    if (ctx->pc != 0x200604u) { return; }
    ctx->pc = 0x200604u;
    // 0x200604: 0xc0b4a32
    ctx->pc = 0x200604u;
    SET_GPR_U32(ctx, 31, 0x20060Cu);
    ctx->pc = 0x2D28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfileFlush_0x2d28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20060Cu; }
    }
    if (ctx->pc != 0x20060Cu) { return; }
    ctx->pc = 0x20060Cu;
    // 0x20060c: 0x24020003
    ctx->pc = 0x20060cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x200610: 0xc0815b4
    ctx->pc = 0x200610u;
    SET_GPR_U32(ctx, 31, 0x200618u);
    ctx->pc = 0x200614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x2056D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerControls_0x2056d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200618u; }
    }
    if (ctx->pc != 0x200618u) { return; }
    ctx->pc = 0x200618u;
    // 0x200618: 0x3c020031
    ctx->pc = 0x200618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20061c: 0x8c42f184
    ctx->pc = 0x20061cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x200620: 0x14400003
    ctx->pc = 0x200620u;
    {
        const bool branch_taken_0x200620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x200620) {
            ctx->pc = 0x200630u;
            goto label_200630;
        }
    }
    ctx->pc = 0x200628u;
    // 0x200628: 0xc0a8aa0
    ctx->pc = 0x200628u;
    SET_GPR_U32(ctx, 31, 0x200630u);
    ctx->pc = 0x2A2A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckFingerLoModes_0x2a2a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200630u; }
    }
    if (ctx->pc != 0x200630u) { return; }
    ctx->pc = 0x200630u;
label_200630:
    // 0x200630: 0xc080da0
    ctx->pc = 0x200630u;
    SET_GPR_U32(ctx, 31, 0x200638u);
    ctx->pc = 0x203680u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateDoPrint_0x203680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200638u; }
    }
    if (ctx->pc != 0x200638u) { return; }
    ctx->pc = 0x200638u;
    // 0x200638: 0x2402000b
    ctx->pc = 0x200638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x20063c: 0xc08ab98
    ctx->pc = 0x20063Cu;
    SET_GPR_U32(ctx, 31, 0x200644u);
    ctx->pc = 0x200640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x22AE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaver_0x22ae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200644u; }
    }
    if (ctx->pc != 0x200644u) { return; }
    ctx->pc = 0x200644u;
    // 0x200644: 0x24020004
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x200648: 0xc083540
    ctx->pc = 0x200648u;
    SET_GPR_U32(ctx, 31, 0x200650u);
    ctx->pc = 0x20064Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x20D500u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoOptions_0x20d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200650u; }
    }
    if (ctx->pc != 0x200650u) { return; }
    ctx->pc = 0x200650u;
    // 0x200650: 0x54400001
    ctx->pc = 0x200650u;
    {
        const bool branch_taken_0x200650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x200650) {
            ctx->pc = 0x200654u;
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294967196), GPR_U32(ctx, 30));
            ctx->pc = 0x200658u;
            goto label_200658;
        }
    }
    ctx->pc = 0x200658u;
label_200658:
    // 0x200658: 0x40034800
    ctx->pc = 0x200658u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x20065c: 0x8e6221d0
    ctx->pc = 0x20065cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8656)));
    // 0x200660: 0xac430488
    ctx->pc = 0x200660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1160), GPR_U32(ctx, 3));
    // 0x200664: 0x3c100031
    ctx->pc = 0x200664u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x200668: 0x24020005
    ctx->pc = 0x200668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x20066c: 0xc088ad6
    ctx->pc = 0x20066Cu;
    SET_GPR_U32(ctx, 31, 0x200674u);
    ctx->pc = 0x200670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x222B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueUpdate_0x222b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200674u; }
    }
    if (ctx->pc != 0x200674u) { return; }
    ctx->pc = 0x200674u;
    // 0x200674: 0xc0881f4
    ctx->pc = 0x200674u;
    SET_GPR_U32(ctx, 31, 0x20067Cu);
    ctx->pc = 0x200678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2207D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPoll_0x2207d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20067Cu; }
    }
    if (ctx->pc != 0x20067Cu) { return; }
    ctx->pc = 0x20067Cu;
    // 0x20067c: 0x40034800
    ctx->pc = 0x20067cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x200680: 0x8e6421d0
    ctx->pc = 0x200680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8656)));
    // 0x200684: 0x8c820488
    ctx->pc = 0x200684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1160)));
    // 0x200688: 0x621823
    ctx->pc = 0x200688u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20068c: 0x8c820480
    ctx->pc = 0x20068cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x200690: 0x621821
    ctx->pc = 0x200690u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200694: 0xac830480
    ctx->pc = 0x200694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1152), GPR_U32(ctx, 3));
    // 0x200698: 0x8c820484
    ctx->pc = 0x200698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1156)));
    // 0x20069c: 0x24420001
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2006a0: 0xac820484
    ctx->pc = 0x2006a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1156), GPR_U32(ctx, 2));
    // 0x2006a4: 0x3c110031
    ctx->pc = 0x2006a4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    // 0x2006a8: 0x8e22f198
    ctx->pc = 0x2006a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294963608)));
    // 0x2006ac: 0x10400022
    ctx->pc = 0x2006ACu;
    {
        const bool branch_taken_0x2006ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2006B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2006ac) {
            ctx->pc = 0x200738u;
            goto label_200738;
        }
    }
    ctx->pc = 0x2006B4u;
    // 0x2006b4: 0xc085b0e
    ctx->pc = 0x2006B4u;
    SET_GPR_U32(ctx, 31, 0x2006BCu);
    ctx->pc = 0x2006B8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x216C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MainMenu_0x216c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006BCu; }
    }
    if (ctx->pc != 0x2006BCu) { return; }
    ctx->pc = 0x2006BCu;
    // 0x2006bc: 0x1040001a
    ctx->pc = 0x2006BCu;
    {
        const bool branch_taken_0x2006bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2006C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x2006bc) {
            ctx->pc = 0x200728u;
            goto label_200728;
        }
    }
    ctx->pc = 0x2006C4u;
    // 0x2006c4: 0x2402ffff
    ctx->pc = 0x2006c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2006c8: 0xac629b98
    ctx->pc = 0x2006c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941592), GPR_U32(ctx, 2));
    // 0x2006cc: 0xc0b1bd4
    ctx->pc = 0x2006CCu;
    SET_GPR_U32(ctx, 31, 0x2006D4u);
    ctx->pc = 0x2006D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006D4u; }
    }
    if (ctx->pc != 0x2006D4u) { return; }
    ctx->pc = 0x2006D4u;
    // 0x2006d4: 0xc084b9e
    ctx->pc = 0x2006D4u;
    SET_GPR_U32(ctx, 31, 0x2006DCu);
    ctx->pc = 0x2006D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitLists_0x212e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006DCu; }
    }
    if (ctx->pc != 0x2006DCu) { return; }
    ctx->pc = 0x2006DCu;
    // 0x2006dc: 0x3c04003a
    ctx->pc = 0x2006dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2006e0: 0xc0b4a34
    ctx->pc = 0x2006E0u;
    SET_GPR_U32(ctx, 31, 0x2006E8u);
    ctx->pc = 0x2006E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17616));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2006E8u; }
    }
    if (ctx->pc != 0x2006E8u) { return; }
    ctx->pc = 0x2006E8u;
    // 0x2006e8: 0x3c04003a
    ctx->pc = 0x2006e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2006ec: 0x24844488
    ctx->pc = 0x2006ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17544));
    // 0x2006f0: 0x3c050031
    ctx->pc = 0x2006f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x2006f4: 0x24a5f1bc
    ctx->pc = 0x2006f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963644));
    // 0x2006f8: 0x24060001
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2006fc: 0xc080d22
    ctx->pc = 0x2006FCu;
    SET_GPR_U32(ctx, 31, 0x200704u);
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200704u; }
    }
    if (ctx->pc != 0x200704u) { return; }
    ctx->pc = 0x200704u;
    // 0x200704: 0xc0803a0
    ctx->pc = 0x200704u;
    SET_GPR_U32(ctx, 31, 0x20070Cu);
    ctx->pc = 0x200E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontInit_0x200e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20070Cu; }
    }
    if (ctx->pc != 0x20070Cu) { return; }
    ctx->pc = 0x20070Cu;
    // 0x20070c: 0xc089c36
    ctx->pc = 0x20070Cu;
    SET_GPR_U32(ctx, 31, 0x200714u);
    ctx->pc = 0x2270D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        game_init_data_0x2270d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200714u; }
    }
    if (ctx->pc != 0x200714u) { return; }
    ctx->pc = 0x200714u;
    // 0x200714: 0xc0898b8
    ctx->pc = 0x200714u;
    SET_GPR_U32(ctx, 31, 0x20071Cu);
    ctx->pc = 0x200718u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2262E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockModels_0x2262e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20071Cu; }
    }
    if (ctx->pc != 0x20071Cu) { return; }
    ctx->pc = 0x20071Cu;
    // 0x20071c: 0xc0a0960
    ctx->pc = 0x20071Cu;
    SET_GPR_U32(ctx, 31, 0x200724u);
    ctx->pc = 0x200720u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32772));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200724u; }
    }
    if (ctx->pc != 0x200724u) { return; }
    ctx->pc = 0x200724u;
    // 0x200724: 0xae20f198
    ctx->pc = 0x200724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963608), GPR_U32(ctx, 0));
label_200728:
    // 0x200728: 0xc0850bc
    ctx->pc = 0x200728u;
    SET_GPR_U32(ctx, 31, 0x200730u);
    ctx->pc = 0x2142F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DebugCamUpdate_0x2142f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200730u; }
    }
    if (ctx->pc != 0x200730u) { return; }
    ctx->pc = 0x200730u;
    // 0x200730: 0x1000006c
    ctx->pc = 0x200730u;
    {
        const bool branch_taken_0x200730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200730) {
            ctx->pc = 0x2008E4u;
            goto label_2008e4;
        }
    }
    ctx->pc = 0x200738u;
label_200738:
    // 0x200738: 0x24020007
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x20073c: 0xae42f1c0
    ctx->pc = 0x20073cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    // 0x200740: 0xc0a01b6
    ctx->pc = 0x200740u;
    SET_GPR_U32(ctx, 31, 0x200748u);
    ctx->pc = 0x200744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2806D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoLighting_0x2806d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200748u; }
    }
    if (ctx->pc != 0x200748u) { return; }
    ctx->pc = 0x200748u;
    // 0x200748: 0x40034800
    ctx->pc = 0x200748u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x20074c: 0x8e6221d0
    ctx->pc = 0x20074cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8656)));
    // 0x200750: 0xac430058
    ctx->pc = 0x200750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x200754: 0x24020008
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x200758: 0xc0894d0
    ctx->pc = 0x200758u;
    SET_GPR_U32(ctx, 31, 0x200760u);
    ctx->pc = 0x20075Cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x225340u;
    {
        const uint32_t __entryPc = ctx->pc;
        game_main_0x225340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200760u; }
    }
    if (ctx->pc != 0x200760u) { return; }
    ctx->pc = 0x200760u;
    // 0x200760: 0x40034800
    ctx->pc = 0x200760u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x200764: 0x8e6421d0
    ctx->pc = 0x200764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8656)));
    // 0x200768: 0x8c820058
    ctx->pc = 0x200768u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x20076c: 0x621823
    ctx->pc = 0x20076cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200770: 0x8c820050
    ctx->pc = 0x200770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x200774: 0x621821
    ctx->pc = 0x200774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200778: 0xac830050
    ctx->pc = 0x200778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x20077c: 0x8c820054
    ctx->pc = 0x20077cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x200780: 0x24420001
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x200784: 0xac820054
    ctx->pc = 0x200784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x200788: 0x24020009
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x20078c: 0xae42f1c0
    ctx->pc = 0x20078cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    // 0x200790: 0x40024800
    ctx->pc = 0x200790u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x200794: 0xc0a8a02
    ctx->pc = 0x200794u;
    SET_GPR_U32(ctx, 31, 0x20079Cu);
    ctx->pc = 0x200798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 2));
    ctx->pc = 0x2A2808u;
    {
        const uint32_t __entryPc = ctx->pc;
        TriggerCamUpdate_0x2a2808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20079Cu; }
    }
    if (ctx->pc != 0x20079Cu) { return; }
    ctx->pc = 0x20079Cu;
    // 0x20079c: 0x14400045
    ctx->pc = 0x20079Cu;
    {
        const bool branch_taken_0x20079c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2007A0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 24)));
        if (branch_taken_0x20079c) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x2007A4u;
    // 0x2007a4: 0x34028009
    ctx->pc = 0x2007a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
    // 0x2007a8: 0x10620005
    ctx->pc = 0x2007A8u;
    {
        const bool branch_taken_0x2007a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2007ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
        if (branch_taken_0x2007a8) {
            ctx->pc = 0x2007C0u;
            goto label_2007c0;
        }
    }
    ctx->pc = 0x2007B0u;
    // 0x2007b0: 0x10620003
    ctx->pc = 0x2007B0u;
    {
        const bool branch_taken_0x2007b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2007B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        if (branch_taken_0x2007b0) {
            ctx->pc = 0x2007C0u;
            goto label_2007c0;
        }
    }
    ctx->pc = 0x2007B8u;
    // 0x2007b8: 0x14620008
    ctx->pc = 0x2007B8u;
    {
        const bool branch_taken_0x2007b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2007BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
        if (branch_taken_0x2007b8) {
            ctx->pc = 0x2007DCu;
            goto label_2007dc;
        }
    }
    ctx->pc = 0x2007C0u;
label_2007c0:
    // 0x2007c0: 0x3c04003a
    ctx->pc = 0x2007c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2007c4: 0x248424c0
    ctx->pc = 0x2007c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9408));
    // 0x2007c8: 0x3c05003a
    ctx->pc = 0x2007c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2007cc: 0xc0b0f84
    ctx->pc = 0x2007CCu;
    SET_GPR_U32(ctx, 31, 0x2007D4u);
    ctx->pc = 0x2007D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9552));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007D4u; }
    }
    if (ctx->pc != 0x2007D4u) { return; }
    ctx->pc = 0x2007D4u;
    // 0x2007d4: 0x10000037
    ctx->pc = 0x2007D4u;
    {
        const bool branch_taken_0x2007d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2007d4) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x2007DCu;
label_2007dc:
    // 0x2007dc: 0x10620020
    ctx->pc = 0x2007DCu;
    {
        const bool branch_taken_0x2007dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2007E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x2007dc) {
            ctx->pc = 0x200860u;
            goto label_200860;
        }
    }
    ctx->pc = 0x2007E4u;
    // 0x2007e4: 0x1062001e
    ctx->pc = 0x2007E4u;
    {
        const bool branch_taken_0x2007e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2007E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x2007e4) {
            ctx->pc = 0x200860u;
            goto label_200860;
        }
    }
    ctx->pc = 0x2007ECu;
    // 0x2007ec: 0x1062001c
    ctx->pc = 0x2007ECu;
    {
        const bool branch_taken_0x2007ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2007F0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 4294965200)));
        if (branch_taken_0x2007ec) {
            ctx->pc = 0x200860u;
            goto label_200860;
        }
    }
    ctx->pc = 0x2007F4u;
    // 0x2007f4: 0x161e000c
    ctx->pc = 0x2007F4u;
    {
        const bool branch_taken_0x2007f4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 30));
        ctx->pc = 0x2007F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 24)));
        if (branch_taken_0x2007f4) {
            ctx->pc = 0x200828u;
            goto label_200828;
        }
    }
    ctx->pc = 0x2007FCu;
    // 0x2007fc: 0x3c110031
    ctx->pc = 0x2007fcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    // 0x200800: 0x8e22f1a4
    ctx->pc = 0x200800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294963620)));
    // 0x200804: 0x14400004
    ctx->pc = 0x200804u;
    {
        const bool branch_taken_0x200804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x200804) {
            ctx->pc = 0x200818u;
            goto label_200818;
        }
    }
    ctx->pc = 0x20080Cu;
    // 0x20080c: 0xc0850ce
    ctx->pc = 0x20080Cu;
    SET_GPR_U32(ctx, 31, 0x200814u);
    ctx->pc = 0x214338u;
    {
        const uint32_t __entryPc = ctx->pc;
        DebugCamExtract_0x214338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200814u; }
    }
    if (ctx->pc != 0x200814u) { return; }
    ctx->pc = 0x200814u;
    // 0x200814: 0xae30f1a4
    ctx->pc = 0x200814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963620), GPR_U32(ctx, 16));
label_200818:
    // 0x200818: 0xc0850bc
    ctx->pc = 0x200818u;
    SET_GPR_U32(ctx, 31, 0x200820u);
    ctx->pc = 0x2142F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DebugCamUpdate_0x2142f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200820u; }
    }
    if (ctx->pc != 0x200820u) { return; }
    ctx->pc = 0x200820u;
    // 0x200820: 0x10000024
    ctx->pc = 0x200820u;
    {
        const bool branch_taken_0x200820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200820) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x200828u;
label_200828:
    // 0x200828: 0x30428000
    ctx->pc = 0x200828u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x20082c: 0x10400006
    ctx->pc = 0x20082Cu;
    {
        const bool branch_taken_0x20082c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200830u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x20082c) {
            ctx->pc = 0x200848u;
            goto label_200848;
        }
    }
    ctx->pc = 0x200834u;
    // 0x200834: 0xaea0f7d0
    ctx->pc = 0x200834u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965200), GPR_U32(ctx, 0));
    // 0x200838: 0xc09ce0a
    ctx->pc = 0x200838u;
    SET_GPR_U32(ctx, 31, 0x200840u);
    ctx->pc = 0x20083Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963620), GPR_U32(ctx, 0));
    ctx->pc = 0x273828u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_camera_0x273828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200840u; }
    }
    if (ctx->pc != 0x200840u) { return; }
    ctx->pc = 0x200840u;
    // 0x200840: 0x1000001c
    ctx->pc = 0x200840u;
    {
        const bool branch_taken_0x200840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200840) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x200848u;
label_200848:
    // 0x200848: 0xac40f1a4
    ctx->pc = 0x200848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963620), GPR_U32(ctx, 0));
    // 0x20084c: 0x3c020036
    ctx->pc = 0x20084cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x200850: 0x8c42d930
    ctx->pc = 0x200850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x200854: 0x1040000a
    ctx->pc = 0x200854u;
    {
        const bool branch_taken_0x200854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200858u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x200854) {
            ctx->pc = 0x200880u;
            goto label_200880;
        }
    }
    ctx->pc = 0x20085Cu;
    // 0x20085c: 0xaea0f7d0
    ctx->pc = 0x20085cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965200), GPR_U32(ctx, 0));
label_200860:
    // 0x200860: 0xc0a8748
    ctx->pc = 0x200860u;
    SET_GPR_U32(ctx, 31, 0x200868u);
    ctx->pc = 0x2A1D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCameraUpdate_0x2a1d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200868u; }
    }
    if (ctx->pc != 0x200868u) { return; }
    ctx->pc = 0x200868u;
    // 0x200868: 0x14400012
    ctx->pc = 0x200868u;
    {
        const bool branch_taken_0x200868 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x200868) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x200870u;
    // 0x200870: 0xc09ce0a
    ctx->pc = 0x200870u;
    SET_GPR_U32(ctx, 31, 0x200878u);
    ctx->pc = 0x273828u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_camera_0x273828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200878u; }
    }
    if (ctx->pc != 0x200878u) { return; }
    ctx->pc = 0x200878u;
    // 0x200878: 0x1000000e
    ctx->pc = 0x200878u;
    {
        const bool branch_taken_0x200878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200878) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x200880u;
label_200880:
    // 0x200880: 0x8c42f1a0
    ctx->pc = 0x200880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963616)));
    // 0x200884: 0x14400007
    ctx->pc = 0x200884u;
    {
        const bool branch_taken_0x200884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200888u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x200884) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x20088Cu;
    // 0x20088c: 0xaea0f7d0
    ctx->pc = 0x20088cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965200), GPR_U32(ctx, 0));
    // 0x200890: 0x3c020034
    ctx->pc = 0x200890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x200894: 0xc09ce0a
    ctx->pc = 0x200894u;
    SET_GPR_U32(ctx, 31, 0x20089Cu);
    ctx->pc = 0x200898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965708), GPR_U32(ctx, 0));
    ctx->pc = 0x273828u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_camera_0x273828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20089Cu; }
    }
    if (ctx->pc != 0x20089Cu) { return; }
    ctx->pc = 0x20089Cu;
    // 0x20089c: 0x10000005
    ctx->pc = 0x20089Cu;
    {
        const bool branch_taken_0x20089c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20089c) {
            ctx->pc = 0x2008B4u;
            goto label_2008b4;
        }
    }
    ctx->pc = 0x2008A4u;
label_2008a4:
    // 0x2008a4: 0xaea2f7d0
    ctx->pc = 0x2008a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965200), GPR_U32(ctx, 2));
    // 0x2008a8: 0x3c020034
    ctx->pc = 0x2008a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2008ac: 0xc085808
    ctx->pc = 0x2008ACu;
    SET_GPR_U32(ctx, 31, 0x2008B4u);
    ctx->pc = 0x2008B0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965708), GPR_U32(ctx, 0));
    ctx->pc = 0x216020u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamUpdate_0x216020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008B4u; }
    }
    if (ctx->pc != 0x2008B4u) { return; }
    ctx->pc = 0x2008B4u;
label_2008b4:
    // 0x2008b4: 0xc08a074
    ctx->pc = 0x2008B4u;
    SET_GPR_U32(ctx, 31, 0x2008BCu);
    ctx->pc = 0x2281D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateCompass_0x2281d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2008BCu; }
    }
    if (ctx->pc != 0x2008BCu) { return; }
    ctx->pc = 0x2008BCu;
    // 0x2008bc: 0x40034800
    ctx->pc = 0x2008bcu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2008c0: 0x8e6421d0
    ctx->pc = 0x2008c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8656)));
    // 0x2008c4: 0x8c820498
    ctx->pc = 0x2008c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x2008c8: 0x621823
    ctx->pc = 0x2008c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2008cc: 0x8c820490
    ctx->pc = 0x2008ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x2008d0: 0x621821
    ctx->pc = 0x2008d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2008d4: 0xac830490
    ctx->pc = 0x2008d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1168), GPR_U32(ctx, 3));
    // 0x2008d8: 0x8c820494
    ctx->pc = 0x2008d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x2008dc: 0x24420001
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2008e0: 0xac820494
    ctx->pc = 0x2008e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 2));
label_2008e4:
    // 0x2008e4: 0x40034800
    ctx->pc = 0x2008e4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2008e8: 0x8e820168
    ctx->pc = 0x2008e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 360)));
    // 0x2008ec: 0x621823
    ctx->pc = 0x2008ecu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2008f0: 0x8e820160
    ctx->pc = 0x2008f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 352)));
    // 0x2008f4: 0x621821
    ctx->pc = 0x2008f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2008f8: 0xae830160
    ctx->pc = 0x2008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 352), GPR_U32(ctx, 3));
    // 0x2008fc: 0x8e820164
    ctx->pc = 0x2008fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x200900: 0x24420001
    ctx->pc = 0x200900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x200904: 0xae820164
    ctx->pc = 0x200904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 356), GPR_U32(ctx, 2));
    // 0x200908: 0x40034800
    ctx->pc = 0x200908u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x20090c: 0x8e6421d0
    ctx->pc = 0x20090cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8656)));
    // 0x200910: 0x8c820008
    ctx->pc = 0x200910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200914: 0x621823
    ctx->pc = 0x200914u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200918: 0x8c820000
    ctx->pc = 0x200918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20091c: 0x621821
    ctx->pc = 0x20091cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200920: 0xac830000
    ctx->pc = 0x200920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x200924: 0x8c820004
    ctx->pc = 0x200924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x200928: 0x24420001
    ctx->pc = 0x200928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20092c: 0xac820004
    ctx->pc = 0x20092cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x200930: 0x3c020031
    ctx->pc = 0x200930u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x200934: 0x8c42ffd8
    ctx->pc = 0x200934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967256)));
    // 0x200938: 0x10400004
    ctx->pc = 0x200938u;
    {
        const bool branch_taken_0x200938 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20093Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x200938) {
            ctx->pc = 0x20094Cu;
            goto label_20094c;
        }
    }
    ctx->pc = 0x200940u;
    // 0x200940: 0xc0b4d90
    ctx->pc = 0x200940u;
    SET_GPR_U32(ctx, 31, 0x200948u);
    ctx->pc = 0x2D3640u;
    {
        const uint32_t __entryPc = ctx->pc;
        TimerPrint_0x2d3640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200948u; }
    }
    if (ctx->pc != 0x200948u) { return; }
    ctx->pc = 0x200948u;
    // 0x200948: 0x3c03003a
    ctx->pc = 0x200948u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_20094c:
    // 0x20094c: 0x8ee2ff9c
    ctx->pc = 0x20094cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294967196)));
    // 0x200950: 0x2c420001
    ctx->pc = 0x200950u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x200954: 0xc0a8aa2
    ctx->pc = 0x200954u;
    SET_GPR_U32(ctx, 31, 0x20095Cu);
    ctx->pc = 0x200958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8264), GPR_U32(ctx, 2));
    ctx->pc = 0x2A2A88u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoFingerLoModes_0x2a2a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20095Cu; }
    }
    if (ctx->pc != 0x20095Cu) { return; }
    ctx->pc = 0x20095Cu;
    // 0x20095c: 0x2402000c
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x200960: 0xc080264
    ctx->pc = 0x200960u;
    SET_GPR_U32(ctx, 31, 0x200968u);
    ctx->pc = 0x200964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963648), GPR_U32(ctx, 2));
    ctx->pc = 0x200990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendPlayerPos_0x200990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200968u; }
    }
    if (ctx->pc != 0x200968u) { return; }
    ctx->pc = 0x200968u;
    // 0x200968: 0x3c03003a
    ctx->pc = 0x200968u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x20096c: 0x8c6229bc
    ctx->pc = 0x20096cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10684)));
    // 0x200970: 0x10400003
    ctx->pc = 0x200970u;
    {
        const bool branch_taken_0x200970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x200970) {
            ctx->pc = 0x200980u;
            goto label_200980;
        }
    }
    ctx->pc = 0x200978u;
    // 0x200978: 0x1000ff11
    ctx->pc = 0x200978u;
    {
        const bool branch_taken_0x200978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20097Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 10684), GPR_U32(ctx, 0));
        if (branch_taken_0x200978) {
            ctx->pc = 0x2005C0u;
            goto label_2005c0;
        }
    }
    ctx->pc = 0x200980u;
label_200980:
    // 0x200980: 0xc0b179a
    ctx->pc = 0x200980u;
    SET_GPR_U32(ctx, 31, 0x200988u);
    ctx->pc = 0x2C5E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndFrame_0x2c5e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200988u; }
    }
    if (ctx->pc != 0x200988u) { return; }
    ctx->pc = 0x200988u;
    // 0x200988: 0x1000ff0d
    ctx->pc = 0x200988u;
    {
        const bool branch_taken_0x200988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200988) {
            ctx->pc = 0x2005C0u;
            goto label_2005c0;
        }
    }
    ctx->pc = 0x200990u;
}
