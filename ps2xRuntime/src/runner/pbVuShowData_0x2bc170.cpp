#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuShowData
// Address: 0x2bc170 - 0x2bc80c
void pbVuShowData_0x2bc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bc170u;

    // 0x2bc170: 0x27bdfef0
    ctx->pc = 0x2bc170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2bc174: 0xffbf0100
    ctx->pc = 0x2bc174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2bc178: 0xffbe00f0
    ctx->pc = 0x2bc178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2bc17c: 0xffb700e0
    ctx->pc = 0x2bc17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2bc180: 0xffb600d0
    ctx->pc = 0x2bc180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2bc184: 0xffb500c0
    ctx->pc = 0x2bc184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2bc188: 0xffb400b0
    ctx->pc = 0x2bc188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2bc18c: 0xffb300a0
    ctx->pc = 0x2bc18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2bc190: 0xffb20090
    ctx->pc = 0x2bc190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2bc194: 0xffb10080
    ctx->pc = 0x2bc194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2bc198: 0xffb00070
    ctx->pc = 0x2bc198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2bc19c: 0x80802d
    ctx->pc = 0x2bc19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1a0: 0xafa50058
    ctx->pc = 0x2bc1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x2bc1a4: 0x2402fffe
    ctx->pc = 0x2bc1a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2bc1a8: 0xafa20064
    ctx->pc = 0x2bc1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2bc1ac: 0xf02d
    ctx->pc = 0x2bc1acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1b0: 0x3a0882d
    ctx->pc = 0x2bc1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc1b4: 0x0
    ctx->pc = 0x2bc1b4u;
    // NOP
label_2bc1b8:
    // 0x2bc1b8: 0x8fa30058
    ctx->pc = 0x2bc1b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bc1bc: 0x8c760008
    ctx->pc = 0x2bc1bcu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bc1c0: 0x3c020037
    ctx->pc = 0x2bc1c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bc1c4: 0xac4020b0
    ctx->pc = 0x2bc1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8368), GPR_U32(ctx, 0));
    // 0x2bc1c8: 0x3c020037
    ctx->pc = 0x2bc1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bc1cc: 0x8c4320ac
    ctx->pc = 0x2bc1ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bc1d0: 0x8c620018
    ctx->pc = 0x2bc1d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2bc1d4: 0x24420001
    ctx->pc = 0x2bc1d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bc1d8: 0xac620018
    ctx->pc = 0x2bc1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2bc1dc: 0xac60001c
    ctx->pc = 0x2bc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2bc1e0: 0xac600014
    ctx->pc = 0x2bc1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2bc1e4: 0x24040030
    ctx->pc = 0x2bc1e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bc1e8: 0xac640020
    ctx->pc = 0x2bc1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x2bc1ec: 0xac600024
    ctx->pc = 0x2bc1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x2bc1f0: 0xac600044
    ctx->pc = 0x2bc1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x2bc1f4: 0xac600048
    ctx->pc = 0x2bc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x2bc1f8: 0x8c620008
    ctx->pc = 0x2bc1f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bc1fc: 0xa0440000
    ctx->pc = 0x2bc1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bc200: 0x3c030037
    ctx->pc = 0x2bc200u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bc204: 0x8c6220ac
    ctx->pc = 0x2bc204u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
    // 0x2bc208: 0x8c420008
    ctx->pc = 0x2bc208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc20c: 0xa0400001
    ctx->pc = 0x2bc20cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc210: 0x8c6220ac
    ctx->pc = 0x2bc210u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
    // 0x2bc214: 0x8c43002c
    ctx->pc = 0x2bc214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2bc218: 0xafa30060
    ctx->pc = 0x2bc218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x2bc21c: 0x8c440028
    ctx->pc = 0x2bc21cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2bc220: 0x8c420018
    ctx->pc = 0x2bc220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2bc224: 0x14820009
    ctx->pc = 0x2BC224u;
    {
        const bool branch_taken_0x2bc224 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BC228u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x2bc224) {
            ctx->pc = 0x2BC24Cu;
            goto label_2bc24c;
        }
    }
    ctx->pc = 0x2BC22Cu;
    // 0x2bc22c: 0x8fa20058
    ctx->pc = 0x2bc22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bc230: 0xc0af05a
    ctx->pc = 0x2BC230u;
    SET_GPR_U32(ctx, 31, 0x2BC238u);
    ctx->pc = 0x2BC234u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x2BC168u;
    {
        const uint32_t __entryPc = ctx->pc;
        startEvalExpr_0x2bc168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC238u; }
    }
    if (ctx->pc != 0x2BC238u) { return; }
    ctx->pc = 0x2BC238u;
    // 0x2bc238: 0x3c020037
    ctx->pc = 0x2bc238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bc23c: 0x8c4320ac
    ctx->pc = 0x2bc23cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bc240: 0x24020001
    ctx->pc = 0x2bc240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc244: 0xac62002c
    ctx->pc = 0x2bc244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2bc248: 0x8fa30058
    ctx->pc = 0x2bc248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2bc24c:
    // 0x2bc24c: 0x8c730000
    ctx->pc = 0x2bc24cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc250: 0x8c740004
    ctx->pc = 0x2bc250u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bc254: 0x82630000
    ctx->pc = 0x2bc254u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc258: 0x24020021
    ctx->pc = 0x2bc258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2bc25c: 0x14620007
    ctx->pc = 0x2BC25Cu;
    {
        const bool branch_taken_0x2bc25c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BC260u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 544));
        if (branch_taken_0x2bc25c) {
            ctx->pc = 0x2BC27Cu;
            goto label_2bc27c;
        }
    }
    ctx->pc = 0x2BC264u;
    // 0x2bc264: 0x26730001
    ctx->pc = 0x2bc264u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bc268: 0x36d603c0
    ctx->pc = 0x2bc268u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), 960));
    // 0x2bc26c: 0x82630000
    ctx->pc = 0x2bc26cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc270: 0x36c20020
    ctx->pc = 0x2bc270u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 22), 32));
    // 0x2bc274: 0x43b00a
    ctx->pc = 0x2bc274u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 2));
    // 0x2bc278: 0x32c20220
    ctx->pc = 0x2bc278u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 544));
label_2bc27c:
    // 0x2bc27c: 0x14400009
    ctx->pc = 0x2BC27Cu;
    {
        const bool branch_taken_0x2bc27c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC280u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 32));
        if (branch_taken_0x2bc27c) {
            ctx->pc = 0x2BC2A4u;
            goto label_2bc2a4;
        }
    }
    ctx->pc = 0x2BC284u;
    // 0x2bc284: 0x3c05003b
    ctx->pc = 0x2bc284u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc288: 0x3c030037
    ctx->pc = 0x2bc288u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bc28c: 0x8c6220ac
    ctx->pc = 0x2bc28cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
    // 0x2bc290: 0x200202d
    ctx->pc = 0x2bc290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc294: 0x24a56170
    ctx->pc = 0x2bc294u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24944));
    // 0x2bc298: 0xc0aeed2
    ctx->pc = 0x2BC298u;
    SET_GPR_U32(ctx, 31, 0x2BC2A0u);
    ctx->pc = 0x2BC29Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2A0u; }
    }
    if (ctx->pc != 0x2BC2A0u) { return; }
    ctx->pc = 0x2BC2A0u;
    // 0x2bc2a0: 0x32c20020
    ctx->pc = 0x2bc2a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 32));
