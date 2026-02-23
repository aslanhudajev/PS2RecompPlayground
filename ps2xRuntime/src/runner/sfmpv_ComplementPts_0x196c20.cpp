#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ComplementPts
// Address: 0x196c20 - 0x196d9c
void sfmpv_ComplementPts_0x196c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ComplementPts");


    ctx->pc = 0x196c20u;

    // 0x196c20: 0x27bdff70
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x196c24: 0x3c03002c
    ctx->pc = 0x196c24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x196c28: 0xffb60060
    ctx->pc = 0x196c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x196c2c: 0x2463d5f0
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956528));
    // 0x196c30: 0xffb30030
    ctx->pc = 0x196c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x196c34: 0x100b02d
    ctx->pc = 0x196c34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c38: 0xffb20020
    ctx->pc = 0x196c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x196c3c: 0xc0982d
    ctx->pc = 0x196c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c40: 0xffb10010
    ctx->pc = 0x196c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x196c44: 0xe0902d
    ctx->pc = 0x196c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c48: 0xffb00000
    ctx->pc = 0x196c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196c4c: 0x80882d
    ctx->pc = 0x196c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c50: 0xffbf0080
    ctx->pc = 0x196c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x196c54: 0xa0802d
    ctx->pc = 0x196c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c58: 0xffb70070
    ctx->pc = 0x196c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x196c5c: 0xffb50050
    ctx->pc = 0x196c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x196c60: 0xffb40040
    ctx->pc = 0x196c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x196c64: 0x8e740014
    ctx->pc = 0x196c64u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x196c68: 0x8e620010
    ctx->pc = 0x196c68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x196c6c: 0x8e260110
    ctx->pc = 0x196c6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x196c70: 0x21080
    ctx->pc = 0x196c70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x196c74: 0x431021
    ctx->pc = 0x196c74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196c78: 0x4c1000b
    ctx->pc = 0x196C78u;
    {
        const bool branch_taken_0x196c78 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x196C7Cu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x196c78) {
            ctx->pc = 0x196CA8u;
            goto label_196ca8;
        }
    }
    ctx->pc = 0x196C80u;
    // 0x196c80: 0x280202d
    ctx->pc = 0x196c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c84: 0xc065b68
    ctx->pc = 0x196C84u;
    SET_GPR_U32(ctx, 31, 0x196C8Cu);
    ctx->pc = 0x196C88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_Nfrm2Pts_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C8Cu; }
        else if (ctx->pc != 0x196C8Cu) { ctx->pc = 0x196C8Cu; }
    }
    if (ctx->pc != 0x196C8Cu) { return; }
    ctx->pc = 0x196C8Cu;
    // 0x196c8c: 0x8e430000
    ctx->pc = 0x196c8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x196c90: 0x2404ffff
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196c94: 0x621823
    ctx->pc = 0x196c94u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196c98: 0x83202a
    ctx->pc = 0x196c98u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x196c9c: 0x4180a
    ctx->pc = 0x196c9cu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x196ca0: 0xae230110
    ctx->pc = 0x196ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 3));
    // 0x196ca4: 0x60302d
    ctx->pc = 0x196ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_196ca8:
    // 0x196ca8: 0x8e420000
    ctx->pc = 0x196ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x196cac: 0x2417ffff
    ctx->pc = 0x196cacu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196cb0: 0x2604000c
    ctx->pc = 0x196cb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    // 0x196cb4: 0x240282d
    ctx->pc = 0x196cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196cb8: 0x468823
    ctx->pc = 0x196cb8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x196cbc: 0x2f1102a
    ctx->pc = 0x196cbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 17)));
    // 0x196cc0: 0x24060004
    ctx->pc = 0x196cc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x196cc4: 0xc050c6a
    ctx->pc = 0x196CC4u;
    SET_GPR_U32(ctx, 31, 0x196CCCu);
    ctx->pc = 0x196CC8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CCCu; }
        else if (ctx->pc != 0x196CCCu) { ctx->pc = 0x196CCCu; }
    }
    if (ctx->pc != 0x196CCCu) { return; }
    ctx->pc = 0x196CCCu;
    // 0x196ccc: 0x10400011
    ctx->pc = 0x196CCCu;
    {
        const bool branch_taken_0x196ccc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x196ccc) {
            ctx->pc = 0x196D14u;
            goto label_196d14;
        }
    }
    ctx->pc = 0x196CD4u;
    // 0x196cd4: 0x6a420007
    ctx->pc = 0x196cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x196cd8: 0x6e420000
    ctx->pc = 0x196cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x196cdc: 0x8e430008
    ctx->pc = 0x196cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x196ce0: 0xb2020013
    ctx->pc = 0x196ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196ce4: 0xb602000c
    ctx->pc = 0x196ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x196ce8: 0xae030014
    ctx->pc = 0x196ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x196cec: 0x24030003
    ctx->pc = 0x196cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x196cf0: 0xae140000
    ctx->pc = 0x196cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x196cf4: 0x8e620018
    ctx->pc = 0x196cf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x196cf8: 0x14430004
    ctx->pc = 0x196CF8u;
    {
        const bool branch_taken_0x196cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x196CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x196cf8) {
            ctx->pc = 0x196D0Cu;
            goto label_196d0c;
        }
    }
    ctx->pc = 0x196D00u;
    // 0x196d00: 0x24020001
    ctx->pc = 0x196d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x196d04: 0x10000019
    ctx->pc = 0x196D04u;
    {
        const bool branch_taken_0x196d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196D08u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x196d04) {
            ctx->pc = 0x196D6Cu;
            goto label_196d6c;
        }
    }
    ctx->pc = 0x196D0Cu;
