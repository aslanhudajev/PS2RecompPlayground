#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLoadPalettes
// Address: 0x2ae1b8 - 0x2ae578
void pbLoadPalettes_0x2ae1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae1b8u;

    // 0x2ae1b8: 0x27bdff70
    ctx->pc = 0x2ae1b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ae1bc: 0xffbf0080
    ctx->pc = 0x2ae1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ae1c0: 0xffb10070
    ctx->pc = 0x2ae1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2ae1c4: 0xc0b4f86
    ctx->pc = 0x2AE1C4u;
    SET_GPR_U32(ctx, 31, 0x2AE1CCu);
    ctx->pc = 0x2AE1C8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->pc = 0x2D3E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMemBase_0x2d3e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE1CCu; }
    }
    if (ctx->pc != 0x2AE1CCu) { return; }
    ctx->pc = 0x2AE1CCu;
    // 0x2ae1cc: 0x40882d
    ctx->pc = 0x2ae1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1d0: 0x482d
    ctx->pc = 0x2ae1d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1d4: 0x3c0b00ff
    ctx->pc = 0x2ae1d4u;
    SET_GPR_U32(ctx, 11, ((uint32_t)255 << 16));
    // 0x2ae1d8: 0x356bffff
    ctx->pc = 0x2ae1d8u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 65535));
    // 0x2ae1dc: 0x94140
    ctx->pc = 0x2ae1dcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 5));
label_2ae1e0:
    // 0x2ae1e0: 0x93980
    ctx->pc = 0x2ae1e0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae1e4: 0x302d
    ctx->pc = 0x2ae1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1e8: 0xe61021
    ctx->pc = 0x2ae1e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ae1ec: 0x0
    ctx->pc = 0x2ae1ecu;
    // NOP
label_2ae1f0:
    // 0x2ae1f0: 0x21080
    ctx->pc = 0x2ae1f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ae1f4: 0x511021
    ctx->pc = 0x2ae1f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ae1f8: 0x1061821
    ctx->pc = 0x2ae1f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2ae1fc: 0x31e00
    ctx->pc = 0x2ae1fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ae200: 0x6b1825
    ctx->pc = 0x2ae200u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2ae204: 0xac430000
    ctx->pc = 0x2ae204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ae208: 0x24c60001
    ctx->pc = 0x2ae208u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae20c: 0x28c20008
    ctx->pc = 0x2ae20cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae210: 0x1440fff7
    ctx->pc = 0x2AE210u;
    {
        const bool branch_taken_0x2ae210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE214u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ae210) {
            ctx->pc = 0x2AE1F0u;
            goto label_2ae1f0;
        }
    }
    ctx->pc = 0x2AE218u;
    // 0x2ae218: 0x91180
    ctx->pc = 0x2ae218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae21c: 0x24470008
    ctx->pc = 0x2ae21cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ae220: 0x302d
    ctx->pc = 0x2ae220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae224: 0x3c0400ff
    ctx->pc = 0x2ae224u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2ae228: 0x3484ffff
    ctx->pc = 0x2ae228u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ae22c: 0xe61021
    ctx->pc = 0x2ae22cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2ae230:
    // 0x2ae230: 0x21080
    ctx->pc = 0x2ae230u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ae234: 0x511021
    ctx->pc = 0x2ae234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ae238: 0x24c30010
    ctx->pc = 0x2ae238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 16));
    // 0x2ae23c: 0x1031821
    ctx->pc = 0x2ae23cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ae240: 0x31e00
    ctx->pc = 0x2ae240u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ae244: 0x641825
    ctx->pc = 0x2ae244u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae248: 0xac430000
    ctx->pc = 0x2ae248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ae24c: 0x24c60001
    ctx->pc = 0x2ae24cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae250: 0x28c20008
    ctx->pc = 0x2ae250u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae254: 0x1440fff6
    ctx->pc = 0x2AE254u;
    {
        const bool branch_taken_0x2ae254 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE258u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ae254) {
            ctx->pc = 0x2AE230u;
            goto label_2ae230;
        }
    }
    ctx->pc = 0x2AE25Cu;
    // 0x2ae25c: 0x91180
    ctx->pc = 0x2ae25cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae260: 0x34470020
    ctx->pc = 0x2ae260u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 32));
    // 0x2ae264: 0x302d
    ctx->pc = 0x2ae264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae268: 0x3c0400ff
    ctx->pc = 0x2ae268u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2ae26c: 0x3484ffff
    ctx->pc = 0x2ae26cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ae270: 0xe61021
    ctx->pc = 0x2ae270u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ae274: 0x0
    ctx->pc = 0x2ae274u;
    // NOP
