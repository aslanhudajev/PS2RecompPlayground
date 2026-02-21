#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1DebugBreak
// Address: 0x2bce28 - 0x2bd09c
void pbVu1DebugBreak_0x2bce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bce28u;

    // 0x2bce28: 0x27bdff50
    ctx->pc = 0x2bce28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bce2c: 0xffbf00a0
    ctx->pc = 0x2bce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bce30: 0xffb40090
    ctx->pc = 0x2bce30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2bce34: 0xffb30080
    ctx->pc = 0x2bce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2bce38: 0xffb20070
    ctx->pc = 0x2bce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2bce3c: 0xffb10060
    ctx->pc = 0x2bce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2bce40: 0xffb00050
    ctx->pc = 0x2bce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2bce44: 0x80882d
    ctx->pc = 0x2bce44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce48: 0xafa00040
    ctx->pc = 0x2bce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2bce4c: 0xafa00020
    ctx->pc = 0x2bce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2bce50: 0xafa00024
    ctx->pc = 0x2bce50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2bce54: 0x27a20040
    ctx->pc = 0x2bce54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bce58: 0xafa20028
    ctx->pc = 0x2bce58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2bce5c: 0xafa2002c
    ctx->pc = 0x2bce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2bce60: 0xafa20030
    ctx->pc = 0x2bce60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2bce64: 0xafa20034
    ctx->pc = 0x2bce64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2bce68: 0x6ba20027
    ctx->pc = 0x2bce68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2bce6c: 0x6fa20020
    ctx->pc = 0x2bce6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2bce70: 0x6ba3002f
    ctx->pc = 0x2bce70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2bce74: 0x6fa30028
    ctx->pc = 0x2bce74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2bce78: 0x6ba40037
    ctx->pc = 0x2bce78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2bce7c: 0x6fa40030
    ctx->pc = 0x2bce7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2bce80: 0xb3a20007
    ctx->pc = 0x2bce80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce84: 0xb7a20000
    ctx->pc = 0x2bce84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce88: 0xb3a3000f
    ctx->pc = 0x2bce88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce8c: 0xb7a30008
    ctx->pc = 0x2bce8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce90: 0xb3a40017
    ctx->pc = 0x2bce90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce94: 0xb7a40010
    ctx->pc = 0x2bce94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bce98: 0xa02d
    ctx->pc = 0x2bce98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bce9c: 0x12200002
    ctx->pc = 0x2BCE9Cu;
    {
        const bool branch_taken_0x2bce9c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BCEA0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bce9c) {
            ctx->pc = 0x2BCEA8u;
            goto label_2bcea8;
        }
    }
    ctx->pc = 0x2BCEA4u;
    // 0x2bcea4: 0x8e320000
    ctx->pc = 0x2bcea4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcea8:
    // 0x2bcea8: 0x56400004
    ctx->pc = 0x2BCEA8u;
    {
        const bool branch_taken_0x2bcea8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bcea8) {
            ctx->pc = 0x2BCEACu;
            SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->pc = 0x2BCEBCu;
            goto label_2bcebc;
        }
    }
    ctx->pc = 0x2BCEB0u;
    // 0x2bceb0: 0x3c020037
    ctx->pc = 0x2bceb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bceb4: 0x8c521f84
    ctx->pc = 0x2bceb4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 8068)));
    // 0x2bceb8: 0x8e530034
    ctx->pc = 0x2bceb8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2bcebc:
    // 0x2bcebc: 0x3c100037
    ctx->pc = 0x2bcebcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2bcec0: 0x2604cfa0
    ctx->pc = 0x2bcec0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294954912));
    // 0x2bcec4: 0x24050001
    ctx->pc = 0x2bcec4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcec8: 0x24060001
    ctx->pc = 0x2bcec8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcecc: 0xc0ad004
    ctx->pc = 0x2BCECCu;
    SET_GPR_U32(ctx, 31, 0x2BCED4u);
    ctx->pc = 0x2BCED0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4010u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVu1Info_0x2b4010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCED4u; }
    }
    if (ctx->pc != 0x2BCED4u) { return; }
    ctx->pc = 0x2BCED4u;
    // 0x2bced4: 0x2610cfa0
    ctx->pc = 0x2bced4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294954912));
    // 0x2bced8: 0xae300004
    ctx->pc = 0x2bced8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2bcedc: 0x220202d
    ctx->pc = 0x2bcedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcee0: 0x8e450008
    ctx->pc = 0x2bcee0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2bcee4: 0xc0acd4a
    ctx->pc = 0x2BCEE4u;
    SET_GPR_U32(ctx, 31, 0x2BCEECu);
    ctx->pc = 0x2BCEE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3528u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataI_0x2b3528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCEECu; }
    }
    if (ctx->pc != 0x2BCEECu) { return; }
    ctx->pc = 0x2BCEECu;
    // 0x2bceec: 0x8e630000
    ctx->pc = 0x2bceecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bcef0: 0x43182a
    ctx->pc = 0x2bcef0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2bcef4: 0x802d
    ctx->pc = 0x2bcef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcef8: 0x43800b
    ctx->pc = 0x2bcef8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x2bcefc: 0xae300010
    ctx->pc = 0x2bcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x2bcf00: 0x3c020037
    ctx->pc = 0x2bcf00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bcf04: 0x8c4225d8
    ctx->pc = 0x2bcf04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9688)));
    // 0x2bcf08: 0x8c42025c
    ctx->pc = 0x2bcf08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 604)));
    // 0x2bcf0c: 0xae22000c
    ctx->pc = 0x2bcf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2bcf10: 0x3c020037
    ctx->pc = 0x2bcf10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bcf14: 0x8c4221a8
    ctx->pc = 0x2bcf14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8616)));
    // 0x2bcf18: 0x50400004
    ctx->pc = 0x2BCF18u;
    {
        const bool branch_taken_0x2bcf18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bcf18) {
            ctx->pc = 0x2BCF1Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->pc = 0x2BCF2Cu;
            goto label_2bcf2c;
        }
    }
    ctx->pc = 0x2BCF20u;
    // 0x2bcf20: 0xc0af276
    ctx->pc = 0x2BCF20u;
    SET_GPR_U32(ctx, 31, 0x2BCF28u);
    ctx->pc = 0x2BCF24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BC9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCheckOverrun_0x2bc9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCF28u; }
    }
    if (ctx->pc != 0x2BCF28u) { return; }
    ctx->pc = 0x2BCF28u;
    // 0x2bcf28: 0x8e42003c
    ctx->pc = 0x2bcf28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2bcf2c:
    // 0x2bcf2c: 0x30420004
    ctx->pc = 0x2bcf2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2bcf30: 0x1040000b
    ctx->pc = 0x2BCF30u;
    {
        const bool branch_taken_0x2bcf30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BCF34u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x2bcf30) {
            ctx->pc = 0x2BCF60u;
            goto label_2bcf60;
        }
    }
    ctx->pc = 0x2BCF38u;
    // 0x2bcf38: 0x8e620008
    ctx->pc = 0x2bcf38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2bcf3c: 0x31880
    ctx->pc = 0x2bcf3cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bcf40: 0x621821
    ctx->pc = 0x2bcf40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bcf44: 0x3204001f
    ctx->pc = 0x2bcf44u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 31));
    // 0x2bcf48: 0x24020001
    ctx->pc = 0x2bcf48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bcf4c: 0x821004
    ctx->pc = 0x2bcf4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2bcf50: 0x8c630000
    ctx->pc = 0x2bcf50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bcf54: 0x431024
    ctx->pc = 0x2bcf54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bcf58: 0x54400006
    ctx->pc = 0x2BCF58u;
    {
        const bool branch_taken_0x2bcf58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bcf58) {
            ctx->pc = 0x2BCF5Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->pc = 0x2BCF74u;
            goto label_2bcf74;
        }
    }
    ctx->pc = 0x2BCF60u;
