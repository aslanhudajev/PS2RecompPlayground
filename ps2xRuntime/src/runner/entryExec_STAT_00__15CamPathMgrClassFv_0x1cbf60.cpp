#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_00__15CamPathMgrClassFv
// Address: 0x1cbf60 - 0x1cc158
void entryExec_STAT_00__15CamPathMgrClassFv_0x1cbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_00__15CamPathMgrClassFv");


    ctx->pc = 0x1cbf60u;

    // 0x1cbf60: 0x27bdffd0
    ctx->pc = 0x1cbf60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbf64: 0x7fbf0020
    ctx->pc = 0x1cbf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1cbf68: 0x7fb10010
    ctx->pc = 0x1cbf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cbf6c: 0x7fb00000
    ctx->pc = 0x1cbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cbf70: 0x8c850000
    ctx->pc = 0x1cbf70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbf74: 0x70808e28
    ctx->pc = 0x1cbf74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cbf78: 0x3c020030
    ctx->pc = 0x1cbf78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cbf7c: 0x3c036000
    ctx->pc = 0x1cbf7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)24576 << 16));
    // 0x1cbf80: 0x8ca90008
    ctx->pc = 0x1cbf80u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cbf84: 0x24446580
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25984));
    // 0x1cbf88: 0x3c024000
    ctx->pc = 0x1cbf88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1cbf8c: 0x92900
    ctx->pc = 0x1cbf8cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 9), 4));
    // 0x1cbf90: 0x858021
    ctx->pc = 0x1cbf90u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cbf94: 0x8e040000
    ctx->pc = 0x1cbf94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cbf98: 0x831824
    ctx->pc = 0x1cbf98u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cbf9c: 0x10620069
    ctx->pc = 0x1CBF9Cu;
    {
        const bool branch_taken_0x1cbf9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CBFA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1cbf9c) {
            ctx->pc = 0x1CC144u;
            goto label_1cc144;
        }
    }
    ctx->pc = 0x1CBFA4u;
    // 0x1cbfa4: 0x3c082000
    ctx->pc = 0x1cbfa4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)8192 << 16));
    // 0x1cbfa8: 0x10680063
    ctx->pc = 0x1CBFA8u;
    {
        const bool branch_taken_0x1cbfa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        ctx->pc = 0x1CBFACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1cbfa8) {
            ctx->pc = 0x1CC138u;
            goto label_1cc138;
        }
    }
    ctx->pc = 0x1CBFB0u;
    // 0x1cbfb0: 0x10600003
    ctx->pc = 0x1CBFB0u;
    {
        const bool branch_taken_0x1cbfb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CBFB4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        if (branch_taken_0x1cbfb0) {
            ctx->pc = 0x1CBFC0u;
            goto label_1cbfc0;
        }
    }
    ctx->pc = 0x1CBFB8u;
    // 0x1cbfb8: 0x10000061
    ctx->pc = 0x1CBFB8u;
    {
        const bool branch_taken_0x1cbfb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cbfb8) {
            ctx->pc = 0x1CC140u;
            goto label_1cc140;
        }
    }
    ctx->pc = 0x1CBFC0u;
label_1cbfc0:
    // 0x1cbfc0: 0xae020000
    ctx->pc = 0x1cbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cbfc4: 0xae000004
    ctx->pc = 0x1cbfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbfc8: 0x3c010030
    ctx->pc = 0x1cbfc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cbfcc: 0x842766ac
    ctx->pc = 0x1cbfccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 26284)));
    // 0x1cbfd0: 0x3c020030
    ctx->pc = 0x1cbfd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cbfd4: 0x2446658e
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 25998));
    // 0x1cbfd8: 0x3c020030
    ctx->pc = 0x1cbfd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cbfdc: 0x244366b0
    ctx->pc = 0x1cbfdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 26288));
    // 0x1cbfe0: 0x24050012
    ctx->pc = 0x1cbfe0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cbfe4: 0x3c010030
    ctx->pc = 0x1cbfe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cbfe8: 0x71100
    ctx->pc = 0x1cbfe8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1cbfec: 0xa42966ac
    ctx->pc = 0x1cbfecu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26284), (uint16_t)GPR_U32(ctx, 9));
    // 0x1cbff0: 0xc21021
    ctx->pc = 0x1cbff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cbff4: 0xa4490000
    ctx->pc = 0x1cbff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1cbff8: 0xa607000c
    ctx->pc = 0x1cbff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x1cbffc: 0x92080
    ctx->pc = 0x1cbffcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1cc000: 0x3c0101fc
    ctx->pc = 0x1cc000u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1cc004: 0xa605000e
    ctx->pc = 0x1cc004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x1cc008: 0x810821
    ctx->pc = 0x1cc008u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1cc00c: 0x8c240590
    ctx->pc = 0x1cc00cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 1424)));
    // 0x1cc010: 0x3c010030
    ctx->pc = 0x1cc010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc014: 0x1000000a
    ctx->pc = 0x1CC014u;
    {
        const bool branch_taken_0x1cc014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC018u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 31848), GPR_U32(ctx, 0));
        if (branch_taken_0x1cc014) {
            ctx->pc = 0x1CC040u;
            goto label_1cc040;
        }
    }
    ctx->pc = 0x1CC01Cu;
