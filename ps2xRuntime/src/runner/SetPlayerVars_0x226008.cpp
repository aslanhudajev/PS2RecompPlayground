#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetPlayerVars
// Address: 0x226008 - 0x226124
void SetPlayerVars_0x226008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226008u;

    // 0x226008: 0x202d
    ctx->pc = 0x226008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22600c: 0x282d
    ctx->pc = 0x22600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226010: 0x302d
    ctx->pc = 0x226010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226014: 0x3c020032
    ctx->pc = 0x226014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226018: 0xac4007f8
    ctx->pc = 0x226018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2040), GPR_U32(ctx, 0));
    // 0x22601c: 0x3c030032
    ctx->pc = 0x22601cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226020: 0x3c020032
    ctx->pc = 0x226020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226024: 0xc44007fc
    ctx->pc = 0x226024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226028: 0xe4600824
    ctx->pc = 0x226028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2084), bits); }
    // 0x22602c: 0x3c013f80
    ctx->pc = 0x22602cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x226030: 0x44810000
    ctx->pc = 0x226030u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x226034: 0xe44007fc
    ctx->pc = 0x226034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2044), bits); }
    // 0x226038: 0x3c020032
    ctx->pc = 0x226038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22603c: 0xac4007f4
    ctx->pc = 0x22603cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2036), GPR_U32(ctx, 0));
    // 0x226040: 0x402d
    ctx->pc = 0x226040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226044: 0x3c020032
    ctx->pc = 0x226044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226048: 0x24581bc0
    ctx->pc = 0x226048u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x22604c: 0x24092b00
    ctx->pc = 0x22604cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x226050: 0x240a0001
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x226054: 0x240f0005
    ctx->pc = 0x226054u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 5));
    // 0x226058: 0x3c0c0032
    ctx->pc = 0x226058u;
    SET_GPR_U32(ctx, 12, ((uint32_t)50 << 16));
    // 0x22605c: 0x3c0e0032
    ctx->pc = 0x22605cu;
    SET_GPR_U32(ctx, 14, ((uint32_t)50 << 16));
    // 0x226060: 0x3c020036
    ctx->pc = 0x226060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x226064: 0x8c4dd934
    ctx->pc = 0x226064u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x226068: 0x3c0b0032
    ctx->pc = 0x226068u;
    SET_GPR_U32(ctx, 11, ((uint32_t)50 << 16));
    // 0x22606c: 0x3c013f2a
    ctx->pc = 0x22606cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x226070: 0x3421c083
    ctx->pc = 0x226070u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x226074: 0x44810800
    ctx->pc = 0x226074u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x226078: 0x1091818
    ctx->pc = 0x226078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22607c: 0x0
    ctx->pc = 0x22607cu;
    // NOP
label_226080:
    // 0x226080: 0x781021
    ctx->pc = 0x226080u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x226084: 0x8c4700fc
    ctx->pc = 0x226084u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x226088: 0x10e00005
    ctx->pc = 0x226088u;
    {
        const bool branch_taken_0x226088 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x22608Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967294));
        if (branch_taken_0x226088) {
            ctx->pc = 0x2260A0u;
            goto label_2260a0;
        }
    }
    ctx->pc = 0x226090u;
    // 0x226090: 0x24840001
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x226094: 0x2c420002
    ctx->pc = 0x226094u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x226098: 0x24a30001
    ctx->pc = 0x226098u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x22609c: 0x62280a
    ctx->pc = 0x22609cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2260a0:
    // 0x2260a0: 0x10ea0003
    ctx->pc = 0x2260A0u;
    {
        const bool branch_taken_0x2260a0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 10));
        ctx->pc = 0x2260A4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 8) & 0x1F));
        if (branch_taken_0x2260a0) {
            ctx->pc = 0x2260B0u;
            goto label_2260b0;
        }
    }
    ctx->pc = 0x2260A8u;
    // 0x2260a8: 0x14ef0005
    ctx->pc = 0x2260A8u;
    {
        const bool branch_taken_0x2260a8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 15));
        if (branch_taken_0x2260a8) {
            ctx->pc = 0x2260C0u;
            goto label_2260c0;
        }
    }
    ctx->pc = 0x2260B0u;
label_2260b0:
    // 0x2260b0: 0x8d8307f4
    ctx->pc = 0x2260b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 2036)));
    // 0x2260b4: 0x431025
    ctx->pc = 0x2260b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2260b8: 0xad8207f4
    ctx->pc = 0x2260b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 2036), GPR_U32(ctx, 2));
    // 0x2260bc: 0x24c60001
    ctx->pc = 0x2260bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_2260c0:
    // 0x2260c0: 0x14ea0010
    ctx->pc = 0x2260C0u;
    {
        const bool branch_taken_0x2260c0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 10));
        ctx->pc = 0x2260C4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2260c0) {
            ctx->pc = 0x226104u;
            goto label_226104;
        }
    }
    ctx->pc = 0x2260C8u;
    // 0x2260c8: 0x781021
    ctx->pc = 0x2260c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2260cc: 0x8c420138
    ctx->pc = 0x2260ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2260d0: 0x30420008
    ctx->pc = 0x2260d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x2260d4: 0x54400001
    ctx->pc = 0x2260D4u;
    {
        const bool branch_taken_0x2260d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2260d4) {
            ctx->pc = 0x2260D8u;
            WRITE32(ADD32(GPR_U32(ctx, 14), 2040), GPR_U32(ctx, 7));
            ctx->pc = 0x2260DCu;
            goto label_2260dc;
        }
    }
    ctx->pc = 0x2260DCu;
label_2260dc:
    // 0x2260dc: 0x5a10009
    ctx->pc = 0x2260DCu;
    {
        const bool branch_taken_0x2260dc = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x2260E0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2260dc) {
            ctx->pc = 0x226104u;
            goto label_226104;
        }
    }
    ctx->pc = 0x2260E4u;
    // 0x2260e4: 0x781021
    ctx->pc = 0x2260e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2260e8: 0x8c420138
    ctx->pc = 0x2260e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2260ec: 0x30420200
    ctx->pc = 0x2260ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2260f0: 0x10400004
    ctx->pc = 0x2260F0u;
    {
        const bool branch_taken_0x2260f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2260F4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2260f0) {
            ctx->pc = 0x226104u;
            goto label_226104;
        }
    }
    ctx->pc = 0x2260F8u;
    // 0x2260f8: 0x46010002
    ctx->pc = 0x2260f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2260fc: 0xe56007fc
    ctx->pc = 0x2260fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 2044), bits); }
    // 0x226100: 0x1091818
    ctx->pc = 0x226100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_226104:
    // 0x226104: 0x781021
    ctx->pc = 0x226104u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x226108: 0xa440093e
    ctx->pc = 0x226108u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2366), (uint16_t)GPR_U32(ctx, 0));
    // 0x22610c: 0x25080001
    ctx->pc = 0x22610cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x226110: 0x29020004
    ctx->pc = 0x226110u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 4));
    // 0x226114: 0x1440ffda
    ctx->pc = 0x226114u;
    {
        const bool branch_taken_0x226114 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226118u;
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x226114) {
            ctx->pc = 0x226080u;
            goto label_226080;
        }
    }
    ctx->pc = 0x22611Cu;
    // 0x22611c: 0x8080d88
    ctx->pc = 0x22611Cu;
    ctx->pc = 0x203620u;
    SetNumPlayers_0x203620(rdram, ctx, runtime); return;
    ctx->pc = 0x226124u;
}