label_2bc2a4:
    // 0x2bc2a4: 0x2980b
    ctx->pc = 0x2bc2a4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
    // 0x2bc2a8: 0x32c20010
    ctx->pc = 0x2bc2a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 16));
    // 0x2bc2ac: 0x5440000a
    ctx->pc = 0x2BC2ACu;
    {
        const bool branch_taken_0x2bc2ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bc2ac) {
            ctx->pc = 0x2BC2B0u;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2BC2D8u;
            goto label_2bc2d8;
        }
    }
    ctx->pc = 0x2BC2B4u;
    // 0x2bc2b4: 0x16800003
    ctx->pc = 0x2BC2B4u;
    {
        const bool branch_taken_0x2bc2b4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bc2b4) {
            ctx->pc = 0x2BC2C4u;
            goto label_2bc2c4;
        }
    }
    ctx->pc = 0x2BC2BCu;
    // 0x2bc2bc: 0x10000006
    ctx->pc = 0x2BC2BCu;
    {
        const bool branch_taken_0x2bc2bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC2C0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2bc) {
            ctx->pc = 0x2BC2D8u;
            goto label_2bc2d8;
        }
    }
    ctx->pc = 0x2BC2C4u;
label_2bc2c4:
    // 0x2bc2c4: 0xc0bf306
    ctx->pc = 0x2BC2C4u;
    SET_GPR_U32(ctx, 31, 0x2BC2CCu);
    ctx->pc = 0x2BC2C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2CCu; }
    }
    if (ctx->pc != 0x2BC2CCu) { return; }
    ctx->pc = 0x2BC2CCu;
    // 0x2bc2cc: 0x2442ffff
    ctx->pc = 0x2bc2ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bc2d0: 0x2821021
    ctx->pc = 0x2bc2d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bc2d4: 0xafa2005c
    ctx->pc = 0x2bc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_2bc2d8:
    // 0x2bc2d8: 0x200202d
    ctx->pc = 0x2bc2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc2dc: 0xc0aef0c
    ctx->pc = 0x2BC2DCu;
    SET_GPR_U32(ctx, 31, 0x2BC2E4u);
    ctx->pc = 0x2BC2E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        showText_0x2bbc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC2E4u; }
    }
    if (ctx->pc != 0x2BC2E4u) { return; }
    ctx->pc = 0x2BC2E4u;
    // 0x2bc2e4: 0x40982d
    ctx->pc = 0x2bc2e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc2e8: 0x1000010c
    ctx->pc = 0x2BC2E8u;
    {
        const bool branch_taken_0x2bc2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC2ECu;
        SET_GPR_U32(ctx, 23, ((uint32_t)55 << 16));
        if (branch_taken_0x2bc2e8) {
            ctx->pc = 0x2BC71Cu;
            goto label_2bc71c;
        }
    }
    ctx->pc = 0x2BC2F0u;
label_2bc2f0:
    // 0x2bc2f0: 0x2412fffe
    ctx->pc = 0x2bc2f0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2bc2f4: 0x0
    ctx->pc = 0x2bc2f4u;
    // NOP
label_2bc2f8:
    // 0x2bc2f8: 0x27a40050
    ctx->pc = 0x2bc2f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc2fc: 0x27a50054
    ctx->pc = 0x2bc2fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 84));
    // 0x2bc300: 0xc0aef3e
    ctx->pc = 0x2BC300u;
    SET_GPR_U32(ctx, 31, 0x2BC308u);
    ctx->pc = 0x2BC304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFormat_0x2bbcf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC308u; }
    }
    if (ctx->pc != 0x2BC308u) { return; }
    ctx->pc = 0x2BC308u;
    // 0x2bc308: 0x40982d
    ctx->pc = 0x2bc308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc30c: 0x8fa20054
    ctx->pc = 0x2bc30cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2bc310: 0x1455000c
    ctx->pc = 0x2BC310u;
    {
        const bool branch_taken_0x2bc310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        ctx->pc = 0x2BC314u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        if (branch_taken_0x2bc310) {
            ctx->pc = 0x2BC344u;
            goto label_2bc344;
        }
    }
    ctx->pc = 0x2BC318u;
    // 0x2bc318: 0x14520006
    ctx->pc = 0x2BC318u;
    {
        const bool branch_taken_0x2bc318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x2BC31Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc318) {
            ctx->pc = 0x2BC334u;
            goto label_2bc334;
        }
    }
    ctx->pc = 0x2BC320u;
    // 0x2bc320: 0x8fa40050
    ctx->pc = 0x2bc320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc324: 0xc0be872
    ctx->pc = 0x2BC324u;
    SET_GPR_U32(ctx, 31, 0x2BC32Cu);
    ctx->pc = 0x2BC328u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x2FA1C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x2fa1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC32Cu; }
    }
    if (ctx->pc != 0x2BC32Cu) { return; }
    ctx->pc = 0x2BC32Cu;
    // 0x2bc32c: 0xafa20064
    ctx->pc = 0x2bc32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2bc330: 0x200202d
    ctx->pc = 0x2bc330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc334:
    // 0x2bc334: 0xc0aef0c
    ctx->pc = 0x2BC334u;
    SET_GPR_U32(ctx, 31, 0x2BC33Cu);
    ctx->pc = 0x2BC338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        showText_0x2bbc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC33Cu; }
    }
    if (ctx->pc != 0x2BC33Cu) { return; }
    ctx->pc = 0x2BC33Cu;
    // 0x2bc33c: 0x1000ffee
    ctx->pc = 0x2BC33Cu;
    {
        const bool branch_taken_0x2bc33c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC340u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc33c) {
            ctx->pc = 0x2BC2F8u;
            goto label_2bc2f8;
        }
    }
    ctx->pc = 0x2BC344u;