label_2ae278:
    // 0x2ae278: 0x21080
    ctx->pc = 0x2ae278u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ae27c: 0x511021
    ctx->pc = 0x2ae27cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ae280: 0x24c30008
    ctx->pc = 0x2ae280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 8));
    // 0x2ae284: 0x1031821
    ctx->pc = 0x2ae284u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ae288: 0x31e00
    ctx->pc = 0x2ae288u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ae28c: 0x641825
    ctx->pc = 0x2ae28cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae290: 0xac430000
    ctx->pc = 0x2ae290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ae294: 0x24c60001
    ctx->pc = 0x2ae294u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae298: 0x28c20008
    ctx->pc = 0x2ae298u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae29c: 0x1440fff6
    ctx->pc = 0x2AE29Cu;
    {
        const bool branch_taken_0x2ae29c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE2A0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ae29c) {
            ctx->pc = 0x2AE278u;
            goto label_2ae278;
        }
    }
    ctx->pc = 0x2AE2A4u;
    // 0x2ae2a4: 0x91180
    ctx->pc = 0x2ae2a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae2a8: 0x34470028
    ctx->pc = 0x2ae2a8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 40));
    // 0x2ae2ac: 0x302d
    ctx->pc = 0x2ae2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2b0: 0x3c0400ff
    ctx->pc = 0x2ae2b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2ae2b4: 0x3484ffff
    ctx->pc = 0x2ae2b4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2ae2b8: 0xe61021
    ctx->pc = 0x2ae2b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ae2bc: 0x0
    ctx->pc = 0x2ae2bcu;
    // NOP
label_2ae2c0:
    // 0x2ae2c0: 0x21080
    ctx->pc = 0x2ae2c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ae2c4: 0x511021
    ctx->pc = 0x2ae2c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ae2c8: 0x24c30018
    ctx->pc = 0x2ae2c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 24));
    // 0x2ae2cc: 0x1031821
    ctx->pc = 0x2ae2ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ae2d0: 0x31e00
    ctx->pc = 0x2ae2d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ae2d4: 0x641825
    ctx->pc = 0x2ae2d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae2d8: 0xac430000
    ctx->pc = 0x2ae2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ae2dc: 0x24c60001
    ctx->pc = 0x2ae2dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae2e0: 0x28c20008
    ctx->pc = 0x2ae2e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae2e4: 0x1440fff6
    ctx->pc = 0x2AE2E4u;
    {
        const bool branch_taken_0x2ae2e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE2E8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ae2e4) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE2ECu;
    // 0x2ae2ec: 0x91180
    ctx->pc = 0x2ae2ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae2f0: 0x24470010
    ctx->pc = 0x2ae2f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 16));
    // 0x2ae2f4: 0x94140
    ctx->pc = 0x2ae2f4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 5));
    // 0x2ae2f8: 0x302d
    ctx->pc = 0x2ae2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2fc: 0x3c0a8000
    ctx->pc = 0x2ae2fcu;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
    // 0x2ae300: 0x1062821
    ctx->pc = 0x2ae300u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2ae304: 0x0
    ctx->pc = 0x2ae304u;
    // NOP
label_2ae308:
    // 0x2ae308: 0xe62021
    ctx->pc = 0x2ae308u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ae30c: 0x42080
    ctx->pc = 0x2ae30cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae310: 0x912021
    ctx->pc = 0x2ae310u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ae314: 0x51400
    ctx->pc = 0x2ae314u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ae318: 0x51a00
    ctx->pc = 0x2ae318u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ae31c: 0x431025
    ctx->pc = 0x2ae31cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae320: 0x451025
    ctx->pc = 0x2ae320u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae324: 0x4a1025
    ctx->pc = 0x2ae324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ae328: 0xac820000
    ctx->pc = 0x2ae328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ae32c: 0x24c60001
    ctx->pc = 0x2ae32cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae330: 0x28c20008
    ctx->pc = 0x2ae330u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae334: 0x1440fff4
    ctx->pc = 0x2AE334u;
    {
        const bool branch_taken_0x2ae334 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE338u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        if (branch_taken_0x2ae334) {
            ctx->pc = 0x2AE308u;
            goto label_2ae308;
        }
    }
    ctx->pc = 0x2AE33Cu;
    // 0x2ae33c: 0x91180
    ctx->pc = 0x2ae33cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae340: 0x24470018
    ctx->pc = 0x2ae340u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 24));
    // 0x2ae344: 0x302d
    ctx->pc = 0x2ae344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae348: 0x3c0a8000
    ctx->pc = 0x2ae348u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
    // 0x2ae34c: 0x24c20010
    ctx->pc = 0x2ae34cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 16));
