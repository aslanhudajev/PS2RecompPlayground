#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_AddPartition
// Address: 0x16b148 - 0x16b45c
void ADXF_AddPartition_0x16b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_AddPartition");


    ctx->pc = 0x16b148u;

    // 0x16b148: 0x27bdff60
    ctx->pc = 0x16b148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16b14c: 0xffb20020
    ctx->pc = 0x16b14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b150: 0xffb10010
    ctx->pc = 0x16b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16b154: 0xa0902d
    ctx->pc = 0x16b154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b158: 0xffb00000
    ctx->pc = 0x16b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b15c: 0xc0882d
    ctx->pc = 0x16b15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b160: 0xffb50050
    ctx->pc = 0x16b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16b164: 0x80802d
    ctx->pc = 0x16b164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b168: 0xffb40040
    ctx->pc = 0x16b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16b16c: 0xe0a82d
    ctx->pc = 0x16b16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b170: 0xffbf0090
    ctx->pc = 0x16b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16b174: 0xffbe0080
    ctx->pc = 0x16b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x16b178: 0x220282d
    ctx->pc = 0x16b178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b17c: 0xffb70070
    ctx->pc = 0x16b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x16b180: 0xffb60060
    ctx->pc = 0x16b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x16b184: 0xc05a97e
    ctx->pc = 0x16B184u;
    SET_GPR_U32(ctx, 31, 0x16B18Cu);
    ctx->pc = 0x16B188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->pc = 0x16A5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_ChkPrmPt_0x16a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B18Cu; }
        else if (ctx->pc != 0x16B18Cu) { ctx->pc = 0x16B18Cu; }
    }
    if (ctx->pc != 0x16B18Cu) { return; }
    ctx->pc = 0x16B18Cu;
    // 0x16b18c: 0x40a02d
    ctx->pc = 0x16b18cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b190: 0x68000a6
    ctx->pc = 0x16B190u;
    {
        const bool branch_taken_0x16b190 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x16B194u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b190) {
            ctx->pc = 0x16B42Cu;
            goto label_16b42c;
        }
    }
    ctx->pc = 0x16B198u;
    // 0x16b198: 0xc05ad72
    ctx->pc = 0x16B198u;
    SET_GPR_U32(ctx, 31, 0x16B1A0u);
    ctx->pc = 0x16B19Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1A0u; }
        else if (ctx->pc != 0x16B1A0u) { ctx->pc = 0x16B1A0u; }
    }
    if (ctx->pc != 0x16B1A0u) { return; }
    ctx->pc = 0x16B1A0u;
    // 0x16b1a0: 0x40b02d
    ctx->pc = 0x16b1a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1a4: 0x16c0000f
    ctx->pc = 0x16B1A4u;
    {
        const bool branch_taken_0x16b1a4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B1A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x16b1a4) {
            ctx->pc = 0x16B1E4u;
            goto label_16b1e4;
        }
    }
    ctx->pc = 0x16B1ACu;
    // 0x16b1ac: 0x3c04002c
    ctx->pc = 0x16b1acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16b1b0: 0xc05a854
    ctx->pc = 0x16B1B0u;
    SET_GPR_U32(ctx, 31, 0x16B1B8u);
    ctx->pc = 0x16B1B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939480));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1B8u; }
        else if (ctx->pc != 0x16B1B8u) { ctx->pc = 0x16B1B8u; }
    }
    if (ctx->pc != 0x16B1B8u) { return; }
    ctx->pc = 0x16B1B8u;
    // 0x16b1b8: 0x1000009c
    ctx->pc = 0x16B1B8u;
    {
        const bool branch_taken_0x16b1b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B1BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16b1b8) {
            ctx->pc = 0x16B42Cu;
            goto label_16b42c;
        }
    }
    ctx->pc = 0x16B1C0u;
