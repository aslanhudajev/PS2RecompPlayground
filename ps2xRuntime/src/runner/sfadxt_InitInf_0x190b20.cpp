#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_InitInf
// Address: 0x190b20 - 0x190be4
void sfadxt_InitInf_0x190b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_InitInf");


    ctx->pc = 0x190b20u;

    // 0x190b20: 0x27bdfff0
    ctx->pc = 0x190b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190b24: 0x3c07002f
    ctx->pc = 0x190b24u;
    SET_GPR_U32(ctx, 7, ((uint32_t)47 << 16));
    // 0x190b28: 0xffbf0000
    ctx->pc = 0x190b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190b2c: 0x24e3c658
    ctx->pc = 0x190b2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294952536));
    // 0x190b30: 0x8c620008
    ctx->pc = 0x190b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x190b34: 0x10400004
    ctx->pc = 0x190B34u;
    {
        const bool branch_taken_0x190b34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190B38u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190b34) {
            ctx->pc = 0x190B48u;
            goto label_190b48;
        }
    }
    ctx->pc = 0x190B3Cu;
    // 0x190b3c: 0x8c620018
    ctx->pc = 0x190b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x190b40: 0x14400006
    ctx->pc = 0x190B40u;
    {
        const bool branch_taken_0x190b40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x190B44u;
        SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
        if (branch_taken_0x190b40) {
            ctx->pc = 0x190B5Cu;
            goto label_190b5c;
        }
    }
    ctx->pc = 0x190B48u;
label_190b48:
    // 0x190b48: 0x3c05ff00
    ctx->pc = 0x190b48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x190b4c: 0xc064ea0
    ctx->pc = 0x190B4Cu;
    SET_GPR_U32(ctx, 31, 0x190B54u);
    ctx->pc = 0x190B50u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3078));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190B54u; }
        else if (ctx->pc != 0x190B54u) { ctx->pc = 0x190B54u; }
    }
    if (ctx->pc != 0x190B54u) { return; }
    ctx->pc = 0x190B54u;
    // 0x190b54: 0x10000021
    ctx->pc = 0x190B54u;
    {
        const bool branch_taken_0x190b54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x190B58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x190b54) {
            ctx->pc = 0x190BDCu;
            goto label_190bdc;
        }
    }
    ctx->pc = 0x190B5Cu;
label_190b5c:
    // 0x190b5c: 0x24eac658
    ctx->pc = 0x190b5cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 7), 4294952536));
    // 0x190b60: 0x69420007
    ctx->pc = 0x190b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x190b64: 0x6d420000
    ctx->pc = 0x190b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x190b68: 0x6948000f
    ctx->pc = 0x190b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x190b6c: 0x6d480008
    ctx->pc = 0x190b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x190b70: 0x69490017
    ctx->pc = 0x190b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x190b74: 0x6d490010
    ctx->pc = 0x190b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x190b78: 0xb0c2000f
    ctx->pc = 0x190b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190b7c: 0xb4c20008
    ctx->pc = 0x190b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190b80: 0xb0c80017
    ctx->pc = 0x190b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190b84: 0xb4c80010
    ctx->pc = 0x190b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190b88: 0xb0c9001f
    ctx->pc = 0x190b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190b8c: 0xb4c90018
    ctx->pc = 0x190b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x190b90: 0x8d420018
    ctx->pc = 0x190b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x190b94: 0xacc20020
    ctx->pc = 0x190b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x190b98: 0x2405ffff
    ctx->pc = 0x190b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190b9c: 0x2463feb8
    ctx->pc = 0x190b9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966968));
    // 0x190ba0: 0x24040001
    ctx->pc = 0x190ba0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x190ba4: 0xacc3003c
    ctx->pc = 0x190ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
    // 0x190ba8: 0xacc40028
    ctx->pc = 0x190ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
    // 0x190bac: 0x102d
    ctx->pc = 0x190bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190bb0: 0xacc50044
    ctx->pc = 0x190bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
    // 0x190bb4: 0xacc00048
    ctx->pc = 0x190bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x190bb8: 0xacc00000
    ctx->pc = 0x190bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x190bbc: 0xacc00004
    ctx->pc = 0x190bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x190bc0: 0xacc50024
    ctx->pc = 0x190bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
    // 0x190bc4: 0xacc0002c
    ctx->pc = 0x190bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x190bc8: 0xacc00030
    ctx->pc = 0x190bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x190bcc: 0xacc00034
    ctx->pc = 0x190bccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x190bd0: 0xacc00038
    ctx->pc = 0x190bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x190bd4: 0xacc00040
    ctx->pc = 0x190bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x190bd8: 0xdfbf0000
    ctx->pc = 0x190bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190bdc:
    // 0x190bdc: 0x3e00008
    ctx->pc = 0x190BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190B48u: goto label_190b48;
            case 0x190B5Cu: goto label_190b5c;
            case 0x190BDCu: goto label_190bdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190BE4u;
}