label_2bcf60:
    // 0x2bcf60: 0x8e42003c
    ctx->pc = 0x2bcf60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2bcf64: 0x30420038
    ctx->pc = 0x2bcf64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 56));
    // 0x2bcf68: 0x5040002d
    ctx->pc = 0x2BCF68u;
    {
        const bool branch_taken_0x2bcf68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bcf68) {
            ctx->pc = 0x2BCF6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->pc = 0x2BD020u;
            goto label_2bd020;
        }
    }
    ctx->pc = 0x2BCF70u;
    // 0x2bcf70: 0x8e43003c
    ctx->pc = 0x2bcf70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2bcf74:
    // 0x2bcf74: 0x30620010
    ctx->pc = 0x2bcf74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
    // 0x2bcf78: 0x50400006
    ctx->pc = 0x2BCF78u;
    {
        const bool branch_taken_0x2bcf78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bcf78) {
            ctx->pc = 0x2BCF7Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->pc = 0x2BCF94u;
            goto label_2bcf94;
        }
    }
    ctx->pc = 0x2BCF80u;
    // 0x2bcf80: 0x3c02ffff
    ctx->pc = 0x2bcf80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2bcf84: 0x3442ffef
    ctx->pc = 0x2bcf84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65519));
    // 0x2bcf88: 0x621024
    ctx->pc = 0x2bcf88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bcf8c: 0xae42003c
    ctx->pc = 0x2bcf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x2bcf90: 0x8e43003c
    ctx->pc = 0x2bcf90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2bcf94:
    // 0x2bcf94: 0x30620020
    ctx->pc = 0x2bcf94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x2bcf98: 0x1040000a
    ctx->pc = 0x2BCF98u;
    {
        const bool branch_taken_0x2bcf98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BCF9Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bcf98) {
            ctx->pc = 0x2BCFC4u;
            goto label_2bcfc4;
        }
    }
    ctx->pc = 0x2BCFA0u;
    // 0x2bcfa0: 0x3c02ffff
    ctx->pc = 0x2bcfa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2bcfa4: 0x3442ffdf
    ctx->pc = 0x2bcfa4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65503));
    // 0x2bcfa8: 0x621024
    ctx->pc = 0x2bcfa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bcfac: 0xae42003c
    ctx->pc = 0x2bcfacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x2bcfb0: 0xc0a9b54
    ctx->pc = 0x2BCFB0u;
    SET_GPR_U32(ctx, 31, 0x2BCFB8u);
    ctx->pc = 0x2BCFB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25968));
    ctx->pc = 0x2A6D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbShowPathInfo_0x2a6d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCFB8u; }
    }
    if (ctx->pc != 0x2BCFB8u) { return; }
    ctx->pc = 0x2BCFB8u;
    // 0x2bcfb8: 0x3c04003b
    ctx->pc = 0x2bcfb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bcfbc: 0xc0b4a34
    ctx->pc = 0x2BCFBCu;
    SET_GPR_U32(ctx, 31, 0x2BCFC4u);
    ctx->pc = 0x2BCFC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25976));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCFC4u; }
    }
    if (ctx->pc != 0x2BCFC4u) { return; }
    ctx->pc = 0x2BCFC4u;