label_16b1c0:
    // 0x16b1c0: 0x3c04002c
    ctx->pc = 0x16b1c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16b1c4: 0xacc70004
    ctx->pc = 0x16b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x16b1c8: 0x24849380
    ctx->pc = 0x16b1c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939520));
    // 0x16b1cc: 0xc05a854
    ctx->pc = 0x16B1CCu;
    SET_GPR_U32(ctx, 31, 0x16B1D4u);
    ctx->pc = 0x16B1D0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B1D4u; }
        else if (ctx->pc != 0x16B1D4u) { ctx->pc = 0x16B1D4u; }
    }
    if (ctx->pc != 0x16B1D4u) { return; }
    ctx->pc = 0x16B1D4u;
    // 0x16b1d4: 0x1000008b
    ctx->pc = 0x16B1D4u;
    {
        const bool branch_taken_0x16b1d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B1D8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x16b1d4) {
            ctx->pc = 0x16B404u;
            goto label_16b404;
        }
    }
    ctx->pc = 0x16B1DCu;
label_16b1dc:
    // 0x16b1dc: 0x10000088
    ctx->pc = 0x16B1DCu;
    {
        const bool branch_taken_0x16b1dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B1E0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b1dc) {
            ctx->pc = 0x16B400u;
            goto label_16b400;
        }
    }
    ctx->pc = 0x16B1E4u;
label_16b1e4:
    // 0x16b1e4: 0x101880
    ctx->pc = 0x16b1e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x16b1e8: 0x2442c918
    ctx->pc = 0x16b1e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x16b1ec: 0x240282d
    ctx->pc = 0x16b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1f0: 0x621821
    ctx->pc = 0x16b1f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b1f4: 0x26240010
    ctx->pc = 0x16b1f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x16b1f8: 0x8c620000
    ctx->pc = 0x16b1f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b1fc: 0x24060100
    ctx->pc = 0x16b1fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x16b200: 0xac710000
    ctx->pc = 0x16b200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x16b204: 0x3c17002e
    ctx->pc = 0x16b204u;
    SET_GPR_U32(ctx, 23, ((uint32_t)46 << 16));
    // 0x16b208: 0xae220000
    ctx->pc = 0x16b208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16b20c: 0xc05167c
    ctx->pc = 0x16B20Cu;
    SET_GPR_U32(ctx, 31, 0x16B214u);
    ctx->pc = 0x16B210u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B214u; }
        else if (ctx->pc != 0x16B214u) { ctx->pc = 0x16B214u; }
    }
    if (ctx->pc != 0x16B214u) { return; }
    ctx->pc = 0x16B214u;
    // 0x16b214: 0x263e0114
    ctx->pc = 0x16b214u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 17), 276));
    // 0x16b218: 0x24020001
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b21c: 0x3c04002e
    ctx->pc = 0x16b21cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)46 << 16));
    // 0x16b220: 0x3c03ffff
    ctx->pc = 0x16b220u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x16b224: 0xa222000e
    ctx->pc = 0x16b224u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x16b228: 0x2484cfe0
    ctx->pc = 0x16b228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954976));
    // 0x16b22c: 0x3463ffc0
    ctx->pc = 0x16b22cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65472));
    // 0x16b230: 0x832024
    ctx->pc = 0x16b230u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b234: 0x3c02002e
    ctx->pc = 0x16b234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x16b238: 0xac44f0a0
    ctx->pc = 0x16b238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963360), GPR_U32(ctx, 4));
    // 0x16b23c: 0x902d
    ctx->pc = 0x16b23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b240: 0xaee4f0a4
    ctx->pc = 0x16b240u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294963364), GPR_U32(ctx, 4));
    // 0x16b244: 0x982d
    ctx->pc = 0x16b244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b248: 0xae200008
    ctx->pc = 0x16b248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x16b24c: 0x802d
    ctx->pc = 0x16b24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b250: 0x3c02002e
    ctx->pc = 0x16b250u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x16b254: 0x0
    ctx->pc = 0x16b254u;
    // NOP
