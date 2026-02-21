#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ncmd_prechk
// Address: 0x2f5770 - 0x2f58e0
void ncmd_prechk_0x2f5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f5770u;

    // 0x2f5770: 0x27bdffc0
    ctx->pc = 0x2f5770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5774: 0xffb10010
    ctx->pc = 0x2f5774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f5778: 0xffb00000
    ctx->pc = 0x2f5778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f577c: 0x80882d
    ctx->pc = 0x2f577cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5780: 0xffbf0030
    ctx->pc = 0x2f5780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f5784: 0x3c10003a
    ctx->pc = 0x2f5784u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f5788: 0xc0bd444
    ctx->pc = 0x2F5788u;
    SET_GPR_U32(ctx, 31, 0x2F5790u);
    ctx->pc = 0x2F578Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x2F5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        cmd_sem_init_0x2f5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5790u; }
    }
    if (ctx->pc != 0x2F5790u) { return; }
    ctx->pc = 0x2F5790u;
    // 0x2f5790: 0x8e043ab0
    ctx->pc = 0x2f5790u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15024)));
    // 0x2f5794: 0xc0c0d8c
    ctx->pc = 0x2F5794u;
    SET_GPR_U32(ctx, 31, 0x2F579Cu);
    ctx->pc = 0x303630u;
    {
        const uint32_t __entryPc = ctx->pc;
        PollSema_0x303630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F579Cu; }
    }
    if (ctx->pc != 0x2F579Cu) { return; }
    ctx->pc = 0x2F579Cu;
    // 0x2f579c: 0x8e033ab0
    ctx->pc = 0x2f579cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15024)));
    // 0x2f57a0: 0x1062000b
    ctx->pc = 0x2F57A0u;
    {
        const bool branch_taken_0x2f57a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2F57A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f57a0) {
            ctx->pc = 0x2F57D0u;
            goto label_2f57d0;
        }
    }
    ctx->pc = 0x2F57A8u;
    // 0x2f57a8: 0x8c433aa0
    ctx->pc = 0x2f57a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15008)));
    // 0x2f57ac: 0x18600016
    ctx->pc = 0x2F57ACu;
    {
        const bool branch_taken_0x2f57ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F57B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f57ac) {
            ctx->pc = 0x2F5808u;
            goto label_2f5808;
        }
    }
    ctx->pc = 0x2F57B4u;
    // 0x2f57b4: 0x3c04003c
    ctx->pc = 0x2f57b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f57b8: 0x8c463aa8
    ctx->pc = 0x2f57b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 15016)));
    // 0x2f57bc: 0x2484a248
    ctx->pc = 0x2f57bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943304));
    // 0x2f57c0: 0xc0bed0a
    ctx->pc = 0x2F57C0u;
    SET_GPR_U32(ctx, 31, 0x2F57C8u);
    ctx->pc = 0x2F57C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F57C8u; }
    }
    if (ctx->pc != 0x2F57C8u) { return; }
    ctx->pc = 0x2F57C8u;
    // 0x2f57c8: 0x1000003f
    ctx->pc = 0x2F57C8u;
    {
        const bool branch_taken_0x2f57c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F57CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f57c8) {
            ctx->pc = 0x2F58C8u;
            goto label_2f58c8;
        }
    }
    ctx->pc = 0x2F57D0u;
