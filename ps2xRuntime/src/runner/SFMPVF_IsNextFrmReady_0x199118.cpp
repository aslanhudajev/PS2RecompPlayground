#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_IsNextFrmReady
// Address: 0x199118 - 0x199234
void SFMPVF_IsNextFrmReady_0x199118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_IsNextFrmReady");


    ctx->pc = 0x199118u;

    // 0x199118: 0x27bdff70
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19911c: 0xffb30040
    ctx->pc = 0x19911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x199120: 0x80982d
    ctx->pc = 0x199120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199124: 0xffb40050
    ctx->pc = 0x199124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x199128: 0xffb10020
    ctx->pc = 0x199128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19912c: 0x3a0202d
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199130: 0xffb00010
    ctx->pc = 0x199130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x199134: 0xa02d
    ctx->pc = 0x199134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199138: 0xffbf0080
    ctx->pc = 0x199138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19913c: 0x26703810
    ctx->pc = 0x19913cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 14352));
    // 0x199140: 0xffb60070
    ctx->pc = 0x199140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x199144: 0x882d
    ctx->pc = 0x199144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199148: 0xffb50060
    ctx->pc = 0x199148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x19914c: 0xc064f3a
    ctx->pc = 0x19914Cu;
    SET_GPR_U32(ctx, 31, 0x199154u);
    ctx->pc = 0x199150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199154u; }
        else if (ctx->pc != 0x199154u) { ctx->pc = 0x199154u; }
    }
    if (ctx->pc != 0x199154u) { return; }
    ctx->pc = 0x199154u;
    // 0x199154: 0x8e62380c
    ctx->pc = 0x199154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 14348)));
    // 0x199158: 0x18400018
    ctx->pc = 0x199158u;
    {
        const bool branch_taken_0x199158 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x199158) {
            ctx->pc = 0x1991BCu;
            goto label_1991bc;
        }
    }
    ctx->pc = 0x199160u;
    // 0x199160: 0x40902d
    ctx->pc = 0x199160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199164: 0x24160002
    ctx->pc = 0x199164u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x199168: 0x24150004
    ctx->pc = 0x199168u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19916c: 0x0
    ctx->pc = 0x19916cu;
    // NOP
label_199170:
    // 0x199170: 0x8e020000
    ctx->pc = 0x199170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199174: 0x10560004
    ctx->pc = 0x199174u;
    {
        const bool branch_taken_0x199174 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 22));
        ctx->pc = 0x199178u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x199174) {
            ctx->pc = 0x199188u;
            goto label_199188;
        }
    }
    ctx->pc = 0x19917Cu;
    // 0x19917c: 0x5455000d
    ctx->pc = 0x19917Cu;
    {
        const bool branch_taken_0x19917c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x19917c) {
            ctx->pc = 0x199180u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x1991B4u;
            goto label_1991b4;
        }
    }
    ctx->pc = 0x199184u;
    // 0x199184: 0x280202d
    ctx->pc = 0x199184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199188:
    // 0x199188: 0xc06648e
    ctx->pc = 0x199188u;
    SET_GPR_U32(ctx, 31, 0x199190u);
    ctx->pc = 0x19918Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199238u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvf_IsChkFirst_0x199238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199190u; }
        else if (ctx->pc != 0x199190u) { ctx->pc = 0x199190u; }
    }
    if (ctx->pc != 0x199190u) { return; }
    ctx->pc = 0x199190u;
    // 0x199190: 0x10400004
    ctx->pc = 0x199190u;
    {
        const bool branch_taken_0x199190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x199194u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x199190) {
            ctx->pc = 0x1991A4u;
            goto label_1991a4;
        }
    }
    ctx->pc = 0x199198u;
    // 0x199198: 0x280882d
    ctx->pc = 0x199198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19919c: 0x10000004
    ctx->pc = 0x19919Cu;
    {
        const bool branch_taken_0x19919c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1991A0u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19919c) {
            ctx->pc = 0x1991B0u;
            goto label_1991b0;
        }
    }
    ctx->pc = 0x1991A4u;
label_1991a4:
    // 0x1991a4: 0xc06648e
    ctx->pc = 0x1991A4u;
    SET_GPR_U32(ctx, 31, 0x1991ACu);
    ctx->pc = 0x1991A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199238u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvf_IsChkFirst_0x199238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991ACu; }
        else if (ctx->pc != 0x1991ACu) { ctx->pc = 0x1991ACu; }
    }
    if (ctx->pc != 0x1991ACu) { return; }
    ctx->pc = 0x1991ACu;
    // 0x1991ac: 0x202880b
    ctx->pc = 0x1991acu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
