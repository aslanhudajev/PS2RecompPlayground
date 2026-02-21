#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: scmd_prechk
// Address: 0x2f6680 - 0x2f67f0
void scmd_prechk_0x2f6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f6680u;

    // 0x2f6680: 0x27bdffc0
    ctx->pc = 0x2f6680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6684: 0xffb10010
    ctx->pc = 0x2f6684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f6688: 0xffb00000
    ctx->pc = 0x2f6688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f668c: 0x80882d
    ctx->pc = 0x2f668cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6690: 0xffbf0030
    ctx->pc = 0x2f6690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f6694: 0x3c10003a
    ctx->pc = 0x2f6694u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f6698: 0xc0bd444
    ctx->pc = 0x2F6698u;
    SET_GPR_U32(ctx, 31, 0x2F66A0u);
    ctx->pc = 0x2F669Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x2F5110u;
    {
        const uint32_t __entryPc = ctx->pc;
        cmd_sem_init_0x2f5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F66A0u; }
    }
    if (ctx->pc != 0x2F66A0u) { return; }
    ctx->pc = 0x2F66A0u;
    // 0x2f66a0: 0x8e043ab4
    ctx->pc = 0x2f66a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15028)));
    // 0x2f66a4: 0xc0c0d8c
    ctx->pc = 0x2F66A4u;
    SET_GPR_U32(ctx, 31, 0x2F66ACu);
    ctx->pc = 0x303630u;
    {
        const uint32_t __entryPc = ctx->pc;
        PollSema_0x303630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F66ACu; }
    }
    if (ctx->pc != 0x2F66ACu) { return; }
    ctx->pc = 0x2F66ACu;
    // 0x2f66ac: 0x8e033ab4
    ctx->pc = 0x2f66acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15028)));
    // 0x2f66b0: 0x1062000b
    ctx->pc = 0x2F66B0u;
    {
        const bool branch_taken_0x2f66b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2F66B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f66b0) {
            ctx->pc = 0x2F66E0u;
            goto label_2f66e0;
        }
    }
    ctx->pc = 0x2F66B8u;
    // 0x2f66b8: 0x8c433aa0
    ctx->pc = 0x2f66b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15008)));
    // 0x2f66bc: 0x18600016
    ctx->pc = 0x2F66BCu;
    {
        const bool branch_taken_0x2f66bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F66C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f66bc) {
            ctx->pc = 0x2F6718u;
            goto label_2f6718;
        }
    }
    ctx->pc = 0x2F66C4u;
    // 0x2f66c4: 0x3c04003c
    ctx->pc = 0x2f66c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f66c8: 0x8c463aa4
    ctx->pc = 0x2f66c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 15012)));
    // 0x2f66cc: 0x2484a348
    ctx->pc = 0x2f66ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943560));
    // 0x2f66d0: 0xc0bed0a
    ctx->pc = 0x2F66D0u;
    SET_GPR_U32(ctx, 31, 0x2F66D8u);
    ctx->pc = 0x2F66D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F66D8u; }
    }
    if (ctx->pc != 0x2F66D8u) { return; }
    ctx->pc = 0x2F66D8u;
    // 0x2f66d8: 0x1000003f
    ctx->pc = 0x2F66D8u;
    {
        const bool branch_taken_0x2f66d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F66DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f66d8) {
            ctx->pc = 0x2F67D8u;
            goto label_2f67d8;
        }
    }
    ctx->pc = 0x2F66E0u;