label_2f57d0:
    // 0x2f57d0: 0x3c02003e
    ctx->pc = 0x2f57d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2f57d4: 0x3c03003a
    ctx->pc = 0x2f57d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f57d8: 0x8c442840
    ctx->pc = 0x2f57d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 10304)));
    // 0x2f57dc: 0x3c05003e
    ctx->pc = 0x2f57dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)62 << 16));
    // 0x2f57e0: 0xac713aa8
    ctx->pc = 0x2f57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15016), GPR_U32(ctx, 17));
    // 0x2f57e4: 0xc0c0d38
    ctx->pc = 0x2F57E4u;
    SET_GPR_U32(ctx, 31, 0x2F57ECu);
    ctx->pc = 0x2F57E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 10312));
    ctx->pc = 0x3034E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x3034e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F57ECu; }
    }
    if (ctx->pc != 0x2F57ECu) { return; }
    ctx->pc = 0x2F57ECu;
    // 0x2f57ec: 0xc0bd95c
    ctx->pc = 0x2F57ECu;
    SET_GPR_U32(ctx, 31, 0x2F57F4u);
    ctx->pc = 0x2F57F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F6570u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x2f6570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F57F4u; }
    }
    if (ctx->pc != 0x2F57F4u) { return; }
    ctx->pc = 0x2F57F4u;
    // 0x2f57f4: 0x10400006
    ctx->pc = 0x2F57F4u;
    {
        const bool branch_taken_0x2f57f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F57F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f57f4) {
            ctx->pc = 0x2F5810u;
            goto label_2f5810;
        }
    }
    ctx->pc = 0x2F57FCu;
    // 0x2f57fc: 0x8e043ab0
    ctx->pc = 0x2f57fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15024)));
    // 0x2f5800: 0xc0c0d80
    ctx->pc = 0x2F5800u;
    SET_GPR_U32(ctx, 31, 0x2F5808u);
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5808u; }
    }
    if (ctx->pc != 0x2F5808u) { return; }
    ctx->pc = 0x2F5808u;
label_2f5808:
    // 0x2f5808: 0x1000002f
    ctx->pc = 0x2F5808u;
    {
        const bool branch_taken_0x2f5808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F580Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f5808) {
            ctx->pc = 0x2F58C8u;
            goto label_2f58c8;
        }
    }
    ctx->pc = 0x2F5810u;
label_2f5810:
    // 0x2f5810: 0xc0c1692
    ctx->pc = 0x2F5810u;
    SET_GPR_U32(ctx, 31, 0x2F5818u);
    ctx->pc = 0x2F5814u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    ctx->pc = 0x305A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x305a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5818u; }
    }
    if (ctx->pc != 0x2F5818u) { return; }
    ctx->pc = 0x2F5818u;
    // 0x2f5818: 0x8e423acc
    ctx->pc = 0x2f5818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 15052)));
    // 0x2f581c: 0x441002a
    ctx->pc = 0x2F581Cu;
    {
        const bool branch_taken_0x2f581c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F5820u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f581c) {
            ctx->pc = 0x2F58C8u;
            goto label_2f58c8;
        }
    }
    ctx->pc = 0x2F5824u;
    // 0x2f5824: 0x1000000b
    ctx->pc = 0x2F5824u;
    {
        const bool branch_taken_0x2f5824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F5828u;
        SET_GPR_U32(ctx, 17, ((uint32_t)62 << 16));
        if (branch_taken_0x2f5824) {
            ctx->pc = 0x2F5854u;
            goto label_2f5854;
        }
    }
    ctx->pc = 0x2F582Cu;
    // 0x2f582c: 0x0
    ctx->pc = 0x2f582cu;
    // NOP
label_2f5830:
    // 0x2f5830: 0x3c020010
    ctx->pc = 0x2f5830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x2f5834: 0x2403ffff
    ctx->pc = 0x2f5834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f5838:
    // 0x2f5838: 0x2442ffff
    ctx->pc = 0x2f5838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f583c: 0x0
    ctx->pc = 0x2f583cu;
    // NOP
    // 0x2f5840: 0x0
    ctx->pc = 0x2f5840u;
    // NOP
    // 0x2f5844: 0x0
    ctx->pc = 0x2f5844u;
    // NOP
    // 0x2f5848: 0x0
    ctx->pc = 0x2f5848u;
    // NOP
    // 0x2f584c: 0x1443fffa
    ctx->pc = 0x2F584Cu;
    {
        const bool branch_taken_0x2f584c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2f584c) {
            ctx->pc = 0x2F5838u;
            goto label_2f5838;
        }
    }
    ctx->pc = 0x2F5854u;
label_2f5854:
    // 0x2f5854: 0x26302b40
    ctx->pc = 0x2f5854u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 11072));