label_16b258:
    // 0x16b258: 0x2c0202d
    ctx->pc = 0x16b258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b25c: 0x8c46f0a4
    ctx->pc = 0x16b25cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294963364)));
    // 0x16b260: 0xc05a990
    ctx->pc = 0x16B260u;
    SET_GPR_U32(ctx, 31, 0x16B268u);
    ctx->pc = 0x16B264u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16A640u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_LoadData_0x16a640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B268u; }
        else if (ctx->pc != 0x16B268u) { ctx->pc = 0x16B268u; }
    }
    if (ctx->pc != 0x16B268u) { return; }
    ctx->pc = 0x16B268u;
    // 0x16b268: 0x5840005c
    ctx->pc = 0x16B268u;
    {
        const bool branch_taken_0x16b268 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16b268) {
            ctx->pc = 0x16B26Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x16B3DCu;
            goto label_16b3dc;
        }
    }
    ctx->pc = 0x16B270u;
    // 0x16b270: 0x8e220008
    ctx->pc = 0x16b270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16b274: 0x14400014
    ctx->pc = 0x16B274u;
    {
        const bool branch_taken_0x16b274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B278u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b274) {
            ctx->pc = 0x16B2C8u;
            goto label_16b2c8;
        }
    }
    ctx->pc = 0x16B27Cu;
    // 0x16b27c: 0x8ee6f0a4
    ctx->pc = 0x16b27cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 4294963364)));
    // 0x16b280: 0x3c070001
    ctx->pc = 0x16b280u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x16b284: 0x90c50007
    ctx->pc = 0x16b284u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x16b288: 0x90c40006
    ctx->pc = 0x16b288u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x16b28c: 0x90c20005
    ctx->pc = 0x16b28cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x16b290: 0x52e00
    ctx->pc = 0x16b290u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16b294: 0x90c30004
    ctx->pc = 0x16b294u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16b298: 0x42400
    ctx->pc = 0x16b298u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b29c: 0x21200
    ctx->pc = 0x16b29cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16b2a0: 0x822025
    ctx->pc = 0x16b2a0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16b2a4: 0x651825
    ctx->pc = 0x16b2a4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16b2a8: 0x642025
    ctx->pc = 0x16b2a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b2ac: 0xe4102a
    ctx->pc = 0x16b2acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 4)));
    // 0x16b2b0: 0x1440ffc3
    ctx->pc = 0x16B2B0u;
    {
        const bool branch_taken_0x16b2b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B2B4u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 4)));
        if (branch_taken_0x16b2b0) {
            ctx->pc = 0x16B1C0u;
            goto label_16b1c0;
        }
    }
    ctx->pc = 0x16B2B8u;
    // 0x16b2b8: 0x2a0102d
    ctx->pc = 0x16b2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2bc: 0x83100a
    ctx->pc = 0x16b2bcu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x16b2c0: 0x24080002
    ctx->pc = 0x16b2c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b2c4: 0xae220008
    ctx->pc = 0x16b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_16b2c8:
    // 0x16b2c8: 0x29020200
    ctx->pc = 0x16b2c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 512));
    // 0x16b2cc: 0x10400042
    ctx->pc = 0x16B2CCu;
    {
        const bool branch_taken_0x16b2cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B2D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        if (branch_taken_0x16b2cc) {
            ctx->pc = 0x16B3D8u;
            goto label_16b3d8;
        }
    }
    ctx->pc = 0x16B2D4u;
    // 0x16b2d4: 0x1318c0
    ctx->pc = 0x16b2d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
    // 0x16b2d8: 0x8c45f0a4
    ctx->pc = 0x16b2d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294963364)));
    // 0x16b2dc: 0x82080
    ctx->pc = 0x16b2dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 2));
    // 0x16b2e0: 0x7e3821
    ctx->pc = 0x16b2e0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x16b2e4: 0x2409ffff
    ctx->pc = 0x16b2e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b2e8: 0x853021
    ctx->pc = 0x16b2e8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16b2ec: 0x90c50003
    ctx->pc = 0x16b2ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_16b2f0:
    // 0x16b2f0: 0x90c30002
    ctx->pc = 0x16b2f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x16b2f4: 0x90c40001
    ctx->pc = 0x16b2f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x16b2f8: 0x52e00
    ctx->pc = 0x16b2f8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16b2fc: 0x90c20000
    ctx->pc = 0x16b2fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16b300: 0x31c00
    ctx->pc = 0x16b300u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b304: 0x42200
    ctx->pc = 0x16b304u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16b308: 0x451025
    ctx->pc = 0x16b308u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b30c: 0x641825
    ctx->pc = 0x16b30cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b310: 0x431025
    ctx->pc = 0x16b310u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b314: 0x54400004
    ctx->pc = 0x16B314u;
    {
        const bool branch_taken_0x16b314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b314) {
            ctx->pc = 0x16B318u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
            ctx->pc = 0x16B328u;
            goto label_16b328;
        }
    }
    ctx->pc = 0x16B31Cu;
    // 0x16b31c: 0x24c60008
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x16b320: 0x10000026
    ctx->pc = 0x16B320u;
    {
        const bool branch_taken_0x16b320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B324u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x16b320) {
            ctx->pc = 0x16B3BCu;
            goto label_16b3bc;
        }
    }
    ctx->pc = 0x16B328u;
