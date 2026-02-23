#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_00__11MotMgrClassFP11DATAENT_REQ
// Address: 0x1fbf80 - 0x1fc180
void entryExec_STAT_00__11MotMgrClassFP11DATAENT_REQ_0x1fbf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_00__11MotMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fbf80u;

    // 0x1fbf80: 0x27bdffd0
    ctx->pc = 0x1fbf80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbf84: 0x7fbf0020
    ctx->pc = 0x1fbf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fbf88: 0x7fb10010
    ctx->pc = 0x1fbf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fbf8c: 0x7fb00000
    ctx->pc = 0x1fbf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbf90: 0x8ca30008
    ctx->pc = 0x1fbf90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fbf94: 0x70a08e28
    ctx->pc = 0x1fbf94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fbf98: 0x3c020051
    ctx->pc = 0x1fbf98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fbf9c: 0x3c046000
    ctx->pc = 0x1fbf9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)24576 << 16));
    // 0x1fbfa0: 0x33040
    ctx->pc = 0x1fbfa0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fbfa4: 0xc33021
    ctx->pc = 0x1fbfa4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fbfa8: 0x24451dd0
    ctx->pc = 0x1fbfa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7632));
    // 0x1fbfac: 0x63080
    ctx->pc = 0x1fbfacu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fbfb0: 0xa68021
    ctx->pc = 0x1fbfb0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fbfb4: 0x8e050000
    ctx->pc = 0x1fbfb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbfb8: 0x3c024000
    ctx->pc = 0x1fbfb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1fbfbc: 0xa42024
    ctx->pc = 0x1fbfbcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fbfc0: 0x1082006a
    ctx->pc = 0x1FBFC0u;
    {
        const bool branch_taken_0x1fbfc0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1FBFC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1fbfc0) {
            ctx->pc = 0x1FC16Cu;
            goto label_1fc16c;
        }
    }
    ctx->pc = 0x1FBFC8u;
    // 0x1fbfc8: 0x3c022000
    ctx->pc = 0x1fbfc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x1fbfcc: 0x50820064
    ctx->pc = 0x1FBFCCu;
    {
        const bool branch_taken_0x1fbfcc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fbfcc) {
            ctx->pc = 0x1FBFD0u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x1FC160u;
            goto label_1fc160;
        }
    }
    ctx->pc = 0x1FBFD4u;
    // 0x1fbfd4: 0x10800003
    ctx->pc = 0x1FBFD4u;
    {
        const bool branch_taken_0x1fbfd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FBFD8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)40959 << 16));
        if (branch_taken_0x1fbfd4) {
            ctx->pc = 0x1FBFE4u;
            goto label_1fbfe4;
        }
    }
    ctx->pc = 0x1FBFDCu;
    // 0x1fbfdc: 0x10000062
    ctx->pc = 0x1FBFDCu;
    {
        const bool branch_taken_0x1fbfdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fbfdc) {
            ctx->pc = 0x1FC168u;
            goto label_1fc168;
        }
    }
    ctx->pc = 0x1FBFE4u;
label_1fbfe4:
    // 0x1fbfe4: 0x3484ffff
    ctx->pc = 0x1fbfe4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x1fbfe8: 0xa42824
    ctx->pc = 0x1fbfe8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fbfec: 0xae050000
    ctx->pc = 0x1fbfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1fbff0: 0x8e060000
    ctx->pc = 0x1fbff0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbff4: 0x3c050051
    ctx->pc = 0x1fbff4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)81 << 16));
    // 0x1fbff8: 0x24a91dda
    ctx->pc = 0x1fbff8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 7642));
    // 0x1fbffc: 0x3c010051
    ctx->pc = 0x1fbffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1fc000: 0x3c050050
    ctx->pc = 0x1fc000u;
    SET_GPR_U32(ctx, 5, ((uint32_t)80 << 16));
    // 0x1fc004: 0x2408005f
    ctx->pc = 0x1fc004u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 95));
    // 0x1fc008: 0xc23025
    ctx->pc = 0x1fc008u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fc00c: 0xae060000
    ctx->pc = 0x1fc00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1fc010: 0xae000004
    ctx->pc = 0x1fc010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fc014: 0x842a224c
    ctx->pc = 0x1fc014u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8780)));
    // 0x1fc018: 0x24a60e30
    ctx->pc = 0x1fc018u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 3632));
    // 0x1fc01c: 0x33880
    ctx->pc = 0x1fc01cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc020: 0xa2840
    ctx->pc = 0x1fc020u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 10), 1));
    // 0x1fc024: 0xaa2821
    ctx->pc = 0x1fc024u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1fc028: 0x3c010051
    ctx->pc = 0x1fc028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1fc02c: 0x52880
    ctx->pc = 0x1fc02cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fc030: 0xa423224c
    ctx->pc = 0x1fc030u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8780), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc034: 0x1252821
    ctx->pc = 0x1fc034u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1fc038: 0xa4a30000
    ctx->pc = 0x1fc038u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc03c: 0xa60a0008
    ctx->pc = 0x1fc03cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 10));
    // 0x1fc040: 0x3c0101fc
    ctx->pc = 0x1fc040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1fc044: 0xa608000a
    ctx->pc = 0x1fc044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 8));
    // 0x1fc048: 0xe10821
    ctx->pc = 0x1fc048u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x1fc04c: 0x8c28fc9c
    ctx->pc = 0x1fc04cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294966428)));
    // 0x1fc050: 0x3c010052
    ctx->pc = 0x1fc050u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc054: 0x1000000e
    ctx->pc = 0x1FC054u;
    {
        const bool branch_taken_0x1fc054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC058u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939692), GPR_U32(ctx, 0));
        if (branch_taken_0x1fc054) {
            ctx->pc = 0x1FC090u;
            goto label_1fc090;
        }
    }
    ctx->pc = 0x1FC05Cu;