label_2f5858:
    // 0x2f5858: 0x3c058000
    ctx->pc = 0x2f5858u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f585c: 0x200202d
    ctx->pc = 0x2f585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5860: 0x34a50595
    ctx->pc = 0x2f5860u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1429));
    // 0x2f5864: 0xc0c1836
    ctx->pc = 0x2F5864u;
    SET_GPR_U32(ctx, 31, 0x2F586Cu);
    ctx->pc = 0x2F5868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3060D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x3060d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F586Cu; }
    }
    if (ctx->pc != 0x2F586Cu) { return; }
    ctx->pc = 0x2F586Cu;
    // 0x2f586c: 0x4430013
    ctx->pc = 0x2F586Cu;
    {
        const bool branch_taken_0x2f586c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f586c) {
            ctx->pc = 0x2F5870u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2F58BCu;
            goto label_2f58bc;
        }
    }
    ctx->pc = 0x2F5874u;
    // 0x2f5874: 0x3c02003a
    ctx->pc = 0x2f5874u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f5878: 0x8c433aa0
    ctx->pc = 0x2f5878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15008)));
    // 0x2f587c: 0x18600005
    ctx->pc = 0x2F587Cu;
    {
        const bool branch_taken_0x2f587c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F5880u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x2f587c) {
            ctx->pc = 0x2F5894u;
            goto label_2f5894;
        }
    }
    ctx->pc = 0x2F5884u;
    // 0x2f5884: 0x3c04003c
    ctx->pc = 0x2f5884u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f5888: 0xc0bed0a
    ctx->pc = 0x2F5888u;
    SET_GPR_U32(ctx, 31, 0x2F5890u);
    ctx->pc = 0x2F588Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943344));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5890u; }
    }
    if (ctx->pc != 0x2F5890u) { return; }
    ctx->pc = 0x2F5890u;
    // 0x2f5890: 0x3c020010
    ctx->pc = 0x2f5890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_2f5894:
    // 0x2f5894: 0x2403ffff
    ctx->pc = 0x2f5894u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f5898:
    // 0x2f5898: 0x2442ffff
    ctx->pc = 0x2f5898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f589c: 0x0
    ctx->pc = 0x2f589cu;
    // NOP
    // 0x2f58a0: 0x0
    ctx->pc = 0x2f58a0u;
    // NOP
    // 0x2f58a4: 0x0
    ctx->pc = 0x2f58a4u;
    // NOP
    // 0x2f58a8: 0x0
    ctx->pc = 0x2f58a8u;
    // NOP
    // 0x2f58ac: 0x1443fffa
    ctx->pc = 0x2F58ACu;
    {
        const bool branch_taken_0x2f58ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2f58ac) {
            ctx->pc = 0x2F5898u;
            goto label_2f5898;
        }
    }
    ctx->pc = 0x2F58B4u;
    // 0x2f58b4: 0x1000ffe8
    ctx->pc = 0x2F58B4u;
    {
        const bool branch_taken_0x2f58b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F58B8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 11072));
        if (branch_taken_0x2f58b4) {
            ctx->pc = 0x2F5858u;
            goto label_2f5858;
        }
    }
    ctx->pc = 0x2F58BCu;
label_2f58bc:
    // 0x2f58bc: 0x1040ffdc
    ctx->pc = 0x2F58BCu;
    {
        const bool branch_taken_0x2f58bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F58C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f58bc) {
            ctx->pc = 0x2F5830u;
            goto label_2f5830;
        }
    }
    ctx->pc = 0x2F58C4u;
    // 0x2f58c4: 0xae403acc
    ctx->pc = 0x2f58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15052), GPR_U32(ctx, 0));
label_2f58c8:
    // 0x2f58c8: 0xdfbf0030
    ctx->pc = 0x2f58c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f58cc: 0xdfb20020
    ctx->pc = 0x2f58ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f58d0: 0xdfb10010
    ctx->pc = 0x2f58d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f58d4: 0xdfb00000
    ctx->pc = 0x2f58d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f58d8: 0x3e00008
    ctx->pc = 0x2F58D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F58DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F57D0u: goto label_2f57d0;
            case 0x2F5808u: goto label_2f5808;
            case 0x2F5810u: goto label_2f5810;
            case 0x2F5830u: goto label_2f5830;
            case 0x2F5838u: goto label_2f5838;
            case 0x2F5854u: goto label_2f5854;
            case 0x2F5858u: goto label_2f5858;
            case 0x2F5894u: goto label_2f5894;
            case 0x2F5898u: goto label_2f5898;
            case 0x2F58BCu: goto label_2f58bc;
            case 0x2F58C8u: goto label_2f58c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F58E0u;
}