label_2ae350:
    // 0x2ae350: 0x1022821
    ctx->pc = 0x2ae350u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ae354: 0xe62021
    ctx->pc = 0x2ae354u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ae358: 0x42080
    ctx->pc = 0x2ae358u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae35c: 0x912021
    ctx->pc = 0x2ae35cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ae360: 0x51400
    ctx->pc = 0x2ae360u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ae364: 0x51a00
    ctx->pc = 0x2ae364u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ae368: 0x431025
    ctx->pc = 0x2ae368u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae36c: 0x451025
    ctx->pc = 0x2ae36cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae370: 0x4a1025
    ctx->pc = 0x2ae370u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ae374: 0xac820000
    ctx->pc = 0x2ae374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ae378: 0x24c60001
    ctx->pc = 0x2ae378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae37c: 0x28c20008
    ctx->pc = 0x2ae37cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae380: 0x1440fff3
    ctx->pc = 0x2AE380u;
    {
        const bool branch_taken_0x2ae380 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE384u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x2ae380) {
            ctx->pc = 0x2AE350u;
            goto label_2ae350;
        }
    }
    ctx->pc = 0x2AE388u;
    // 0x2ae388: 0x93980
    ctx->pc = 0x2ae388u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae38c: 0x34e70030
    ctx->pc = 0x2ae38cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 48));
    // 0x2ae390: 0x302d
    ctx->pc = 0x2ae390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae394: 0x3c0a8000
    ctx->pc = 0x2ae394u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
    // 0x2ae398: 0x24c20008
    ctx->pc = 0x2ae398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 8));
    // 0x2ae39c: 0x0
    ctx->pc = 0x2ae39cu;
    // NOP
label_2ae3a0:
    // 0x2ae3a0: 0x1022821
    ctx->pc = 0x2ae3a0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ae3a4: 0xe62021
    ctx->pc = 0x2ae3a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ae3a8: 0x42080
    ctx->pc = 0x2ae3a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae3ac: 0x912021
    ctx->pc = 0x2ae3acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ae3b0: 0x51400
    ctx->pc = 0x2ae3b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ae3b4: 0x51a00
    ctx->pc = 0x2ae3b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ae3b8: 0x431025
    ctx->pc = 0x2ae3b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae3bc: 0x451025
    ctx->pc = 0x2ae3bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae3c0: 0x4a1025
    ctx->pc = 0x2ae3c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ae3c4: 0xac820000
    ctx->pc = 0x2ae3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ae3c8: 0x24c60001
    ctx->pc = 0x2ae3c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae3cc: 0x28c20008
    ctx->pc = 0x2ae3ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae3d0: 0x1440fff3
    ctx->pc = 0x2AE3D0u;
    {
        const bool branch_taken_0x2ae3d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE3D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x2ae3d0) {
            ctx->pc = 0x2AE3A0u;
            goto label_2ae3a0;
        }
    }
    ctx->pc = 0x2AE3D8u;
    // 0x2ae3d8: 0x93980
    ctx->pc = 0x2ae3d8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae3dc: 0x34e70038
    ctx->pc = 0x2ae3dcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 56));
    // 0x2ae3e0: 0x302d
    ctx->pc = 0x2ae3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3e4: 0x3c0a8000
    ctx->pc = 0x2ae3e4u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
    // 0x2ae3e8: 0x24c20018
    ctx->pc = 0x2ae3e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 24));
    // 0x2ae3ec: 0x0
    ctx->pc = 0x2ae3ecu;
    // NOP
label_2ae3f0:
    // 0x2ae3f0: 0x1022821
    ctx->pc = 0x2ae3f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ae3f4: 0xe62021
    ctx->pc = 0x2ae3f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2ae3f8: 0x42080
    ctx->pc = 0x2ae3f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae3fc: 0x912021
    ctx->pc = 0x2ae3fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ae400: 0x51400
    ctx->pc = 0x2ae400u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ae404: 0x51a00
    ctx->pc = 0x2ae404u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ae408: 0x431025
    ctx->pc = 0x2ae408u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae40c: 0x451025
    ctx->pc = 0x2ae40cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae410: 0x4a1025
    ctx->pc = 0x2ae410u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ae414: 0xac820000
    ctx->pc = 0x2ae414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ae418: 0x24c60001
    ctx->pc = 0x2ae418u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae41c: 0x28c20008
    ctx->pc = 0x2ae41cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae420: 0x1440fff3
    ctx->pc = 0x2AE420u;
    {
        const bool branch_taken_0x2ae420 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE424u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 24));
        if (branch_taken_0x2ae420) {
            ctx->pc = 0x2AE3F0u;
            goto label_2ae3f0;
        }
    }
    ctx->pc = 0x2AE428u;
    // 0x2ae428: 0x25290001
    ctx->pc = 0x2ae428u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ae42c: 0x29220008
    ctx->pc = 0x2ae42cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 8));
    // 0x2ae430: 0x1440ff6b
    ctx->pc = 0x2AE430u;
    {
        const bool branch_taken_0x2ae430 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE434u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 5));
        if (branch_taken_0x2ae430) {
            ctx->pc = 0x2AE1E0u;
            goto label_2ae1e0;
        }
    }
    ctx->pc = 0x2AE438u;
    // 0x2ae438: 0x482d
    ctx->pc = 0x2ae438u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae43c: 0x3c0b00ff
    ctx->pc = 0x2ae43cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)255 << 16));
    // 0x2ae440: 0x356bffff
    ctx->pc = 0x2ae440u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 65535));
    // 0x2ae444: 0x91140
    ctx->pc = 0x2ae444u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 5));