label_2bc344:
    // 0x2bc344: 0x1280002d
    ctx->pc = 0x2BC344u;
    {
        const bool branch_taken_0x2bc344 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC348u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x2bc344) {
            ctx->pc = 0x2BC3FCu;
            goto label_2bc3fc;
        }
    }
    ctx->pc = 0x2BC34Cu;
    // 0x2bc34c: 0x82820000
    ctx->pc = 0x2bc34cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bc350: 0x10400029
    ctx->pc = 0x2BC350u;
    {
        const bool branch_taken_0x2bc350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC354u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
        if (branch_taken_0x2bc350) {
            ctx->pc = 0x2BC3F8u;
            goto label_2bc3f8;
        }
    }
    ctx->pc = 0x2BC358u;
    // 0x2bc358: 0x8c43001c
    ctx->pc = 0x2bc358u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bc35c: 0x24650001
    ctx->pc = 0x2bc35cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bc360: 0xac45001c
    ctx->pc = 0x2bc360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x2bc364: 0x8c42002c
    ctx->pc = 0x2bc364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2bc368: 0x10400003
    ctx->pc = 0x2BC368u;
    {
        const bool branch_taken_0x2bc368 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC36Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bc368) {
            ctx->pc = 0x2BC378u;
            goto label_2bc378;
        }
    }
    ctx->pc = 0x2BC370u;
    // 0x2bc370: 0xc0b4a34
    ctx->pc = 0x2BC370u;
    SET_GPR_U32(ctx, 31, 0x2BC378u);
    ctx->pc = 0x2BC374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24960));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC378u; }
    }
    if (ctx->pc != 0x2BC378u) { return; }
    ctx->pc = 0x2BC378u;
label_2bc378:
    // 0x2bc378: 0x3c04003b
    ctx->pc = 0x2bc378u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bc37c: 0x24846198
    ctx->pc = 0x2bc37cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24984));
    // 0x2bc380: 0xc0addb0
    ctx->pc = 0x2BC380u;
    SET_GPR_U32(ctx, 31, 0x2BC388u);
    ctx->pc = 0x2BC384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC388u; }
    }
    if (ctx->pc != 0x2BC388u) { return; }
    ctx->pc = 0x2BC388u;
    // 0x2bc388: 0x8ee220ac
    ctx->pc = 0x2bc388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
    // 0x2bc38c: 0xac540000
    ctx->pc = 0x2bc38cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2bc390: 0x3c120037
    ctx->pc = 0x2bc390u;
    SET_GPR_U32(ctx, 18, ((uint32_t)55 << 16));
    // 0x2bc394: 0xae4020b0
    ctx->pc = 0x2bc394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8368), GPR_U32(ctx, 0));
    // 0x2bc398: 0x220202d
    ctx->pc = 0x2bc398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc39c: 0x200282d
    ctx->pc = 0x2bc39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3a0: 0x280302d
    ctx->pc = 0x2bc3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3a4: 0x8fa7005c
    ctx->pc = 0x2bc3a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2bc3a8: 0xc0ae35e
    ctx->pc = 0x2BC3A8u;
    SET_GPR_U32(ctx, 31, 0x2BC3B0u);
    ctx->pc = 0x2BC3ACu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B8D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEval_0x2b8d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3B0u; }
    }
    if (ctx->pc != 0x2BC3B0u) { return; }
    ctx->pc = 0x2BC3B0u;
    // 0x2bc3b0: 0x40a02d
    ctx->pc = 0x2bc3b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3b4: 0x32c20020
    ctx->pc = 0x2bc3b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 32));
    // 0x2bc3b8: 0x144000d8
    ctx->pc = 0x2BC3B8u;
    {
        const bool branch_taken_0x2bc3b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC3BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8368)));
        if (branch_taken_0x2bc3b8) {
            ctx->pc = 0x2BC71Cu;
            goto label_2bc71c;
        }
    }
    ctx->pc = 0x2BC3C0u;
    // 0x2bc3c0: 0x30420001
    ctx->pc = 0x2bc3c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bc3c4: 0x10400012
    ctx->pc = 0x2BC3C4u;
    {
        const bool branch_taken_0x2bc3c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC3C8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x2bc3c4) {
            ctx->pc = 0x2BC410u;
            goto label_2bc410;
        }
    }
    ctx->pc = 0x2BC3CCu;
    // 0x2bc3cc: 0x24020006
    ctx->pc = 0x2bc3ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bc3d0: 0x10620013
    ctx->pc = 0x2BC3D0u;
    {
        const bool branch_taken_0x2bc3d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BC3D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bc3d0) {
            ctx->pc = 0x2BC420u;
            goto label_2bc420;
        }
    }
    ctx->pc = 0x2BC3D8u;
    // 0x2bc3d8: 0x17c0000f
    ctx->pc = 0x2BC3D8u;
    {
        const bool branch_taken_0x2bc3d8 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC3DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2bc3d8) {
            ctx->pc = 0x2BC418u;
            goto label_2bc418;
        }
    }
    ctx->pc = 0x2BC3E0u;
    // 0x2bc3e0: 0x200202d
    ctx->pc = 0x2bc3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3e4: 0x3c05003b
    ctx->pc = 0x2bc3e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc3e8: 0xc0aeed2
    ctx->pc = 0x2BC3E8u;
    SET_GPR_U32(ctx, 31, 0x2BC3F0u);
    ctx->pc = 0x2BC3ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19488));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3F0u; }
    }
    if (ctx->pc != 0x2BC3F0u) { return; }
    ctx->pc = 0x2BC3F0u;
    // 0x2bc3f0: 0x10000008
    ctx->pc = 0x2BC3F0u;
    {
        const bool branch_taken_0x2bc3f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC3F4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x2bc3f0) {
            ctx->pc = 0x2BC414u;
            goto label_2bc414;
        }
    }
    ctx->pc = 0x2BC3F8u;
label_2bc3f8:
    // 0x2bc3f8: 0x24020080
    ctx->pc = 0x2bc3f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_2bc3fc:
    // 0x2bc3fc: 0x16600004
    ctx->pc = 0x2BC3FCu;
    {
        const bool branch_taken_0x2bc3fc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC400u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2bc3fc) {
            ctx->pc = 0x2BC410u;
            goto label_2bc410;
        }
    }
    ctx->pc = 0x2BC404u;
    // 0x2bc404: 0x8fa20050
    ctx->pc = 0x2bc404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc408: 0x104000cf
    ctx->pc = 0x2BC408u;
    {
        const bool branch_taken_0x2bc408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC40Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bc408) {
            ctx->pc = 0x2BC748u;
            goto label_2bc748;
        }
    }
    ctx->pc = 0x2BC410u;
label_2bc410:
    // 0x2bc410: 0x8fa30054
    ctx->pc = 0x2bc410u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2bc414:
    // 0x2bc414: 0x24020006
    ctx->pc = 0x2bc414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2bc418:
    // 0x2bc418: 0x1462000a
    ctx->pc = 0x2BC418u;
    {
        const bool branch_taken_0x2bc418 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BC41Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bc418) {
            ctx->pc = 0x2BC444u;
            goto label_2bc444;
        }
    }
    ctx->pc = 0x2BC420u;