label_16b328:
    // 0x16b328: 0x26730001
    ctx->pc = 0x16b328u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x16b32c: 0xa4f2fff8
    ctx->pc = 0x16b32cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967288), (uint16_t)GPR_U32(ctx, 18));
    // 0x16b330: 0x25080008
    ctx->pc = 0x16b330u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x16b334: 0x90c50003
    ctx->pc = 0x16b334u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x16b338: 0x90c30002
    ctx->pc = 0x16b338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x16b33c: 0x90c40001
    ctx->pc = 0x16b33cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x16b340: 0x52e00
    ctx->pc = 0x16b340u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16b344: 0x90c20000
    ctx->pc = 0x16b344u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16b348: 0x31c00
    ctx->pc = 0x16b348u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b34c: 0x42200
    ctx->pc = 0x16b34cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16b350: 0x24c60010
    ctx->pc = 0x16b350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x16b354: 0x641825
    ctx->pc = 0x16b354u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b358: 0x451025
    ctx->pc = 0x16b358u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b35c: 0x431025
    ctx->pc = 0x16b35cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b360: 0x244407ff
    ctx->pc = 0x16b360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x16b364: 0x124182a
    ctx->pc = 0x16b364u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 4)));
    // 0x16b368: 0x24420ffe
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x16b36c: 0x83100b
    ctx->pc = 0x16b36cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x16b370: 0x212c3
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16b374: 0xace2fffc
    ctx->pc = 0x16b374u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), GPR_U32(ctx, 2));
    // 0x16b378: 0x90c50003
    ctx->pc = 0x16b378u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x16b37c: 0x90c30002
    ctx->pc = 0x16b37cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x16b380: 0x90c40001
    ctx->pc = 0x16b380u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x16b384: 0x52e00
    ctx->pc = 0x16b384u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x16b388: 0x90c20000
    ctx->pc = 0x16b388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16b38c: 0x31c00
    ctx->pc = 0x16b38cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x16b390: 0x42200
    ctx->pc = 0x16b390u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16b394: 0x24c60010
    ctx->pc = 0x16b394u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x16b398: 0x641825
    ctx->pc = 0x16b398u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b39c: 0x451025
    ctx->pc = 0x16b39cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16b3a0: 0x431025
    ctx->pc = 0x16b3a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b3a4: 0x244407ff
    ctx->pc = 0x16b3a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x16b3a8: 0x24420ffe
    ctx->pc = 0x16b3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x16b3ac: 0x124182a
    ctx->pc = 0x16b3acu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 4)));
    // 0x16b3b0: 0x83100b
    ctx->pc = 0x16b3b0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x16b3b4: 0x212c3
    ctx->pc = 0x16b3b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x16b3b8: 0xa4e2fffa
    ctx->pc = 0x16b3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294967290), (uint16_t)GPR_U32(ctx, 2));
label_16b3bc:
    // 0x16b3bc: 0x8e220008
    ctx->pc = 0x16b3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16b3c0: 0x26520001
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x16b3c4: 0x242102a
    ctx->pc = 0x16b3c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x16b3c8: 0x1040ff84
    ctx->pc = 0x16B3C8u;
    {
        const bool branch_taken_0x16b3c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B3CCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 512));
        if (branch_taken_0x16b3c8) {
            ctx->pc = 0x16B1DCu;
            goto label_16b1dc;
        }
    }
    ctx->pc = 0x16B3D0u;
    // 0x16b3d0: 0x5440ffc7
    ctx->pc = 0x16B3D0u;
    {
        const bool branch_taken_0x16b3d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b3d0) {
            ctx->pc = 0x16B3D4u;
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
            ctx->pc = 0x16B2F0u;
            goto label_16b2f0;
        }
    }
    ctx->pc = 0x16B3D8u;