label_2ae448:
    // 0x2ae448: 0x24470200
    ctx->pc = 0x2ae448u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 512));
    // 0x2ae44c: 0x94180
    ctx->pc = 0x2ae44cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae450: 0x302d
    ctx->pc = 0x2ae450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae454: 0x0
    ctx->pc = 0x2ae454u;
    // NOP
label_2ae458:
    // 0x2ae458: 0x71080
    ctx->pc = 0x2ae458u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ae45c: 0x511021
    ctx->pc = 0x2ae45cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ae460: 0x618c0
    ctx->pc = 0x2ae460u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 3));
    // 0x2ae464: 0x1031821
    ctx->pc = 0x2ae464u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2ae468: 0x31e00
    ctx->pc = 0x2ae468u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ae46c: 0x6b1825
    ctx->pc = 0x2ae46cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2ae470: 0xac430000
    ctx->pc = 0x2ae470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ae474: 0x24c60001
    ctx->pc = 0x2ae474u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae478: 0x28c20008
    ctx->pc = 0x2ae478u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae47c: 0x1440fff6
    ctx->pc = 0x2AE47Cu;
    {
        const bool branch_taken_0x2ae47c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE480u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x2ae47c) {
            ctx->pc = 0x2AE458u;
            goto label_2ae458;
        }
    }
    ctx->pc = 0x2AE484u;
    // 0x2ae484: 0x91140
    ctx->pc = 0x2ae484u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 5));
    // 0x2ae488: 0x24470208
    ctx->pc = 0x2ae488u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 520));
    // 0x2ae48c: 0x94180
    ctx->pc = 0x2ae48cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 6));
    // 0x2ae490: 0x302d
    ctx->pc = 0x2ae490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae494: 0x3c0a8000
    ctx->pc = 0x2ae494u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