label_1fc05c:
    // 0x1fc05c: 0x528c0
    ctx->pc = 0x1fc05cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1fc060: 0xc53821
    ctx->pc = 0x1fc060u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fc064: 0xace00004
    ctx->pc = 0x1fc064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1fc068: 0x8ce50000
    ctx->pc = 0x1fc068u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fc06c: 0x3c010052
    ctx->pc = 0x1fc06cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc070: 0xa42824
    ctx->pc = 0x1fc070u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fc074: 0xace50000
    ctx->pc = 0x1fc074u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1fc078: 0xace20000
    ctx->pc = 0x1fc078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1fc07c: 0x8c25942c
    ctx->pc = 0x1fc07cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939692)));
    // 0x1fc080: 0x24a50001
    ctx->pc = 0x1fc080u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fc084: 0x3c010052
    ctx->pc = 0x1fc084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc088: 0xac25942c
    ctx->pc = 0x1fc088u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939692), GPR_U32(ctx, 5));
    // 0x1fc08c: 0x0
    ctx->pc = 0x1fc08cu;
    // NOP
label_1fc090:
    // 0x1fc090: 0x85050000
    ctx->pc = 0x1fc090u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc094: 0x4a1fff1
    ctx->pc = 0x1FC094u;
    {
        const bool branch_taken_0x1fc094 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FC098u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1fc094) {
            ctx->pc = 0x1FC05Cu;
            goto label_1fc05c;
        }
    }
    ctx->pc = 0x1FC09Cu;
    // 0x1fc09c: 0x3c010052
    ctx->pc = 0x1fc09cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc0a0: 0xac209434
    ctx->pc = 0x1fc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939700), GPR_U32(ctx, 0));
    // 0x1fc0a4: 0x3c010052
    ctx->pc = 0x1fc0a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc0a8: 0x8c229434
    ctx->pc = 0x1fc0a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939700)));
    // 0x1fc0ac: 0x14400010
    ctx->pc = 0x1FC0ACu;
    {
        const bool branch_taken_0x1fc0ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fc0ac) {
            ctx->pc = 0x1FC0F0u;
            goto label_1fc0f0;
        }
    }
    ctx->pc = 0x1FC0B4u;
    // 0x1fc0b4: 0x3c020027
    ctx->pc = 0x1fc0b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fc0b8: 0x31840
    ctx->pc = 0x1fc0b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fc0bc: 0x2442b0e0
    ctx->pc = 0x1fc0bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x1fc0c0: 0x431021
    ctx->pc = 0x1fc0c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc0c4: 0x84450000
    ctx->pc = 0x1fc0c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc0c8: 0xc05adc4
    ctx->pc = 0x1FC0C8u;
    SET_GPR_U32(ctx, 31, 0x1FC0D0u);
    ctx->pc = 0x1FC0CCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_OpenAfs_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0D0u; }
        else if (ctx->pc != 0x1FC0D0u) { ctx->pc = 0x1FC0D0u; }
    }
    if (ctx->pc != 0x1FC0D0u) { return; }
    ctx->pc = 0x1FC0D0u;
    // 0x1fc0d0: 0x3c010050
    ctx->pc = 0x1fc0d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc0d4: 0xac220c70
    ctx->pc = 0x1fc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3184), GPR_U32(ctx, 2));
    // 0x1fc0d8: 0x3c010050
    ctx->pc = 0x1fc0d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fc0dc: 0xc05afe2
    ctx->pc = 0x1FC0DCu;
    SET_GPR_U32(ctx, 31, 0x1FC0E4u);
    ctx->pc = 0x1FC0E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3184)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0E4u; }
        else if (ctx->pc != 0x1FC0E4u) { ctx->pc = 0x1FC0E4u; }
    }
    if (ctx->pc != 0x1FC0E4u) { return; }
    ctx->pc = 0x1FC0E4u;
    // 0x1fc0e4: 0x3c010052
    ctx->pc = 0x1fc0e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc0e8: 0x10000008
    ctx->pc = 0x1FC0E8u;
    {
        const bool branch_taken_0x1fc0e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC0ECu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294939696), GPR_U32(ctx, 2));
        if (branch_taken_0x1fc0e8) {
            ctx->pc = 0x1FC10Cu;
            goto label_1fc10c;
        }
    }
    ctx->pc = 0x1FC0F0u;