label_2bcfc4:
    // 0x2bcfc4: 0x3c030037
    ctx->pc = 0x2bcfc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bcfc8: 0x24020085
    ctx->pc = 0x2bcfc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 133));
    // 0x2bcfcc: 0xac62ba2c
    ctx->pc = 0x2bcfccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949420), GPR_U32(ctx, 2));
    // 0x2bcfd0: 0x24020002
    ctx->pc = 0x2bcfd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bcfd4: 0x24130002
    ctx->pc = 0x2bcfd4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bcfd8: 0x108100
    ctx->pc = 0x2bcfd8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2bcfdc: 0x0
    ctx->pc = 0x2bcfdcu;
    // NOP
label_2bcfe0:
    // 0x2bcfe0: 0x54530004
    ctx->pc = 0x2BCFE0u;
    {
        const bool branch_taken_0x2bcfe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x2bcfe0) {
            ctx->pc = 0x2BCFE4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->pc = 0x2BCFF4u;
            goto label_2bcff4;
        }
    }
    ctx->pc = 0x2BCFE8u;
    // 0x2bcfe8: 0xc0af2d4
    ctx->pc = 0x2BCFE8u;
    SET_GPR_U32(ctx, 31, 0x2BCFF0u);
    ctx->pc = 0x2BCFECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BCB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Trace_0x2bcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BCFF0u; }
    }
    if (ctx->pc != 0x2BCFF0u) { return; }
    ctx->pc = 0x2BCFF0u;
    // 0x2bcff0: 0x8e420030
    ctx->pc = 0x2bcff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2bcff4:
    // 0x2bcff4: 0x2021021
    ctx->pc = 0x2bcff4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bcff8: 0xc0a8c36
    ctx->pc = 0x2BCFF8u;
    SET_GPR_U32(ctx, 31, 0x2BD000u);
    ctx->pc = 0x2BCFFCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x2A30D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBreakpoint_0x2a30d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD000u; }
    }
    if (ctx->pc != 0x2BD000u) { return; }
    ctx->pc = 0x2BD000u;
    // 0x2bd000: 0x2c540001
    ctx->pc = 0x2bd000u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2bd004: 0xc0aee84
    ctx->pc = 0x2BD004u;
    SET_GPR_U32(ctx, 31, 0x2BD00Cu);
    ctx->pc = 0x2BD008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuGetExprDebugOnce_0x2bba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD00Cu; }
    }
    if (ctx->pc != 0x2BD00Cu) { return; }
    ctx->pc = 0x2BD00Cu;
    // 0x2bd00c: 0x1440fff4
    ctx->pc = 0x2BD00Cu;
    {
        const bool branch_taken_0x2bd00c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BD010u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd00c) {
            ctx->pc = 0x2BCFE0u;
            goto label_2bcfe0;
        }
    }
    ctx->pc = 0x2BD014u;
    // 0x2bd014: 0x24020004
    ctx->pc = 0x2bd014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bd018: 0x10000010
    ctx->pc = 0x2BD018u;
    {
        const bool branch_taken_0x2bd018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD01Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294949420), GPR_U32(ctx, 2));
        if (branch_taken_0x2bd018) {
            ctx->pc = 0x2BD05Cu;
            goto label_2bd05c;
        }
    }
    ctx->pc = 0x2BD020u;