label_2ae498:
    // 0x2ae498: 0x61100
    ctx->pc = 0x2ae498u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
    // 0x2ae49c: 0x1022821
    ctx->pc = 0x2ae49cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2ae4a0: 0x72080
    ctx->pc = 0x2ae4a0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ae4a4: 0x912021
    ctx->pc = 0x2ae4a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ae4a8: 0x51400
    ctx->pc = 0x2ae4a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ae4ac: 0x51a00
    ctx->pc = 0x2ae4acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 8));
    // 0x2ae4b0: 0x431025
    ctx->pc = 0x2ae4b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae4b4: 0x451025
    ctx->pc = 0x2ae4b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae4b8: 0x4a1025
    ctx->pc = 0x2ae4b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ae4bc: 0xac820000
    ctx->pc = 0x2ae4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ae4c0: 0x24c60001
    ctx->pc = 0x2ae4c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ae4c4: 0x28c20008
    ctx->pc = 0x2ae4c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 8));
    // 0x2ae4c8: 0x1440fff3
    ctx->pc = 0x2AE4C8u;
    {
        const bool branch_taken_0x2ae4c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE4CCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x2ae4c8) {
            ctx->pc = 0x2AE498u;
            goto label_2ae498;
        }
    }
    ctx->pc = 0x2AE4D0u;
    // 0x2ae4d0: 0x25290001
    ctx->pc = 0x2ae4d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x2ae4d4: 0x29220002
    ctx->pc = 0x2ae4d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 2));
    // 0x2ae4d8: 0x1440ffdb
    ctx->pc = 0x2AE4D8u;
    {
        const bool branch_taken_0x2ae4d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE4DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 5));
        if (branch_taken_0x2ae4d8) {
            ctx->pc = 0x2AE448u;
            goto label_2ae448;
        }
    }
    ctx->pc = 0x2AE4E0u;
    // 0x2ae4e0: 0x3c027fff
    ctx->pc = 0x2ae4e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x2ae4e4: 0x3442ffff
    ctx->pc = 0x2ae4e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ae4e8: 0xae22098c
    ctx->pc = 0x2ae4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2444), GPR_U32(ctx, 2));
    // 0x2ae4ec: 0x3c0280ff
    ctx->pc = 0x2ae4ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33023 << 16));
    // 0x2ae4f0: 0x3442ffff
    ctx->pc = 0x2ae4f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ae4f4: 0xae22099c
    ctx->pc = 0x2ae4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2460), GPR_U32(ctx, 2));
    // 0x2ae4f8: 0x3c100037
    ctx->pc = 0x2ae4f8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2ae4fc: 0x3a0202d
    ctx->pc = 0x2ae4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae500: 0x86058a68
    ctx->pc = 0x2ae500u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294937192)));
    // 0x2ae504: 0x24060001
    ctx->pc = 0x2ae504u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae508: 0x382d
    ctx->pc = 0x2ae508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae50c: 0x402d
    ctx->pc = 0x2ae50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae510: 0x482d
    ctx->pc = 0x2ae510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae514: 0x240a0020
    ctx->pc = 0x2ae514u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ae518: 0xc0b83fe
    ctx->pc = 0x2AE518u;
    SET_GPR_U32(ctx, 31, 0x2AE520u);
    ctx->pc = 0x2AE51Cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2E0FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x2e0ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE520u; }
    }
    if (ctx->pc != 0x2AE520u) { return; }
    ctx->pc = 0x2AE520u;
    // 0x2ae520: 0xc0c0e18
    ctx->pc = 0x2AE520u;
    SET_GPR_U32(ctx, 31, 0x2AE528u);
    ctx->pc = 0x2AE524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE528u; }
    }
    if (ctx->pc != 0x2AE528u) { return; }
    ctx->pc = 0x2AE528u;
    // 0x2ae528: 0x3a0202d
    ctx->pc = 0x2ae528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae52c: 0xc0b8478
    ctx->pc = 0x2AE52Cu;
    SET_GPR_U32(ctx, 31, 0x2AE534u);
    ctx->pc = 0x2AE530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E11E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecLoadImage_0x2e11e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE534u; }
    }
    if (ctx->pc != 0x2AE534u) { return; }
    ctx->pc = 0x2AE534u;
    // 0x2ae534: 0x3c020037
    ctx->pc = 0x2ae534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae538: 0x8e038a68
    ctx->pc = 0x2ae538u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294937192)));
    // 0x2ae53c: 0xac438a70
    ctx->pc = 0x2ae53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937200), GPR_U32(ctx, 3));
    // 0x2ae540: 0x3c040037
    ctx->pc = 0x2ae540u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2ae544: 0x24620004
    ctx->pc = 0x2ae544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ae548: 0xac828a74
    ctx->pc = 0x2ae548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294937204), GPR_U32(ctx, 2));
    // 0x2ae54c: 0x3c040037
    ctx->pc = 0x2ae54cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2ae550: 0x24620008
    ctx->pc = 0x2ae550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 8));
    // 0x2ae554: 0xac828a78
    ctx->pc = 0x2ae554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294937208), GPR_U32(ctx, 2));
    // 0x2ae558: 0x3c020037
    ctx->pc = 0x2ae558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae55c: 0x24630009
    ctx->pc = 0x2ae55cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9));
    // 0x2ae560: 0xac438a7c
    ctx->pc = 0x2ae560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937212), GPR_U32(ctx, 3));
    // 0x2ae564: 0xdfbf0080
    ctx->pc = 0x2ae564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae568: 0xdfb10070
    ctx->pc = 0x2ae568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae56c: 0xdfb00060
    ctx->pc = 0x2ae56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae570: 0x3e00008
    ctx->pc = 0x2AE570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE1E0u: goto label_2ae1e0;
            case 0x2AE1F0u: goto label_2ae1f0;
            case 0x2AE230u: goto label_2ae230;
            case 0x2AE278u: goto label_2ae278;
            case 0x2AE2C0u: goto label_2ae2c0;
            case 0x2AE308u: goto label_2ae308;
            case 0x2AE350u: goto label_2ae350;
            case 0x2AE3A0u: goto label_2ae3a0;
            case 0x2AE3F0u: goto label_2ae3f0;
            case 0x2AE448u: goto label_2ae448;
            case 0x2AE458u: goto label_2ae458;
            case 0x2AE498u: goto label_2ae498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AE578u;
}