label_1cc01c:
    // 0x1cc01c: 0x210c0
    ctx->pc = 0x1cc01cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc020: 0x621021
    ctx->pc = 0x1cc020u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc024: 0xac400004
    ctx->pc = 0x1cc024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1cc028: 0xac480000
    ctx->pc = 0x1cc028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1cc02c: 0x3c010030
    ctx->pc = 0x1cc02cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc030: 0x8c227c68
    ctx->pc = 0x1cc030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31848)));
    // 0x1cc034: 0x24420001
    ctx->pc = 0x1cc034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cc038: 0x3c010030
    ctx->pc = 0x1cc038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc03c: 0xac227c68
    ctx->pc = 0x1cc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31848), GPR_U32(ctx, 2));
label_1cc040:
    // 0x1cc040: 0x84820000
    ctx->pc = 0x1cc040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc044: 0x441fff5
    ctx->pc = 0x1CC044u;
    {
        const bool branch_taken_0x1cc044 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CC048u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1cc044) {
            ctx->pc = 0x1CC01Cu;
            goto label_1cc01c;
        }
    }
    ctx->pc = 0x1CC04Cu;
    // 0x1cc04c: 0x3c010030
    ctx->pc = 0x1cc04cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc050: 0xac207c70
    ctx->pc = 0x1cc050u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31856), GPR_U32(ctx, 0));
    // 0x1cc054: 0x3c010030
    ctx->pc = 0x1cc054u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc058: 0x8c227c70
    ctx->pc = 0x1cc058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31856)));
    // 0x1cc05c: 0x1440000a
    ctx->pc = 0x1CC05Cu;
    {
        const bool branch_taken_0x1cc05c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cc05c) {
            ctx->pc = 0x1CC088u;
            goto label_1cc088;
        }
    }
    ctx->pc = 0x1CC064u;
    // 0x1cc064: 0x3c020027
    ctx->pc = 0x1cc064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1cc068: 0x91840
    ctx->pc = 0x1cc068u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 1));
    // 0x1cc06c: 0x2442b1a0
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947232));
    // 0x1cc070: 0x431021
    ctx->pc = 0x1cc070u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc074: 0x84450000
    ctx->pc = 0x1cc074u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc078: 0xc05adc4
    ctx->pc = 0x1CC078u;
    SET_GPR_U32(ctx, 31, 0x1CC080u);
    ctx->pc = 0x1CC07Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC080u; }
        else if (ctx->pc != 0x1CC080u) { ctx->pc = 0x1CC080u; }
    }
    if (ctx->pc != 0x1CC080u) { return; }
    ctx->pc = 0x1CC080u;
    // 0x1cc080: 0x3c010050
    ctx->pc = 0x1cc080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cc084: 0xac220c74
    ctx->pc = 0x1cc084u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3188), GPR_U32(ctx, 2));
label_1cc088:
    // 0x1cc088: 0x3c010030
    ctx->pc = 0x1cc088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc08c: 0x8c227c70
    ctx->pc = 0x1cc08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31856)));
    // 0x1cc090: 0x14400006
    ctx->pc = 0x1CC090u;
    {
        const bool branch_taken_0x1cc090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CC094u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1cc090) {
            ctx->pc = 0x1CC0ACu;
            goto label_1cc0ac;
        }
    }
    ctx->pc = 0x1CC098u;
    // 0x1cc098: 0xc05afe2
    ctx->pc = 0x1CC098u;
    SET_GPR_U32(ctx, 31, 0x1CC0A0u);
    ctx->pc = 0x1CC09Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3188)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0A0u; }
        else if (ctx->pc != 0x1CC0A0u) { ctx->pc = 0x1CC0A0u; }
    }
    if (ctx->pc != 0x1CC0A0u) { return; }
    ctx->pc = 0x1CC0A0u;
    // 0x1cc0a0: 0x3c010030
    ctx->pc = 0x1cc0a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc0a4: 0x10000008
    ctx->pc = 0x1CC0A4u;
    {
        const bool branch_taken_0x1cc0a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC0A8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 31852), GPR_U32(ctx, 2));
        if (branch_taken_0x1cc0a4) {
            ctx->pc = 0x1CC0C8u;
            goto label_1cc0c8;
        }
    }
    ctx->pc = 0x1CC0ACu;