label_16b3d8:
    // 0x16b3d8: 0x802d
    ctx->pc = 0x16b3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b3dc:
    // 0x16b3dc: 0x2a020003
    ctx->pc = 0x16b3dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
    // 0x16b3e0: 0x1440ff9d
    ctx->pc = 0x16B3E0u;
    {
        const bool branch_taken_0x16b3e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B3E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
        if (branch_taken_0x16b3e0) {
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B3E8u;
    // 0x16b3e8: 0x24020003
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b3ec: 0x56020005
    ctx->pc = 0x16B3ECu;
    {
        const bool branch_taken_0x16b3ec = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x16b3ec) {
            ctx->pc = 0x16B3F0u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x16B404u;
            goto label_16b404;
        }
    }
    ctx->pc = 0x16B3F4u;
    // 0x16b3f4: 0x3c04002c
    ctx->pc = 0x16b3f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16b3f8: 0xc05a854
    ctx->pc = 0x16B3F8u;
    SET_GPR_U32(ctx, 31, 0x16B400u);
    ctx->pc = 0x16B3FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939568));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B400u; }
        else if (ctx->pc != 0x16B400u) { ctx->pc = 0x16B400u; }
    }
    if (ctx->pc != 0x16B400u) { return; }
    ctx->pc = 0x16B400u;
label_16b400:
    // 0x16b400: 0x8e250000
    ctx->pc = 0x16b400u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16b404:
    // 0x16b404: 0x2c0202d
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b408: 0xa633000c
    ctx->pc = 0x16b408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x16b40c: 0x8ca20004
    ctx->pc = 0x16b40cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16b410: 0x3263ffff
    ctx->pc = 0x16b410u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 65535));
    // 0x16b414: 0x318c0
    ctx->pc = 0x16b414u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x16b418: 0x24420114
    ctx->pc = 0x16b418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 276));
    // 0x16b41c: 0x431021
    ctx->pc = 0x16b41cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b420: 0xc05ae0c
    ctx->pc = 0x16B420u;
    SET_GPR_U32(ctx, 31, 0x16B428u);
    ctx->pc = 0x16B424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B428u; }
        else if (ctx->pc != 0x16B428u) { ctx->pc = 0x16B428u; }
    }
    if (ctx->pc != 0x16B428u) { return; }
    ctx->pc = 0x16B428u;
    // 0x16b428: 0x280102d
    ctx->pc = 0x16b428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16b42c:
    // 0x16b42c: 0xdfbf0090
    ctx->pc = 0x16b42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b430: 0xdfbe0080
    ctx->pc = 0x16b430u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b434: 0xdfb70070
    ctx->pc = 0x16b434u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b438: 0xdfb60060
    ctx->pc = 0x16b438u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b43c: 0xdfb50050
    ctx->pc = 0x16b43cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b440: 0xdfb40040
    ctx->pc = 0x16b440u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b444: 0xdfb30030
    ctx->pc = 0x16b444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b448: 0xdfb20020
    ctx->pc = 0x16b448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b44c: 0xdfb10010
    ctx->pc = 0x16b44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b450: 0xdfb00000
    ctx->pc = 0x16b450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b454: 0x3e00008
    ctx->pc = 0x16B454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B1C0u: goto label_16b1c0;
            case 0x16B1DCu: goto label_16b1dc;
            case 0x16B1E4u: goto label_16b1e4;
            case 0x16B258u: goto label_16b258;
            case 0x16B2C8u: goto label_16b2c8;
            case 0x16B2F0u: goto label_16b2f0;
            case 0x16B328u: goto label_16b328;
            case 0x16B3BCu: goto label_16b3bc;
            case 0x16B3D8u: goto label_16b3d8;
            case 0x16B3DCu: goto label_16b3dc;
            case 0x16B400u: goto label_16b400;
            case 0x16B404u: goto label_16b404;
            case 0x16B42Cu: goto label_16b42c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B45Cu;
}