label_2bc420:
    // 0x2bc420: 0x8c4220b0
    ctx->pc = 0x2bc420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x2bc424: 0x24030001
    ctx->pc = 0x2bc424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc428: 0x62f00b
    ctx->pc = 0x2bc428u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 3));
    // 0x2bc42c: 0xc0ad1a2
    ctx->pc = 0x2BC42Cu;
    SET_GPR_U32(ctx, 31, 0x2BC434u);
    ctx->pc = 0x2BC430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC434u; }
    }
    if (ctx->pc != 0x2BC434u) { return; }
    ctx->pc = 0x2BC434u;
    // 0x2bc434: 0x24030001
    ctx->pc = 0x2bc434u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc438: 0x62f00a
    ctx->pc = 0x2bc438u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 3));
    // 0x2bc43c: 0x100000b2
    ctx->pc = 0x2BC43Cu;
    {
        const bool branch_taken_0x2bc43c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC440u;
        if (GPR_U32(ctx, 30) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
        if (branch_taken_0x2bc43c) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC444u;
label_2bc444:
    // 0x2bc444: 0x17c000b5
    ctx->pc = 0x2BC444u;
    {
        const bool branch_taken_0x2bc444 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC448u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 32));
        if (branch_taken_0x2bc444) {
            ctx->pc = 0x2BC71Cu;
            goto label_2bc71c;
        }
    }
    ctx->pc = 0x2BC44Cu;
    // 0x2bc44c: 0x144000ae
    ctx->pc = 0x2BC44Cu;
    {
        const bool branch_taken_0x2bc44c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC450u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2bc44c) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC454u;
    // 0x2bc454: 0x8e230000
    ctx->pc = 0x2bc454u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc458: 0x10620096
    ctx->pc = 0x2BC458u;
    {
        const bool branch_taken_0x2bc458 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BC45Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2bc458) {
            ctx->pc = 0x2BC6B4u;
            goto label_2bc6b4;
        }
    }
    ctx->pc = 0x2BC460u;
    // 0x2bc460: 0x10400007
    ctx->pc = 0x2BC460u;
    {
        const bool branch_taken_0x2bc460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC464u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bc460) {
            ctx->pc = 0x2BC480u;
            goto label_2bc480;
        }
    }
    ctx->pc = 0x2BC468u;
    // 0x2bc468: 0x10620062
    ctx->pc = 0x2BC468u;
    {
        const bool branch_taken_0x2bc468 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BC46Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2bc468) {
            ctx->pc = 0x2BC5F4u;
            goto label_2bc5f4;
        }
    }
    ctx->pc = 0x2BC470u;
    // 0x2bc470: 0x1040008a
    ctx->pc = 0x2BC470u;
    {
        const bool branch_taken_0x2bc470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC474u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x2bc470) {
            ctx->pc = 0x2BC69Cu;
            goto label_2bc69c;
        }
    }
    ctx->pc = 0x2BC478u;
    // 0x2bc478: 0x10000032
    ctx->pc = 0x2BC478u;
    {
        const bool branch_taken_0x2bc478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC47Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bc478) {
            ctx->pc = 0x2BC544u;
            goto label_2bc544;
        }
    }
    ctx->pc = 0x2BC480u;
label_2bc480:
    // 0x2bc480: 0x24020040
    ctx->pc = 0x2bc480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2bc484: 0x1062000c
    ctx->pc = 0x2BC484u;
    {
        const bool branch_taken_0x2bc484 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BC488u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 65));
        if (branch_taken_0x2bc484) {
            ctx->pc = 0x2BC4B8u;
            goto label_2bc4b8;
        }
    }
    ctx->pc = 0x2BC48Cu;
    // 0x2bc48c: 0x10400005
    ctx->pc = 0x2BC48Cu;
    {
        const bool branch_taken_0x2bc48c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC490u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2bc48c) {
            ctx->pc = 0x2BC4A4u;
            goto label_2bc4a4;
        }
    }
    ctx->pc = 0x2BC494u;
    // 0x2bc494: 0x10620091
    ctx->pc = 0x2BC494u;
    {
        const bool branch_taken_0x2bc494 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BC498u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
        if (branch_taken_0x2bc494) {
            ctx->pc = 0x2BC6DCu;
            goto label_2bc6dc;
        }
    }
    ctx->pc = 0x2BC49Cu;
    // 0x2bc49c: 0x10000096
    ctx->pc = 0x2BC49Cu;
    {
        const bool branch_taken_0x2bc49c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC4A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc49c) {
            ctx->pc = 0x2BC6F8u;
            goto label_2bc6f8;
        }
    }
    ctx->pc = 0x2BC4A4u;
label_2bc4a4:
    // 0x2bc4a4: 0x24020080
    ctx->pc = 0x2bc4a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2bc4a8: 0x10620088
    ctx->pc = 0x2BC4A8u;
    {
        const bool branch_taken_0x2bc4a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BC4ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
        if (branch_taken_0x2bc4a8) {
            ctx->pc = 0x2BC6CCu;
            goto label_2bc6cc;
        }
    }
    ctx->pc = 0x2BC4B0u;
    // 0x2bc4b0: 0x10000091
    ctx->pc = 0x2BC4B0u;
    {
        const bool branch_taken_0x2bc4b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC4B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4b0) {
            ctx->pc = 0x2BC6F8u;
            goto label_2bc6f8;
        }
    }
    ctx->pc = 0x2BC4B8u;
label_2bc4b8:
    // 0x2bc4b8: 0x8e230010
    ctx->pc = 0x2bc4b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bc4bc: 0x8e220014
    ctx->pc = 0x2bc4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2bc4c0: 0x621821
    ctx->pc = 0x2bc4c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bc4c4: 0x80720000
    ctx->pc = 0x2bc4c4u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc4c8: 0xa0600000
    ctx->pc = 0x2bc4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc4cc: 0x8fa20054
    ctx->pc = 0x2bc4ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2bc4d0: 0x24030002
    ctx->pc = 0x2bc4d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bc4d4: 0x10430005
    ctx->pc = 0x2BC4D4u;
    {
        const bool branch_taken_0x2bc4d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BC4D8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2bc4d4) {
            ctx->pc = 0x2BC4ECu;
            goto label_2bc4ec;
        }
    }
    ctx->pc = 0x2BC4DCu;
    // 0x2bc4dc: 0x10430006
    ctx->pc = 0x2BC4DCu;
    {
        const bool branch_taken_0x2bc4dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BC4E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4dc) {
            ctx->pc = 0x2BC4F8u;
            goto label_2bc4f8;
        }
    }
    ctx->pc = 0x2BC4E4u;
    // 0x2bc4e4: 0x1000000a
    ctx->pc = 0x2BC4E4u;
    {
        const bool branch_taken_0x2bc4e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC4E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        if (branch_taken_0x2bc4e4) {
            ctx->pc = 0x2BC510u;
            goto label_2bc510;
        }
    }
    ctx->pc = 0x2BC4ECu;
label_2bc4ec:
    // 0x2bc4ec: 0x200202d
    ctx->pc = 0x2bc4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4f0: 0x10000003
    ctx->pc = 0x2BC4F0u;
    {
        const bool branch_taken_0x2bc4f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC4F4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2bc4f0) {
            ctx->pc = 0x2BC500u;
            goto label_2bc500;
        }
    }
    ctx->pc = 0x2BC4F8u;
label_2bc4f8:
    // 0x2bc4f8: 0x3c05003b
    ctx->pc = 0x2bc4f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc4fc: 0x24a54648
    ctx->pc = 0x2bc4fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17992));