label_2f66e0:
    // 0x2f66e0: 0x3c02003e
    ctx->pc = 0x2f66e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2f66e4: 0x3c03003a
    ctx->pc = 0x2f66e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f66e8: 0x8c442840
    ctx->pc = 0x2f66e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 10304)));
    // 0x2f66ec: 0x3c05003e
    ctx->pc = 0x2f66ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)62 << 16));
    // 0x2f66f0: 0xac713aa4
    ctx->pc = 0x2f66f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15012), GPR_U32(ctx, 17));
    // 0x2f66f4: 0xc0c0d38
    ctx->pc = 0x2F66F4u;
    SET_GPR_U32(ctx, 31, 0x2F66FCu);
    ctx->pc = 0x2F66F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 10312));
    ctx->pc = 0x3034E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x3034e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F66FCu; }
    }
    if (ctx->pc != 0x2F66FCu) { return; }
    ctx->pc = 0x2F66FCu;
    // 0x2f66fc: 0xc0bd986
    ctx->pc = 0x2F66FCu;
    SET_GPR_U32(ctx, 31, 0x2F6704u);
    ctx->pc = 0x2F6700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F6618u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSyncS_0x2f6618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6704u; }
    }
    if (ctx->pc != 0x2F6704u) { return; }
    ctx->pc = 0x2F6704u;
    // 0x2f6704: 0x10400006
    ctx->pc = 0x2F6704u;
    {
        const bool branch_taken_0x2f6704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F6708u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f6704) {
            ctx->pc = 0x2F6720u;
            goto label_2f6720;
        }
    }
    ctx->pc = 0x2F670Cu;
    // 0x2f670c: 0x8e043ab4
    ctx->pc = 0x2f670cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 15028)));
    // 0x2f6710: 0xc0c0d80
    ctx->pc = 0x2F6710u;
    SET_GPR_U32(ctx, 31, 0x2F6718u);
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6718u; }
    }
    if (ctx->pc != 0x2F6718u) { return; }
    ctx->pc = 0x2F6718u;
label_2f6718:
    // 0x2f6718: 0x1000002f
    ctx->pc = 0x2F6718u;
    {
        const bool branch_taken_0x2f6718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F671Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f6718) {
            ctx->pc = 0x2F67D8u;
            goto label_2f67d8;
        }
    }
    ctx->pc = 0x2F6720u;
label_2f6720:
    // 0x2f6720: 0xc0c1692
    ctx->pc = 0x2F6720u;
    SET_GPR_U32(ctx, 31, 0x2F6728u);
    ctx->pc = 0x2F6724u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    ctx->pc = 0x305A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x305a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6728u; }
    }
    if (ctx->pc != 0x2F6728u) { return; }
    ctx->pc = 0x2F6728u;
    // 0x2f6728: 0x8e423ad4
    ctx->pc = 0x2f6728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 15060)));
    // 0x2f672c: 0x441002a
    ctx->pc = 0x2F672Cu;
    {
        const bool branch_taken_0x2f672c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6730u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f672c) {
            ctx->pc = 0x2F67D8u;
            goto label_2f67d8;
        }
    }
    ctx->pc = 0x2F6734u;
    // 0x2f6734: 0x1000000b
    ctx->pc = 0x2F6734u;
    {
        const bool branch_taken_0x2f6734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F6738u;
        SET_GPR_U32(ctx, 17, ((uint32_t)62 << 16));
        if (branch_taken_0x2f6734) {
            ctx->pc = 0x2F6764u;
            goto label_2f6764;
        }
    }
    ctx->pc = 0x2F673Cu;
    // 0x2f673c: 0x0
    ctx->pc = 0x2f673cu;
    // NOP
label_2f6740:
    // 0x2f6740: 0x3c020010
    ctx->pc = 0x2f6740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x2f6744: 0x2403ffff
    ctx->pc = 0x2f6744u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6748:
    // 0x2f6748: 0x2442ffff
    ctx->pc = 0x2f6748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f674c: 0x0
    ctx->pc = 0x2f674cu;
    // NOP
    // 0x2f6750: 0x0
    ctx->pc = 0x2f6750u;
    // NOP
    // 0x2f6754: 0x0
    ctx->pc = 0x2f6754u;
    // NOP
    // 0x2f6758: 0x0
    ctx->pc = 0x2f6758u;
    // NOP
    // 0x2f675c: 0x1443fffa
    ctx->pc = 0x2F675Cu;
    {
        const bool branch_taken_0x2f675c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2f675c) {
            ctx->pc = 0x2F6748u;
            goto label_2f6748;
        }
    }
    ctx->pc = 0x2F6764u;
label_2f6764:
    // 0x2f6764: 0x26303ca0
    ctx->pc = 0x2f6764u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 15520));
