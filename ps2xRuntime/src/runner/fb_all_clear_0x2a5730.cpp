#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fb_all_clear
// Address: 0x2a5730 - 0x2a5818
void fb_all_clear_0x2a5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5730u;

    // 0x2a5730: 0x27bdbef0
    ctx->pc = 0x2a5730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294950640));
    // 0x2a5734: 0xffbf4100
    ctx->pc = 0x2a5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16640), GPR_U64(ctx, 31));
    // 0x2a5738: 0xffb340f0
    ctx->pc = 0x2a5738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16624), GPR_U64(ctx, 19));
    // 0x2a573c: 0xffb240e0
    ctx->pc = 0x2a573cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16608), GPR_U64(ctx, 18));
    // 0x2a5740: 0xffb140d0
    ctx->pc = 0x2a5740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16592), GPR_U64(ctx, 17));
    // 0x2a5744: 0xffb040c0
    ctx->pc = 0x2a5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16576), GPR_U64(ctx, 16));
    // 0x2a5748: 0x802d
    ctx->pc = 0x2a5748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a574c: 0x0
    ctx->pc = 0x2a574cu;
    // NOP
label_2a5750:
    // 0x2a5750: 0x101100
    ctx->pc = 0x2a5750u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2a5754: 0x3a21021
    ctx->pc = 0x2a5754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a5758: 0x70001ca9
    ctx->pc = 0x2a5758u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a575c: 0x7c430000
    ctx->pc = 0x2a575cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a5760: 0x26100001
    ctx->pc = 0x2a5760u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a5764: 0x2e020400
    ctx->pc = 0x2a5764u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 1024));
    // 0x2a5768: 0x1440fff9
    ctx->pc = 0x2A5768u;
    {
        const bool branch_taken_0x2a5768 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5768) {
            ctx->pc = 0x2A5750u;
            goto label_2a5750;
        }
    }
    ctx->pc = 0x2A5770u;
    // 0x2a5770: 0xc0c0e18
    ctx->pc = 0x2A5770u;
    SET_GPR_U32(ctx, 31, 0x2A5778u);
    ctx->pc = 0x2A5774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5778u; }
    }
    if (ctx->pc != 0x2A5778u) { return; }
    ctx->pc = 0x2A5778u;
    // 0x2a5778: 0x802d
    ctx->pc = 0x2a5778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a577c: 0x3c130037
    ctx->pc = 0x2a577cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)55 << 16));
    // 0x2a5780: 0x3c120037
    ctx->pc = 0x2a5780u;
    SET_GPR_U32(ctx, 18, ((uint32_t)55 << 16));
    // 0x2a5784: 0x3c11003b
    ctx->pc = 0x2a5784u;
    SET_GPR_U32(ctx, 17, ((uint32_t)59 << 16));
    // 0x2a5788: 0x102d00
    ctx->pc = 0x2a5788u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 20));
    // 0x2a578c: 0x0
    ctx->pc = 0x2a578cu;
    // NOP
label_2a5790:
    // 0x2a5790: 0x27a44060
    ctx->pc = 0x2a5790u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16480));
    // 0x2a5794: 0x52c03
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a5798: 0x24060004
    ctx->pc = 0x2a5798u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a579c: 0x382d
    ctx->pc = 0x2a579cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57a0: 0x402d
    ctx->pc = 0x2a57a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57a4: 0x482d
    ctx->pc = 0x2a57a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57a8: 0x240a0020
    ctx->pc = 0x2a57a8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a57ac: 0xc0b83fe
    ctx->pc = 0x2A57ACu;
    SET_GPR_U32(ctx, 31, 0x2A57B4u);
    ctx->pc = 0x2A57B0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2E0FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x2e0ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57B4u; }
    }
    if (ctx->pc != 0x2A57B4u) { return; }
    ctx->pc = 0x2A57B4u;
    // 0x2a57b4: 0x8e628000
    ctx->pc = 0x2a57b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294934528)));
    // 0x2a57b8: 0x10400004
    ctx->pc = 0x2A57B8u;
    {
        const bool branch_taken_0x2a57b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A57BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16480));
        if (branch_taken_0x2a57b8) {
            ctx->pc = 0x2A57CCu;
            goto label_2a57cc;
        }
    }
    ctx->pc = 0x2A57C0u;
    // 0x2a57c0: 0xc0c0e18
    ctx->pc = 0x2A57C0u;
    SET_GPR_U32(ctx, 31, 0x2A57C8u);
    ctx->pc = 0x2A57C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57C8u; }
    }
    if (ctx->pc != 0x2A57C8u) { return; }
    ctx->pc = 0x2A57C8u;
    // 0x2a57c8: 0x27a44060
    ctx->pc = 0x2a57c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16480));
label_2a57cc:
    // 0x2a57cc: 0xc0b8478
    ctx->pc = 0x2A57CCu;
    SET_GPR_U32(ctx, 31, 0x2A57D4u);
    ctx->pc = 0x2A57D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E11E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecLoadImage_0x2e11e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57D4u; }
    }
    if (ctx->pc != 0x2A57D4u) { return; }
    ctx->pc = 0x2A57D4u;
    // 0x2a57d4: 0x8e428004
    ctx->pc = 0x2a57d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294934532)));
    // 0x2a57d8: 0x10400004
    ctx->pc = 0x2A57D8u;
    {
        const bool branch_taken_0x2a57d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A57DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a57d8) {
            ctx->pc = 0x2A57ECu;
            goto label_2a57ec;
        }
    }
    ctx->pc = 0x2A57E0u;
    // 0x2a57e0: 0x282d
    ctx->pc = 0x2a57e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57e4: 0xc0aa02e
    ctx->pc = 0x2A57E4u;
    SET_GPR_U32(ctx, 31, 0x2A57ECu);
    ctx->pc = 0x2A57E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294961968));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A57ECu; }
    }
    if (ctx->pc != 0x2A57ECu) { return; }
    ctx->pc = 0x2A57ECu;
label_2a57ec:
    // 0x2a57ec: 0x26100001
    ctx->pc = 0x2a57ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a57f0: 0x2e021000
    ctx->pc = 0x2a57f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 4096));
    // 0x2a57f4: 0x1440ffe6
    ctx->pc = 0x2A57F4u;
    {
        const bool branch_taken_0x2a57f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A57F8u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 20));
        if (branch_taken_0x2a57f4) {
            ctx->pc = 0x2A5790u;
            goto label_2a5790;
        }
    }
    ctx->pc = 0x2A57FCu;
    // 0x2a57fc: 0xdfbf4100
    ctx->pc = 0x2a57fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16640)));
    // 0x2a5800: 0xdfb340f0
    ctx->pc = 0x2a5800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16624)));
    // 0x2a5804: 0xdfb240e0
    ctx->pc = 0x2a5804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16608)));
    // 0x2a5808: 0xdfb140d0
    ctx->pc = 0x2a5808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16592)));
    // 0x2a580c: 0xdfb040c0
    ctx->pc = 0x2a580cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16576)));
    // 0x2a5810: 0x3e00008
    ctx->pc = 0x2A5810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5750u: goto label_2a5750;
            case 0x2A5790u: goto label_2a5790;
            case 0x2A57CCu: goto label_2a57cc;
            case 0x2A57ECu: goto label_2a57ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5818u;
}