label_2bc500:
    // 0x2bc500: 0xc0aeed2
    ctx->pc = 0x2BC500u;
    SET_GPR_U32(ctx, 31, 0x2BC508u);
    ctx->pc = 0x2BC504u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC508u; }
    }
    if (ctx->pc != 0x2BC508u) { return; }
    ctx->pc = 0x2BC508u;
    // 0x2bc508: 0x1000000a
    ctx->pc = 0x2BC508u;
    {
        const bool branch_taken_0x2bc508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC50Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        if (branch_taken_0x2bc508) {
            ctx->pc = 0x2BC534u;
            goto label_2bc534;
        }
    }
    ctx->pc = 0x2BC510u;
label_2bc510:
    // 0x2bc510: 0x10400007
    ctx->pc = 0x2BC510u;
    {
        const bool branch_taken_0x2bc510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC514u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
        if (branch_taken_0x2bc510) {
            ctx->pc = 0x2BC530u;
            goto label_2bc530;
        }
    }
    ctx->pc = 0x2BC518u;
    // 0x2bc518: 0x200202d
    ctx->pc = 0x2bc518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc51c: 0x3c05003b
    ctx->pc = 0x2bc51cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc520: 0x24a561a8
    ctx->pc = 0x2bc520u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25000));
    // 0x2bc524: 0x8c46001c
    ctx->pc = 0x2bc524u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bc528: 0xc0aeed2
    ctx->pc = 0x2BC528u;
    SET_GPR_U32(ctx, 31, 0x2BC530u);
    ctx->pc = 0x2BC52Cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC530u; }
    }
    if (ctx->pc != 0x2BC530u) { return; }
    ctx->pc = 0x2BC530u;
label_2bc530:
    // 0x2bc530: 0x8e220010
    ctx->pc = 0x2bc530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bc534:
    // 0x2bc534: 0x8e230014
    ctx->pc = 0x2bc534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2bc538: 0x431021
    ctx->pc = 0x2bc538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc53c: 0x10000072
    ctx->pc = 0x2BC53Cu;
    {
        const bool branch_taken_0x2bc53c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC540u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
        if (branch_taken_0x2bc53c) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC544u;
label_2bc544:
    // 0x2bc544: 0x1043000d
    ctx->pc = 0x2BC544u;
    {
        const bool branch_taken_0x2bc544 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2bc544) {
            ctx->pc = 0x2BC57Cu;
            goto label_2bc57c;
        }
    }
    ctx->pc = 0x2BC54Cu;
    // 0x2bc54c: 0x10400007
    ctx->pc = 0x2BC54Cu;
    {
        const bool branch_taken_0x2bc54c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC550u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bc54c) {
            ctx->pc = 0x2BC56Cu;
            goto label_2bc56c;
        }
    }
    ctx->pc = 0x2BC554u;
    // 0x2bc554: 0x1043000d
    ctx->pc = 0x2BC554u;
    {
        const bool branch_taken_0x2bc554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BC558u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2bc554) {
            ctx->pc = 0x2BC58Cu;
            goto label_2bc58c;
        }
    }
    ctx->pc = 0x2BC55Cu;
    // 0x2bc55c: 0x10430011
    ctx->pc = 0x2BC55Cu;
    {
        const bool branch_taken_0x2bc55c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BC560u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
        if (branch_taken_0x2bc55c) {
            ctx->pc = 0x2BC5A4u;
            goto label_2bc5a4;
        }
    }
    ctx->pc = 0x2BC564u;
    // 0x2bc564: 0x10000019
    ctx->pc = 0x2BC564u;
    {
        const bool branch_taken_0x2bc564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC568u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2bc564) {
            ctx->pc = 0x2BC5CCu;
            goto label_2bc5cc;
        }
    }
    ctx->pc = 0x2BC56Cu;
label_2bc56c:
    // 0x2bc56c: 0xc6200010
    ctx->pc = 0x2bc56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc570: 0x200202d
    ctx->pc = 0x2bc570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc574: 0x1000000f
    ctx->pc = 0x2BC574u;
    {
        const bool branch_taken_0x2bc574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC578u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2bc574) {
            ctx->pc = 0x2BC5B4u;
            goto label_2bc5b4;
        }
    }
    ctx->pc = 0x2BC57Cu;
label_2bc57c:
    // 0x2bc57c: 0xc0be862
    ctx->pc = 0x2BC57Cu;
    SET_GPR_U32(ctx, 31, 0x2BC584u);
    ctx->pc = 0x2BC580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC584u; }
    }
    if (ctx->pc != 0x2BC584u) { return; }
    ctx->pc = 0x2BC584u;
    // 0x2bc584: 0x1000002d
    ctx->pc = 0x2BC584u;
    {
        const bool branch_taken_0x2bc584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC588u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc584) {
            ctx->pc = 0x2BC63Cu;
            goto label_2bc63c;
        }
    }
    ctx->pc = 0x2BC58Cu;
label_2bc58c:
    // 0x2bc58c: 0x8ee220ac
    ctx->pc = 0x2bc58cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
    // 0x2bc590: 0xc6200010
    ctx->pc = 0x2bc590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc594: 0x200202d
    ctx->pc = 0x2bc594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc598: 0x3c05003b
    ctx->pc = 0x2bc598u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc59c: 0x1000000e
    ctx->pc = 0x2BC59Cu;
    {
        const bool branch_taken_0x2bc59c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC5A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25024));
        if (branch_taken_0x2bc59c) {
            ctx->pc = 0x2BC5D8u;
            goto label_2bc5d8;
        }
    }
    ctx->pc = 0x2BC5A4u;
label_2bc5a4:
    // 0x2bc5a4: 0xc6200010
    ctx->pc = 0x2bc5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc5a8: 0x200202d
    ctx->pc = 0x2bc5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc5ac: 0x3c05003b
    ctx->pc = 0x2bc5acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc5b0: 0x24a561d8
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25048));
label_2bc5b4:
    // 0x2bc5b4: 0x46000064
    ctx->pc = 0x2bc5b4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2bc5b8: 0x44060800
    ctx->pc = 0x2bc5b8u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x2bc5bc: 0xc0aeed2
    ctx->pc = 0x2BC5BCu;
    SET_GPR_U32(ctx, 31, 0x2BC5C4u);
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC5C4u; }
    }
    if (ctx->pc != 0x2BC5C4u) { return; }
    ctx->pc = 0x2BC5C4u;
    // 0x2bc5c4: 0x10000050
    ctx->pc = 0x2BC5C4u;
    {
        const bool branch_taken_0x2bc5c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc5c4) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC5CCu;
label_2bc5cc:
    // 0x2bc5cc: 0x200202d
    ctx->pc = 0x2bc5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc5d0: 0x3c05003b
    ctx->pc = 0x2bc5d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc5d4: 0x24a561e0
    ctx->pc = 0x2bc5d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25056));