label_196d0c:
    // 0x196d0c: 0x10000017
    ctx->pc = 0x196D0Cu;
    {
        const bool branch_taken_0x196d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196D10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x196d0c) {
            ctx->pc = 0x196D6Cu;
            goto label_196d6c;
        }
    }
    ctx->pc = 0x196D14u;
label_196d14:
    // 0x196d14: 0x52c00009
    ctx->pc = 0x196D14u;
    {
        const bool branch_taken_0x196d14 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x196d14) {
            ctx->pc = 0x196D18u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x196D3Cu;
            goto label_196d3c;
        }
    }
    ctx->pc = 0x196D1Cu;
    // 0x196d1c: 0x8e020004
    ctx->pc = 0x196d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x196d20: 0x8e030008
    ctx->pc = 0x196d20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x196d24: 0x24420001
    ctx->pc = 0x196d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x196d28: 0xae000008
    ctx->pc = 0x196d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x196d2c: 0x431021
    ctx->pc = 0x196d2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196d30: 0xae000000
    ctx->pc = 0x196d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x196d34: 0xae020004
    ctx->pc = 0x196d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x196d38: 0x8e040000
    ctx->pc = 0x196d38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_196d3c:
    // 0x196d3c: 0x2a0282d
    ctx->pc = 0x196d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d40: 0x8e030008
    ctx->pc = 0x196d40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x196d44: 0x2842023
    ctx->pc = 0x196d44u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x196d48: 0x8e060004
    ctx->pc = 0x196d48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x196d4c: 0x83102a
    ctx->pc = 0x196d4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x196d50: 0x82180a
    ctx->pc = 0x196d50u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x196d54: 0xc42021
    ctx->pc = 0x196d54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x196d58: 0xc065b68
    ctx->pc = 0x196D58u;
    SET_GPR_U32(ctx, 31, 0x196D60u);
    ctx->pc = 0x196D5Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x196DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_Nfrm2Pts_0x196da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196D60u; }
        else if (ctx->pc != 0x196D60u) { ctx->pc = 0x196D60u; }
    }
    if (ctx->pc != 0x196D60u) { return; }
    ctx->pc = 0x196D60u;
    // 0x196d60: 0x2228821
    ctx->pc = 0x196d60u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x196d64: 0x2f1102a
    ctx->pc = 0x196d64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 17)));
    // 0x196d68: 0x2880a
    ctx->pc = 0x196d68u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
label_196d6c:
    // 0x196d6c: 0x220102d
    ctx->pc = 0x196d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d70: 0xdfbf0080
    ctx->pc = 0x196d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x196d74: 0xdfb70070
    ctx->pc = 0x196d74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196d78: 0xdfb60060
    ctx->pc = 0x196d78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196d7c: 0xdfb50050
    ctx->pc = 0x196d7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196d80: 0xdfb40040
    ctx->pc = 0x196d80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196d84: 0xdfb30030
    ctx->pc = 0x196d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196d88: 0xdfb20020
    ctx->pc = 0x196d88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196d8c: 0xdfb10010
    ctx->pc = 0x196d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196d90: 0xdfb00000
    ctx->pc = 0x196d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196d94: 0x3e00008
    ctx->pc = 0x196D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196CA8u: goto label_196ca8;
            case 0x196D0Cu: goto label_196d0c;
            case 0x196D14u: goto label_196d14;
            case 0x196D3Cu: goto label_196d3c;
            case 0x196D6Cu: goto label_196d6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196D9Cu;
}