label_1fc0f0:
    // 0x1fc0f0: 0x8c43000c
    ctx->pc = 0x1fc0f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1fc0f4: 0x4610003
    ctx->pc = 0x1FC0F4u;
    {
        const bool branch_taken_0x1fc0f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FC0F8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        if (branch_taken_0x1fc0f4) {
            ctx->pc = 0x1FC104u;
            goto label_1fc104;
        }
    }
    ctx->pc = 0x1FC0FCu;
    // 0x1fc0fc: 0x246207ff
    ctx->pc = 0x1fc0fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1fc100: 0x212c3
    ctx->pc = 0x1fc100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1fc104:
    // 0x1fc104: 0x3c010052
    ctx->pc = 0x1fc104u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc108: 0xac229430
    ctx->pc = 0x1fc108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939696), GPR_U32(ctx, 2));
label_1fc10c:
    // 0x1fc10c: 0x3c010052
    ctx->pc = 0x1fc10cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc110: 0x8c229430
    ctx->pc = 0x1fc110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939696)));
    // 0x1fc114: 0x212c0
    ctx->pc = 0x1fc114u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x1fc118: 0xc06878c
    ctx->pc = 0x1FC118u;
    SET_GPR_U32(ctx, 31, 0x1FC120u);
    ctx->pc = 0x1FC11Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC120u; }
        else if (ctx->pc != 0x1FC120u) { ctx->pc = 0x1FC120u; }
    }
    if (ctx->pc != 0x1FC120u) { return; }
    ctx->pc = 0x1FC120u;
    // 0x1fc120: 0xae020004
    ctx->pc = 0x1fc120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1fc124: 0x8e040004
    ctx->pc = 0x1fc124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fc128: 0x2403ffc0
    ctx->pc = 0x1fc128u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fc12c: 0x3c010052
    ctx->pc = 0x1fc12cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc130: 0x24020001
    ctx->pc = 0x1fc130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc134: 0x2484003f
    ctx->pc = 0x1fc134u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 63));
    // 0x1fc138: 0x831824
    ctx->pc = 0x1fc138u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc13c: 0xac239424
    ctx->pc = 0x1fc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939684), GPR_U32(ctx, 3));
    // 0x1fc140: 0x3c010052
    ctx->pc = 0x1fc140u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc144: 0x8c239424
    ctx->pc = 0x1fc144u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939684)));
    // 0x1fc148: 0x3c010052
    ctx->pc = 0x1fc148u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc14c: 0xac239428
    ctx->pc = 0x1fc14cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939688), GPR_U32(ctx, 3));
    // 0x1fc150: 0x3c010052
    ctx->pc = 0x1fc150u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc154: 0xac239420
    ctx->pc = 0x1fc154u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939680), GPR_U32(ctx, 3));
    // 0x1fc158: 0x10000004
    ctx->pc = 0x1FC158u;
    {
        const bool branch_taken_0x1fc158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC15Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1fc158) {
            ctx->pc = 0x1FC16Cu;
            goto label_1fc16c;
        }
    }
    ctx->pc = 0x1FC160u;
label_1fc160:
    // 0x1fc160: 0x10000003
    ctx->pc = 0x1FC160u;
    {
        const bool branch_taken_0x1fc160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC164u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1fc160) {
            ctx->pc = 0x1FC170u;
            goto label_1fc170;
        }
    }
    ctx->pc = 0x1FC168u;
label_1fc168:
    // 0x1fc168: 0x2402ffff
    ctx->pc = 0x1fc168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fc16c:
    // 0x1fc16c: 0x7bbf0020
    ctx->pc = 0x1fc16cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc170:
    // 0x1fc170: 0x7bb10010
    ctx->pc = 0x1fc170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc174: 0x7bb00000
    ctx->pc = 0x1fc174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc178: 0x3e00008
    ctx->pc = 0x1FC178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC17Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FBFE4u: goto label_1fbfe4;
            case 0x1FC05Cu: goto label_1fc05c;
            case 0x1FC090u: goto label_1fc090;
            case 0x1FC0F0u: goto label_1fc0f0;
            case 0x1FC104u: goto label_1fc104;
            case 0x1FC10Cu: goto label_1fc10c;
            case 0x1FC160u: goto label_1fc160;
            case 0x1FC168u: goto label_1fc168;
            case 0x1FC16Cu: goto label_1fc16c;
            case 0x1FC170u: goto label_1fc170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC180u;
}