label_2bc5d8:
    // 0x2bc5d8: 0x8c46001c
    ctx->pc = 0x2bc5d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bc5dc: 0x46000064
    ctx->pc = 0x2bc5dcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2bc5e0: 0x44070800
    ctx->pc = 0x2bc5e0u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x2bc5e4: 0xc0aeed2
    ctx->pc = 0x2BC5E4u;
    SET_GPR_U32(ctx, 31, 0x2BC5ECu);
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC5ECu; }
    }
    if (ctx->pc != 0x2BC5ECu) { return; }
    ctx->pc = 0x2BC5ECu;
    // 0x2bc5ec: 0x10000046
    ctx->pc = 0x2BC5ECu;
    {
        const bool branch_taken_0x2bc5ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc5ec) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC5F4u;
label_2bc5f4:
    // 0x2bc5f4: 0x8fa20054
    ctx->pc = 0x2bc5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2bc5f8: 0x24030001
    ctx->pc = 0x2bc5f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc5fc: 0x1043000c
    ctx->pc = 0x2BC5FCu;
    {
        const bool branch_taken_0x2bc5fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2bc5fc) {
            ctx->pc = 0x2BC630u;
            goto label_2bc630;
        }
    }
    ctx->pc = 0x2BC604u;
    // 0x2bc604: 0x10400007
    ctx->pc = 0x2BC604u;
    {
        const bool branch_taken_0x2bc604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC608u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bc604) {
            ctx->pc = 0x2BC624u;
            goto label_2bc624;
        }
    }
    ctx->pc = 0x2BC60Cu;
    // 0x2bc60c: 0x10430010
    ctx->pc = 0x2BC60Cu;
    {
        const bool branch_taken_0x2bc60c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BC610u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2bc60c) {
            ctx->pc = 0x2BC650u;
            goto label_2bc650;
        }
    }
    ctx->pc = 0x2BC614u;
    // 0x2bc614: 0x10430013
    ctx->pc = 0x2BC614u;
    {
        const bool branch_taken_0x2bc614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BC618u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
        if (branch_taken_0x2bc614) {
            ctx->pc = 0x2BC664u;
            goto label_2bc664;
        }
    }
    ctx->pc = 0x2BC61Cu;
    // 0x2bc61c: 0x10000018
    ctx->pc = 0x2BC61Cu;
    {
        const bool branch_taken_0x2bc61c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC620u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc61c) {
            ctx->pc = 0x2BC680u;
            goto label_2bc680;
        }
    }
    ctx->pc = 0x2BC624u;
label_2bc624:
    // 0x2bc624: 0x200202d
    ctx->pc = 0x2bc624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc628: 0x10000011
    ctx->pc = 0x2BC628u;
    {
        const bool branch_taken_0x2bc628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC62Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2bc628) {
            ctx->pc = 0x2BC670u;
            goto label_2bc670;
        }
    }
    ctx->pc = 0x2BC630u;
label_2bc630:
    // 0x2bc630: 0xc0be4ce
    ctx->pc = 0x2BC630u;
    SET_GPR_U32(ctx, 31, 0x2BC638u);
    ctx->pc = 0x2BC634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC638u; }
    }
    if (ctx->pc != 0x2BC638u) { return; }
    ctx->pc = 0x2BC638u;
    // 0x2bc638: 0x200202d
    ctx->pc = 0x2bc638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc63c:
    // 0x2bc63c: 0x8fa50050
    ctx->pc = 0x2bc63cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc640: 0xc0aeed2
    ctx->pc = 0x2BC640u;
    SET_GPR_U32(ctx, 31, 0x2BC648u);
    ctx->pc = 0x2BC644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC648u; }
    }
    if (ctx->pc != 0x2BC648u) { return; }
    ctx->pc = 0x2BC648u;
    // 0x2bc648: 0x1000002f
    ctx->pc = 0x2BC648u;
    {
        const bool branch_taken_0x2bc648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc648) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC650u;
label_2bc650:
    // 0x2bc650: 0x8ee220ac
    ctx->pc = 0x2bc650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 8364)));
    // 0x2bc654: 0x200202d
    ctx->pc = 0x2bc654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc658: 0x3c05003b
    ctx->pc = 0x2bc658u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc65c: 0x1000000a
    ctx->pc = 0x2BC65Cu;
    {
        const bool branch_taken_0x2bc65c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC660u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25080));
        if (branch_taken_0x2bc65c) {
            ctx->pc = 0x2BC688u;
            goto label_2bc688;
        }
    }
    ctx->pc = 0x2BC664u;
label_2bc664:
    // 0x2bc664: 0x200202d
    ctx->pc = 0x2bc664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc668: 0x3c05003b
    ctx->pc = 0x2bc668u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc66c: 0x24a56210
    ctx->pc = 0x2bc66cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25104));
label_2bc670:
    // 0x2bc670: 0xc0aeed2
    ctx->pc = 0x2BC670u;
    SET_GPR_U32(ctx, 31, 0x2BC678u);
    ctx->pc = 0x2BC674u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC678u; }
    }
    if (ctx->pc != 0x2BC678u) { return; }
    ctx->pc = 0x2BC678u;
    // 0x2bc678: 0x10000023
    ctx->pc = 0x2BC678u;
    {
        const bool branch_taken_0x2bc678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc678) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC680u;
label_2bc680:
    // 0x2bc680: 0x3c05003b
    ctx->pc = 0x2bc680u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc684: 0x24a56218
    ctx->pc = 0x2bc684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25112));
label_2bc688:
    // 0x2bc688: 0x8c46001c
    ctx->pc = 0x2bc688u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2bc68c: 0xc0aeed2
    ctx->pc = 0x2BC68Cu;
    SET_GPR_U32(ctx, 31, 0x2BC694u);
    ctx->pc = 0x2BC690u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC694u; }
    }
    if (ctx->pc != 0x2BC694u) { return; }
    ctx->pc = 0x2BC694u;
    // 0x2bc694: 0x1000001c
    ctx->pc = 0x2BC694u;
    {
        const bool branch_taken_0x2bc694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc694) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC69Cu;
label_2bc69c:
    // 0x2bc69c: 0x200202d
    ctx->pc = 0x2bc69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6a0: 0x8fa50050
    ctx->pc = 0x2bc6a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc6a4: 0xc0aefc0
    ctx->pc = 0x2BC6A4u;
    SET_GPR_U32(ctx, 31, 0x2BC6ACu);
    ctx->pc = 0x2BC6A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        showVector_0x2bbf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6ACu; }
    }
    if (ctx->pc != 0x2BC6ACu) { return; }
    ctx->pc = 0x2BC6ACu;
    // 0x2bc6ac: 0x10000016
    ctx->pc = 0x2BC6ACu;
    {
        const bool branch_taken_0x2bc6ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc6ac) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC6B4u;