label_2f6768:
    // 0x2f6768: 0x3c058000
    ctx->pc = 0x2f6768u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x2f676c: 0x200202d
    ctx->pc = 0x2f676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6770: 0x34a50593
    ctx->pc = 0x2f6770u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1427));
    // 0x2f6774: 0xc0c1836
    ctx->pc = 0x2F6774u;
    SET_GPR_U32(ctx, 31, 0x2F677Cu);
    ctx->pc = 0x2F6778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3060D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x3060d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F677Cu; }
    }
    if (ctx->pc != 0x2F677Cu) { return; }
    ctx->pc = 0x2F677Cu;
    // 0x2f677c: 0x4430013
    ctx->pc = 0x2F677Cu;
    {
        const bool branch_taken_0x2f677c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f677c) {
            ctx->pc = 0x2F6780u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2F67CCu;
            goto label_2f67cc;
        }
    }
    ctx->pc = 0x2F6784u;
    // 0x2f6784: 0x3c02003a
    ctx->pc = 0x2f6784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f6788: 0x8c433aa0
    ctx->pc = 0x2f6788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15008)));
    // 0x2f678c: 0x18600005
    ctx->pc = 0x2F678Cu;
    {
        const bool branch_taken_0x2f678c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F6790u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x2f678c) {
            ctx->pc = 0x2F67A4u;
            goto label_2f67a4;
        }
    }
    ctx->pc = 0x2F6794u;
    // 0x2f6794: 0x3c04003c
    ctx->pc = 0x2f6794u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f6798: 0xc0bed0a
    ctx->pc = 0x2F6798u;
    SET_GPR_U32(ctx, 31, 0x2F67A0u);
    ctx->pc = 0x2F679Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943600));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F67A0u; }
    }
    if (ctx->pc != 0x2F67A0u) { return; }
    ctx->pc = 0x2F67A0u;
    // 0x2f67a0: 0x3c020010
    ctx->pc = 0x2f67a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_2f67a4:
    // 0x2f67a4: 0x2403ffff
    ctx->pc = 0x2f67a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f67a8:
    // 0x2f67a8: 0x2442ffff
    ctx->pc = 0x2f67a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f67ac: 0x0
    ctx->pc = 0x2f67acu;
    // NOP
    // 0x2f67b0: 0x0
    ctx->pc = 0x2f67b0u;
    // NOP
    // 0x2f67b4: 0x0
    ctx->pc = 0x2f67b4u;
    // NOP
    // 0x2f67b8: 0x0
    ctx->pc = 0x2f67b8u;
    // NOP
    // 0x2f67bc: 0x1443fffa
    ctx->pc = 0x2F67BCu;
    {
        const bool branch_taken_0x2f67bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2f67bc) {
            ctx->pc = 0x2F67A8u;
            goto label_2f67a8;
        }
    }
    ctx->pc = 0x2F67C4u;
    // 0x2f67c4: 0x1000ffe8
    ctx->pc = 0x2F67C4u;
    {
        const bool branch_taken_0x2f67c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F67C8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 15520));
        if (branch_taken_0x2f67c4) {
            ctx->pc = 0x2F6768u;
            goto label_2f6768;
        }
    }
    ctx->pc = 0x2F67CCu;
label_2f67cc:
    // 0x2f67cc: 0x1040ffdc
    ctx->pc = 0x2F67CCu;
    {
        const bool branch_taken_0x2f67cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F67D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f67cc) {
            ctx->pc = 0x2F6740u;
            goto label_2f6740;
        }
    }
    ctx->pc = 0x2F67D4u;
    // 0x2f67d4: 0xae403ad4
    ctx->pc = 0x2f67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15060), GPR_U32(ctx, 0));
label_2f67d8:
    // 0x2f67d8: 0xdfbf0030
    ctx->pc = 0x2f67d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f67dc: 0xdfb20020
    ctx->pc = 0x2f67dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f67e0: 0xdfb10010
    ctx->pc = 0x2f67e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f67e4: 0xdfb00000
    ctx->pc = 0x2f67e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f67e8: 0x3e00008
    ctx->pc = 0x2F67E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F67ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F66E0u: goto label_2f66e0;
            case 0x2F6718u: goto label_2f6718;
            case 0x2F6720u: goto label_2f6720;
            case 0x2F6740u: goto label_2f6740;
            case 0x2F6748u: goto label_2f6748;
            case 0x2F6764u: goto label_2f6764;
            case 0x2F6768u: goto label_2f6768;
            case 0x2F67A4u: goto label_2f67a4;
            case 0x2F67A8u: goto label_2f67a8;
            case 0x2F67CCu: goto label_2f67cc;
            case 0x2F67D8u: goto label_2f67d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F67F0u;
}