label_1991b0:
    // 0x1991b0: 0x2652ffff
    ctx->pc = 0x1991b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_1991b4:
    // 0x1991b4: 0x1640ffee
    ctx->pc = 0x1991B4u;
    {
        const bool branch_taken_0x1991b4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1991B8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x1991b4) {
            ctx->pc = 0x199170u;
            goto label_199170;
        }
    }
    ctx->pc = 0x1991BCu;
label_1991bc:
    // 0x1991bc: 0x12200004
    ctx->pc = 0x1991BCu;
    {
        const bool branch_taken_0x1991bc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1991C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1991bc) {
            ctx->pc = 0x1991D0u;
            goto label_1991d0;
        }
    }
    ctx->pc = 0x1991C4u;
    // 0x1991c4: 0x8e630040
    ctx->pc = 0x1991c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1991c8: 0x10620003
    ctx->pc = 0x1991C8u;
    {
        const bool branch_taken_0x1991c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1991CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1991c8) {
            ctx->pc = 0x1991D8u;
            goto label_1991d8;
        }
    }
    ctx->pc = 0x1991D0u;
label_1991d0:
    // 0x1991d0: 0x1000000b
    ctx->pc = 0x1991D0u;
    {
        const bool branch_taken_0x1991d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1991D4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1991d0) {
            ctx->pc = 0x199200u;
            goto label_199200;
        }
    }
    ctx->pc = 0x1991D8u;
label_1991d8:
    // 0x1991d8: 0xc0674c2
    ctx->pc = 0x1991D8u;
    SET_GPR_U32(ctx, 31, 0x1991E0u);
    ctx->pc = 0x1991DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991E0u; }
        else if (ctx->pc != 0x1991E0u) { ctx->pc = 0x1991E0u; }
    }
    if (ctx->pc != 0x1991E0u) { return; }
    ctx->pc = 0x1991E0u;
    // 0x1991e0: 0x54400003
    ctx->pc = 0x1991E0u;
    {
        const bool branch_taken_0x1991e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1991e0) {
            ctx->pc = 0x1991E4u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x1991F0u;
            goto label_1991f0;
        }
    }
    ctx->pc = 0x1991E8u;
    // 0x1991e8: 0x10000005
    ctx->pc = 0x1991E8u;
    {
        const bool branch_taken_0x1991e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1991ECu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1991e8) {
            ctx->pc = 0x199200u;
            goto label_199200;
        }
    }
    ctx->pc = 0x1991F0u;
label_1991f0:
    // 0x1991f0: 0x260202d
    ctx->pc = 0x1991f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991f4: 0xc0679ec
    ctx->pc = 0x1991F4u;
    SET_GPR_U32(ctx, 31, 0x1991FCu);
    ctx->pc = 0x1991F8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x19E7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_IsGetFrmTimeTunit_0x19e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1991FCu; }
        else if (ctx->pc != 0x1991FCu) { ctx->pc = 0x1991FCu; }
    }
    if (ctx->pc != 0x1991FCu) { return; }
    ctx->pc = 0x1991FCu;
    // 0x1991fc: 0x2802b
    ctx->pc = 0x1991fcu;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_199200:
    // 0x199200: 0xc064f44
    ctx->pc = 0x199200u;
    SET_GPR_U32(ctx, 31, 0x199208u);
    ctx->pc = 0x199204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199208u; }
        else if (ctx->pc != 0x199208u) { ctx->pc = 0x199208u; }
    }
    if (ctx->pc != 0x199208u) { return; }
    ctx->pc = 0x199208u;
    // 0x199208: 0x200102d
    ctx->pc = 0x199208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19920c: 0xdfbf0080
    ctx->pc = 0x19920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x199210: 0xdfb60070
    ctx->pc = 0x199210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199214: 0xdfb50060
    ctx->pc = 0x199214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199218: 0xdfb40050
    ctx->pc = 0x199218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19921c: 0xdfb30040
    ctx->pc = 0x19921cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199220: 0xdfb20030
    ctx->pc = 0x199220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199224: 0xdfb10020
    ctx->pc = 0x199224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199228: 0xdfb00010
    ctx->pc = 0x199228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19922c: 0x3e00008
    ctx->pc = 0x19922Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199170u: goto label_199170;
            case 0x199188u: goto label_199188;
            case 0x1991A4u: goto label_1991a4;
            case 0x1991B0u: goto label_1991b0;
            case 0x1991B4u: goto label_1991b4;
            case 0x1991BCu: goto label_1991bc;
            case 0x1991D0u: goto label_1991d0;
            case 0x1991D8u: goto label_1991d8;
            case 0x1991F0u: goto label_1991f0;
            case 0x199200u: goto label_199200;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199234u;
}