label_2bc6b4:
    // 0x2bc6b4: 0x200202d
    ctx->pc = 0x2bc6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6b8: 0x8fa50050
    ctx->pc = 0x2bc6b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc6bc: 0xc0aefe4
    ctx->pc = 0x2BC6BCu;
    SET_GPR_U32(ctx, 31, 0x2BC6C4u);
    ctx->pc = 0x2BC6C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        showMatrix_0x2bbf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6C4u; }
    }
    if (ctx->pc != 0x2BC6C4u) { return; }
    ctx->pc = 0x2BC6C4u;
    // 0x2bc6c4: 0x10000010
    ctx->pc = 0x2BC6C4u;
    {
        const bool branch_taken_0x2bc6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc6c4) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC6CCu;
label_2bc6cc:
    // 0x2bc6cc: 0x200202d
    ctx->pc = 0x2bc6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6d0: 0x3c05003b
    ctx->pc = 0x2bc6d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc6d4: 0x10000004
    ctx->pc = 0x2BC6D4u;
    {
        const bool branch_taken_0x2bc6d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC6D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25136));
        if (branch_taken_0x2bc6d4) {
            ctx->pc = 0x2BC6E8u;
            goto label_2bc6e8;
        }
    }
    ctx->pc = 0x2BC6DCu;
label_2bc6dc:
    // 0x2bc6dc: 0x200202d
    ctx->pc = 0x2bc6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6e0: 0x3c05003b
    ctx->pc = 0x2bc6e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc6e4: 0x24a56240
    ctx->pc = 0x2bc6e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25152));
label_2bc6e8:
    // 0x2bc6e8: 0xc0aeed2
    ctx->pc = 0x2BC6E8u;
    SET_GPR_U32(ctx, 31, 0x2BC6F0u);
    ctx->pc = 0x2BC6ECu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC6F0u; }
    }
    if (ctx->pc != 0x2BC6F0u) { return; }
    ctx->pc = 0x2BC6F0u;
    // 0x2bc6f0: 0x10000005
    ctx->pc = 0x2BC6F0u;
    {
        const bool branch_taken_0x2bc6f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc6f0) {
            ctx->pc = 0x2BC708u;
            goto label_2bc708;
        }
    }
    ctx->pc = 0x2BC6F8u;
label_2bc6f8:
    // 0x2bc6f8: 0x3c05003b
    ctx->pc = 0x2bc6f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc6fc: 0x24a56250
    ctx->pc = 0x2bc6fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25168));
    // 0x2bc700: 0xc0aeed2
    ctx->pc = 0x2BC700u;
    SET_GPR_U32(ctx, 31, 0x2BC708u);
    ctx->pc = 0x2BC704u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC708u; }
    }
    if (ctx->pc != 0x2BC708u) { return; }
    ctx->pc = 0x2BC708u;
label_2bc708:
    // 0x2bc708: 0x17c00004
    ctx->pc = 0x2BC708u;
    {
        const bool branch_taken_0x2bc708 = (GPR_U32(ctx, 30) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC70Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc708) {
            ctx->pc = 0x2BC71Cu;
            goto label_2bc71c;
        }
    }
    ctx->pc = 0x2BC710u;
    // 0x2bc710: 0xc0aef0c
    ctx->pc = 0x2BC710u;
    SET_GPR_U32(ctx, 31, 0x2BC718u);
    ctx->pc = 0x2BC714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        showText_0x2bbc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC718u; }
    }
    if (ctx->pc != 0x2BC718u) { return; }
    ctx->pc = 0x2BC718u;
    // 0x2bc718: 0x40982d
    ctx->pc = 0x2bc718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc71c:
    // 0x2bc71c: 0x12600004
    ctx->pc = 0x2BC71Cu;
    {
        const bool branch_taken_0x2bc71c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bc71c) {
            ctx->pc = 0x2BC730u;
            goto label_2bc730;
        }
    }
    ctx->pc = 0x2BC724u;
    // 0x2bc724: 0x82620000
    ctx->pc = 0x2bc724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc728: 0x1440fef1
    ctx->pc = 0x2BC728u;
    {
        const bool branch_taken_0x2bc728 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC72Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2bc728) {
            ctx->pc = 0x2BC2F0u;
            goto label_2bc2f0;
        }
    }
    ctx->pc = 0x2BC730u;
label_2bc730:
    // 0x2bc730: 0x12800005
    ctx->pc = 0x2BC730u;
    {
        const bool branch_taken_0x2bc730 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC734u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bc730) {
            ctx->pc = 0x2BC748u;
            goto label_2bc748;
        }
    }
    ctx->pc = 0x2BC738u;
    // 0x2bc738: 0x82820000
    ctx->pc = 0x2bc738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bc73c: 0x1440feec
    ctx->pc = 0x2BC73Cu;
    {
        const bool branch_taken_0x2bc73c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC740u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x2bc73c) {
            ctx->pc = 0x2BC2F0u;
            goto label_2bc2f0;
        }
    }
    ctx->pc = 0x2BC744u;
    // 0x2bc744: 0x3c020037
    ctx->pc = 0x2bc744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bc748:
    // 0x2bc748: 0x8c4320ac
    ctx->pc = 0x2bc748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bc74c: 0xac600000
    ctx->pc = 0x2bc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2bc750: 0x8fa20060
    ctx->pc = 0x2bc750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc754: 0xac62002c
    ctx->pc = 0x2bc754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2bc758: 0x32c20040
    ctx->pc = 0x2bc758u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 64));
    // 0x2bc75c: 0x14400009
    ctx->pc = 0x2BC75Cu;
    {
        const bool branch_taken_0x2bc75c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC760u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 128));
        if (branch_taken_0x2bc75c) {
            ctx->pc = 0x2BC784u;
            goto label_2bc784;
        }
    }
    ctx->pc = 0x2BC764u;
    // 0x2bc764: 0x8c620048
    ctx->pc = 0x2bc764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2bc768: 0x30420001
    ctx->pc = 0x2bc768u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bc76c: 0x10400004
    ctx->pc = 0x2BC76Cu;
    {
        const bool branch_taken_0x2bc76c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC770u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc76c) {
            ctx->pc = 0x2BC780u;
            goto label_2bc780;
        }
    }
    ctx->pc = 0x2BC774u;
    // 0x2bc774: 0x3c05003b
    ctx->pc = 0x2bc774u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc778: 0xc0aeed2
    ctx->pc = 0x2BC778u;
    SET_GPR_U32(ctx, 31, 0x2BC780u);
    ctx->pc = 0x2BC77Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25184));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC780u; }
    }
    if (ctx->pc != 0x2BC780u) { return; }
    ctx->pc = 0x2BC780u;
label_2bc780:
    // 0x2bc780: 0x32c20080
    ctx->pc = 0x2bc780u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 128));