label_1cc0ac:
    // 0x1cc0ac: 0x8c43000c
    ctx->pc = 0x1cc0acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cc0b0: 0x4610003
    ctx->pc = 0x1CC0B0u;
    {
        const bool branch_taken_0x1cc0b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CC0B4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        if (branch_taken_0x1cc0b0) {
            ctx->pc = 0x1CC0C0u;
            goto label_1cc0c0;
        }
    }
    ctx->pc = 0x1CC0B8u;
    // 0x1cc0b8: 0x246207ff
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1cc0bc: 0x212c3
    ctx->pc = 0x1cc0bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1cc0c0:
    // 0x1cc0c0: 0x3c010030
    ctx->pc = 0x1cc0c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc0c4: 0xac227c6c
    ctx->pc = 0x1cc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31852), GPR_U32(ctx, 2));
label_1cc0c8:
    // 0x1cc0c8: 0x3c010030
    ctx->pc = 0x1cc0c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc0cc: 0x8c227c6c
    ctx->pc = 0x1cc0ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31852)));
    // 0x1cc0d0: 0x212c0
    ctx->pc = 0x1cc0d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1cc0d4: 0xc06878c
    ctx->pc = 0x1CC0D4u;
    SET_GPR_U32(ctx, 31, 0x1CC0DCu);
    ctx->pc = 0x1CC0D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0DCu; }
        else if (ctx->pc != 0x1CC0DCu) { ctx->pc = 0x1CC0DCu; }
    }
    if (ctx->pc != 0x1CC0DCu) { return; }
    ctx->pc = 0x1CC0DCu;
    // 0x1cc0dc: 0xae020004
    ctx->pc = 0x1cc0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cc0e0: 0x8e040004
    ctx->pc = 0x1cc0e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cc0e4: 0x2403ffc0
    ctx->pc = 0x1cc0e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1cc0e8: 0x3c010030
    ctx->pc = 0x1cc0e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc0ec: 0x24020001
    ctx->pc = 0x1cc0ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc0f0: 0x2484003f
    ctx->pc = 0x1cc0f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 63));
    // 0x1cc0f4: 0x831824
    ctx->pc = 0x1cc0f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc0f8: 0xac237c64
    ctx->pc = 0x1cc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31844), GPR_U32(ctx, 3));
    // 0x1cc0fc: 0x3c010030
    ctx->pc = 0x1cc0fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc100: 0x8c237c64
    ctx->pc = 0x1cc100u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 31844)));
    // 0x1cc104: 0x3c010030
    ctx->pc = 0x1cc104u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc108: 0xac237c60
    ctx->pc = 0x1cc108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31840), GPR_U32(ctx, 3));
    // 0x1cc10c: 0xae030008
    ctx->pc = 0x1cc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1cc110: 0x3c010030
    ctx->pc = 0x1cc110u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc114: 0x8c247c68
    ctx->pc = 0x1cc114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 31848)));
    // 0x1cc118: 0x8e030008
    ctx->pc = 0x1cc118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cc11c: 0x24840001
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cc120: 0x42080
    ctx->pc = 0x1cc120u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc124: 0x641821
    ctx->pc = 0x1cc124u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cc128: 0xae030008
    ctx->pc = 0x1cc128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1cc12c: 0x8e230000
    ctx->pc = 0x1cc12cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc130: 0x10000004
    ctx->pc = 0x1CC130u;
    {
        const bool branch_taken_0x1cc130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC134u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1cc130) {
            ctx->pc = 0x1CC144u;
            goto label_1cc144;
        }
    }
    ctx->pc = 0x1CC138u;
label_1cc138:
    // 0x1cc138: 0x10000003
    ctx->pc = 0x1CC138u;
    {
        const bool branch_taken_0x1cc138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC13Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1cc138) {
            ctx->pc = 0x1CC148u;
            goto label_1cc148;
        }
    }
    ctx->pc = 0x1CC140u;
label_1cc140:
    // 0x1cc140: 0x2402ffff
    ctx->pc = 0x1cc140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cc144:
    // 0x1cc144: 0x7bbf0020
    ctx->pc = 0x1cc144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc148:
    // 0x1cc148: 0x7bb10010
    ctx->pc = 0x1cc148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc14c: 0x7bb00000
    ctx->pc = 0x1cc14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc150: 0x3e00008
    ctx->pc = 0x1CC150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBFC0u: goto label_1cbfc0;
            case 0x1CC01Cu: goto label_1cc01c;
            case 0x1CC040u: goto label_1cc040;
            case 0x1CC088u: goto label_1cc088;
            case 0x1CC0ACu: goto label_1cc0ac;
            case 0x1CC0C0u: goto label_1cc0c0;
            case 0x1CC0C8u: goto label_1cc0c8;
            case 0x1CC138u: goto label_1cc138;
            case 0x1CC140u: goto label_1cc140;
            case 0x1CC144u: goto label_1cc144;
            case 0x1CC148u: goto label_1cc148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC158u;
}