label_2bd020:
    // 0x2bd020: 0x30420002
    ctx->pc = 0x2bd020u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2bd024: 0x1040000d
    ctx->pc = 0x2BD024u;
    {
        const bool branch_taken_0x2bd024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD028u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 5));
        if (branch_taken_0x2bd024) {
            ctx->pc = 0x2BD05Cu;
            goto label_2bd05c;
        }
    }
    ctx->pc = 0x2BD02Cu;
    // 0x2bd02c: 0x8e62000c
    ctx->pc = 0x2bd02cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2bd030: 0x31880
    ctx->pc = 0x2bd030u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bd034: 0x621821
    ctx->pc = 0x2bd034u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bd038: 0x3204001f
    ctx->pc = 0x2bd038u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 31));
    // 0x2bd03c: 0x24020001
    ctx->pc = 0x2bd03cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd040: 0x821004
    ctx->pc = 0x2bd040u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2bd044: 0x8c630000
    ctx->pc = 0x2bd044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd048: 0x431024
    ctx->pc = 0x2bd048u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bd04c: 0x10400004
    ctx->pc = 0x2BD04Cu;
    {
        const bool branch_taken_0x2bd04c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD050u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2bd04c) {
            ctx->pc = 0x2BD060u;
            goto label_2bd060;
        }
    }
    ctx->pc = 0x2BD054u;
    // 0x2bd054: 0xc0af2d4
    ctx->pc = 0x2BD054u;
    SET_GPR_U32(ctx, 31, 0x2BD05Cu);
    ctx->pc = 0x2BD058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BCB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Trace_0x2bcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD05Cu; }
    }
    if (ctx->pc != 0x2BD05Cu) { return; }
    ctx->pc = 0x2BD05Cu;
label_2bd05c:
    // 0x2bd05c: 0x3c020037
    ctx->pc = 0x2bd05cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2bd060:
    // 0x2bd060: 0x8c42ba30
    ctx->pc = 0x2bd060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949424)));
    // 0x2bd064: 0x10400004
    ctx->pc = 0x2BD064u;
    {
        const bool branch_taken_0x2bd064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BD068u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2bd064) {
            ctx->pc = 0x2BD078u;
            goto label_2bd078;
        }
    }
    ctx->pc = 0x2BD06Cu;
    // 0x2bd06c: 0x3c05003b
    ctx->pc = 0x2bd06cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bd070: 0xc0a9fe2
    ctx->pc = 0x2BD070u;
    SET_GPR_U32(ctx, 31, 0x2BD078u);
    ctx->pc = 0x2BD074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26016));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD078u; }
    }
    if (ctx->pc != 0x2BD078u) { return; }
    ctx->pc = 0x2BD078u;
label_2bd078:
    // 0x2bd078: 0x280102d
    ctx->pc = 0x2bd078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd07c: 0xdfbf00a0
    ctx->pc = 0x2bd07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd080: 0xdfb40090
    ctx->pc = 0x2bd080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd084: 0xdfb30080
    ctx->pc = 0x2bd084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd088: 0xdfb20070
    ctx->pc = 0x2bd088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd08c: 0xdfb10060
    ctx->pc = 0x2bd08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd090: 0xdfb00050
    ctx->pc = 0x2bd090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd094: 0x3e00008
    ctx->pc = 0x2BD094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BCEA8u: goto label_2bcea8;
            case 0x2BCEBCu: goto label_2bcebc;
            case 0x2BCF2Cu: goto label_2bcf2c;
            case 0x2BCF60u: goto label_2bcf60;
            case 0x2BCF74u: goto label_2bcf74;
            case 0x2BCF94u: goto label_2bcf94;
            case 0x2BCFC4u: goto label_2bcfc4;
            case 0x2BCFE0u: goto label_2bcfe0;
            case 0x2BCFF4u: goto label_2bcff4;
            case 0x2BD020u: goto label_2bd020;
            case 0x2BD05Cu: goto label_2bd05c;
            case 0x2BD060u: goto label_2bd060;
            case 0x2BD078u: goto label_2bd078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BD09Cu;
}