label_2bc784:
    // 0x2bc784: 0x1440000b
    ctx->pc = 0x2BC784u;
    {
        const bool branch_taken_0x2bc784 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC788u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 288));
        if (branch_taken_0x2bc784) {
            ctx->pc = 0x2BC7B4u;
            goto label_2bc7b4;
        }
    }
    ctx->pc = 0x2BC78Cu;
    // 0x2bc78c: 0x3c030037
    ctx->pc = 0x2bc78cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bc790: 0x8c6220ac
    ctx->pc = 0x2bc790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8364)));
    // 0x2bc794: 0x8c420048
    ctx->pc = 0x2bc794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2bc798: 0x30420002
    ctx->pc = 0x2bc798u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2bc79c: 0x10400004
    ctx->pc = 0x2BC79Cu;
    {
        const bool branch_taken_0x2bc79c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BC7A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bc79c) {
            ctx->pc = 0x2BC7B0u;
            goto label_2bc7b0;
        }
    }
    ctx->pc = 0x2BC7A4u;
    // 0x2bc7a4: 0x3c05003b
    ctx->pc = 0x2bc7a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc7a8: 0xc0aeed2
    ctx->pc = 0x2BC7A8u;
    SET_GPR_U32(ctx, 31, 0x2BC7B0u);
    ctx->pc = 0x2BC7ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25208));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7B0u; }
    }
    if (ctx->pc != 0x2BC7B0u) { return; }
    ctx->pc = 0x2BC7B0u;
label_2bc7b0:
    // 0x2bc7b0: 0x32c20120
    ctx->pc = 0x2bc7b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), 288));
label_2bc7b4:
    // 0x2bc7b4: 0x14400006
    ctx->pc = 0x2BC7B4u;
    {
        const bool branch_taken_0x2bc7b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BC7B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 100)));
        if (branch_taken_0x2bc7b4) {
            ctx->pc = 0x2BC7D0u;
            goto label_2bc7d0;
        }
    }
    ctx->pc = 0x2BC7BCu;
    // 0x2bc7bc: 0x200202d
    ctx->pc = 0x2bc7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7c0: 0x3c05003b
    ctx->pc = 0x2bc7c0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc7c4: 0xc0aeed2
    ctx->pc = 0x2BC7C4u;
    SET_GPR_U32(ctx, 31, 0x2BC7CCu);
    ctx->pc = 0x2BC7C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18040));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC7CCu; }
    }
    if (ctx->pc != 0x2BC7CCu) { return; }
    ctx->pc = 0x2BC7CCu;
    // 0x2bc7cc: 0x8fa20064
    ctx->pc = 0x2bc7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2bc7d0:
    // 0x2bc7d0: 0x2442ffff
    ctx->pc = 0x2bc7d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bc7d4: 0x1c40fe78
    ctx->pc = 0x2BC7D4u;
    {
        const bool branch_taken_0x2bc7d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BC7D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x2bc7d4) {
            ctx->pc = 0x2BC1B8u;
            goto label_2bc1b8;
        }
    }
    ctx->pc = 0x2BC7DCu;
    // 0x2bc7dc: 0xdfbf0100
    ctx->pc = 0x2bc7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bc7e0: 0xdfbe00f0
    ctx->pc = 0x2bc7e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc7e4: 0xdfb700e0
    ctx->pc = 0x2bc7e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc7e8: 0xdfb600d0
    ctx->pc = 0x2bc7e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc7ec: 0xdfb500c0
    ctx->pc = 0x2bc7ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bc7f0: 0xdfb400b0
    ctx->pc = 0x2bc7f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bc7f4: 0xdfb300a0
    ctx->pc = 0x2bc7f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bc7f8: 0xdfb20090
    ctx->pc = 0x2bc7f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc7fc: 0xdfb10080
    ctx->pc = 0x2bc7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc800: 0xdfb00070
    ctx->pc = 0x2bc800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc804: 0x3e00008
    ctx->pc = 0x2BC804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BC1B8u: goto label_2bc1b8;
            case 0x2BC24Cu: goto label_2bc24c;
            case 0x2BC27Cu: goto label_2bc27c;
            case 0x2BC2A4u: goto label_2bc2a4;
            case 0x2BC2C4u: goto label_2bc2c4;
            case 0x2BC2D8u: goto label_2bc2d8;
            case 0x2BC2F0u: goto label_2bc2f0;
            case 0x2BC2F8u: goto label_2bc2f8;
            case 0x2BC334u: goto label_2bc334;
            case 0x2BC344u: goto label_2bc344;
            case 0x2BC378u: goto label_2bc378;
            case 0x2BC3F8u: goto label_2bc3f8;
            case 0x2BC3FCu: goto label_2bc3fc;
            case 0x2BC410u: goto label_2bc410;
            case 0x2BC414u: goto label_2bc414;
            case 0x2BC418u: goto label_2bc418;
            case 0x2BC420u: goto label_2bc420;
            case 0x2BC444u: goto label_2bc444;
            case 0x2BC480u: goto label_2bc480;
            case 0x2BC4A4u: goto label_2bc4a4;
            case 0x2BC4B8u: goto label_2bc4b8;
            case 0x2BC4ECu: goto label_2bc4ec;
            case 0x2BC4F8u: goto label_2bc4f8;
            case 0x2BC500u: goto label_2bc500;
            case 0x2BC510u: goto label_2bc510;
            case 0x2BC530u: goto label_2bc530;
            case 0x2BC534u: goto label_2bc534;
            case 0x2BC544u: goto label_2bc544;
            case 0x2BC56Cu: goto label_2bc56c;
            case 0x2BC57Cu: goto label_2bc57c;
            case 0x2BC58Cu: goto label_2bc58c;
            case 0x2BC5A4u: goto label_2bc5a4;
            case 0x2BC5B4u: goto label_2bc5b4;
            case 0x2BC5CCu: goto label_2bc5cc;
            case 0x2BC5D8u: goto label_2bc5d8;
            case 0x2BC5F4u: goto label_2bc5f4;
            case 0x2BC624u: goto label_2bc624;
            case 0x2BC630u: goto label_2bc630;
            case 0x2BC63Cu: goto label_2bc63c;
            case 0x2BC650u: goto label_2bc650;
            case 0x2BC664u: goto label_2bc664;
            case 0x2BC670u: goto label_2bc670;
            case 0x2BC680u: goto label_2bc680;
            case 0x2BC688u: goto label_2bc688;
            case 0x2BC69Cu: goto label_2bc69c;
            case 0x2BC6B4u: goto label_2bc6b4;
            case 0x2BC6CCu: goto label_2bc6cc;
            case 0x2BC6DCu: goto label_2bc6dc;
            case 0x2BC6E8u: goto label_2bc6e8;
            case 0x2BC6F8u: goto label_2bc6f8;
            case 0x2BC708u: goto label_2bc708;
            case 0x2BC71Cu: goto label_2bc71c;
            case 0x2BC730u: goto label_2bc730;
            case 0x2BC748u: goto label_2bc748;
            case 0x2BC780u: goto label_2bc780;
            case 0x2BC784u: goto label_2bc784;
            case 0x2BC7B0u: goto label_2bc7b0;
            case 0x2BC7B4u: goto label_2bc7b4;
            case 0x2BC7D0u: goto label_2bc7d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BC80Cu;
}
