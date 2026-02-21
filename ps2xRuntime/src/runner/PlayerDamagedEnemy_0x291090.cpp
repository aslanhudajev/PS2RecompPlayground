#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerDamagedEnemy
// Address: 0x291090 - 0x291210
void PlayerDamagedEnemy_0x291090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291090u;

    // 0x291090: 0x27bdffb0
    ctx->pc = 0x291090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x291094: 0xffbf0040
    ctx->pc = 0x291094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x291098: 0xffb30030
    ctx->pc = 0x291098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29109c: 0xffb20020
    ctx->pc = 0x29109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2910a0: 0xffb10010
    ctx->pc = 0x2910a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2910a4: 0xffb00000
    ctx->pc = 0x2910a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2910a8: 0x80802d
    ctx->pc = 0x2910a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910ac: 0xa0882d
    ctx->pc = 0x2910acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910b0: 0xe0902d
    ctx->pc = 0x2910b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2910b4: 0x3c020036
    ctx->pc = 0x2910b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2910b8: 0x8e230000
    ctx->pc = 0x2910b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2910bc: 0x8c42d934
    ctx->pc = 0x2910bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x2910c0: 0x14620005
    ctx->pc = 0x2910C0u;
    {
        const bool branch_taken_0x2910c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2910C4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2910c0) {
            ctx->pc = 0x2910D8u;
            goto label_2910d8;
        }
    }
    ctx->pc = 0x2910C8u;
    // 0x2910c8: 0x3c020036
    ctx->pc = 0x2910c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2910cc: 0x8c42d800
    ctx->pc = 0x2910ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957056)));
    // 0x2910d0: 0x10400049
    ctx->pc = 0x2910D0u;
    {
        const bool branch_taken_0x2910d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2910D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2910d0) {
            ctx->pc = 0x2911F8u;
            goto label_2911f8;
        }
    }
    ctx->pc = 0x2910D8u;
label_2910d8:
    // 0x2910d8: 0x24020001
    ctx->pc = 0x2910d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2910dc: 0x10c20003
    ctx->pc = 0x2910DCu;
    {
        const bool branch_taken_0x2910dc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2910E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2910dc) {
            ctx->pc = 0x2910ECu;
            goto label_2910ec;
        }
    }
    ctx->pc = 0x2910E4u;
    // 0x2910e4: 0x14c20044
    ctx->pc = 0x2910E4u;
    {
        const bool branch_taken_0x2910e4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x2910E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2910e4) {
            ctx->pc = 0x2911F8u;
            goto label_2911f8;
        }
    }
    ctx->pc = 0x2910ECu;
label_2910ec:
    // 0x2910ec: 0x5a400013
    ctx->pc = 0x2910ECu;
    {
        const bool branch_taken_0x2910ec = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2910ec) {
            ctx->pc = 0x2910F0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x2910F4u;
    // 0x2910f4: 0x862202ec
    ctx->pc = 0x2910f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 748)));
    // 0x2910f8: 0x54400010
    ctx->pc = 0x2910F8u;
    {
        const bool branch_taken_0x2910f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2910f8) {
            ctx->pc = 0x2910FCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x291100u;
    // 0x291100: 0x8e0208f0
    ctx->pc = 0x291100u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2288)));
    // 0x291104: 0x24420001
    ctx->pc = 0x291104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x291108: 0xae0208f0
    ctx->pc = 0x291108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2288), GPR_U32(ctx, 2));
    // 0x29110c: 0x2842000a
    ctx->pc = 0x29110cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 10));
    // 0x291110: 0x5440000a
    ctx->pc = 0x291110u;
    {
        const bool branch_taken_0x291110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x291110) {
            ctx->pc = 0x291114u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x291118u;
    // 0x291118: 0x3c020036
    ctx->pc = 0x291118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29111c: 0x8c42d934
    ctx->pc = 0x29111cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x291120: 0x4430006
    ctx->pc = 0x291120u;
    {
        const bool branch_taken_0x291120 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x291120) {
            ctx->pc = 0x291124u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x291128u;
    // 0x291128: 0x24040016
    ctx->pc = 0x291128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    // 0x29112c: 0x8e050000
    ctx->pc = 0x29112cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x291130: 0xc0a3a1c
    ctx->pc = 0x291130u;
    SET_GPR_U32(ctx, 31, 0x291138u);
    ctx->pc = 0x291134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291138u; }
    }
    if (ctx->pc != 0x291138u) { return; }
    ctx->pc = 0x291138u;
    // 0x291138: 0x8e230000
    ctx->pc = 0x291138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29113c:
    // 0x29113c: 0x2402fffe
    ctx->pc = 0x29113cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x291140: 0x14620003
    ctx->pc = 0x291140u;
    {
        const bool branch_taken_0x291140 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x291144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x291140) {
            ctx->pc = 0x291150u;
            goto label_291150;
        }
    }
    ctx->pc = 0x291148u;
    // 0x291148: 0x10000007
    ctx->pc = 0x291148u;
    {
        const bool branch_taken_0x291148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29114Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x291148) {
            ctx->pc = 0x291168u;
            goto label_291168;
        }
    }
    ctx->pc = 0x291150u;
label_291150:
    // 0x291150: 0x14620003
    ctx->pc = 0x291150u;
    {
        const bool branch_taken_0x291150 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x291154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x291150) {
            ctx->pc = 0x291160u;
            goto label_291160;
        }
    }
    ctx->pc = 0x291158u;
    // 0x291158: 0x10000003
    ctx->pc = 0x291158u;
    {
        const bool branch_taken_0x291158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29115Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x291158) {
            ctx->pc = 0x291168u;
            goto label_291168;
        }
    }
    ctx->pc = 0x291160u;
label_291160:
    // 0x291160: 0x43102a
    ctx->pc = 0x291160u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x291164: 0x2180a
    ctx->pc = 0x291164u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
label_291168:
    // 0x291168: 0x1260000f
    ctx->pc = 0x291168u;
    {
        const bool branch_taken_0x291168 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x291168) {
            ctx->pc = 0x2911A8u;
            goto label_2911a8;
        }
    }
    ctx->pc = 0x291170u;
    // 0x291170: 0x12400003
    ctx->pc = 0x291170u;
    {
        const bool branch_taken_0x291170 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x291174u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x291170) {
            ctx->pc = 0x291180u;
            goto label_291180;
        }
    }
    ctx->pc = 0x291178u;
    // 0x291178: 0x10000003
    ctx->pc = 0x291178u;
    {
        const bool branch_taken_0x291178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29117Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957960));
        if (branch_taken_0x291178) {
            ctx->pc = 0x291188u;
            goto label_291188;
        }
    }
    ctx->pc = 0x291180u;
label_291180:
    // 0x291180: 0x3c020033
    ctx->pc = 0x291180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x291184: 0x2442db00
    ctx->pc = 0x291184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957824));
label_291188:
    // 0x291188: 0x31880
    ctx->pc = 0x291188u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x29118c: 0x621821
    ctx->pc = 0x29118cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291190: 0x8e040000
    ctx->pc = 0x291190u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x291194: 0x8c650000
    ctx->pc = 0x291194u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291198: 0xc08d26a
    ctx->pc = 0x291198u;
    SET_GPR_U32(ctx, 31, 0x2911A0u);
    ctx->pc = 0x29119Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2349A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddExp_0x2349a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911A0u; }
    }
    if (ctx->pc != 0x2911A0u) { return; }
    ctx->pc = 0x2911A0u;
    // 0x2911a0: 0x10000015
    ctx->pc = 0x2911A0u;
    {
        const bool branch_taken_0x2911a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2911A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2911a0) {
            ctx->pc = 0x2911F8u;
            goto label_2911f8;
        }
    }
    ctx->pc = 0x2911A8u;
label_2911a8:
    // 0x2911a8: 0x1240000a
    ctx->pc = 0x2911A8u;
    {
        const bool branch_taken_0x2911a8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2911ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2911a8) {
            ctx->pc = 0x2911D4u;
            goto label_2911d4;
        }
    }
    ctx->pc = 0x2911B0u;
    // 0x2911b0: 0x2442da78
    ctx->pc = 0x2911b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957688));
    // 0x2911b4: 0x31880
    ctx->pc = 0x2911b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2911b8: 0x621821
    ctx->pc = 0x2911b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2911bc: 0x8e040000
    ctx->pc = 0x2911bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2911c0: 0x8c650000
    ctx->pc = 0x2911c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2911c4: 0xc08d26a
    ctx->pc = 0x2911C4u;
    SET_GPR_U32(ctx, 31, 0x2911CCu);
    ctx->pc = 0x2911C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2349A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddExp_0x2349a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911CCu; }
    }
    if (ctx->pc != 0x2911CCu) { return; }
    ctx->pc = 0x2911CCu;
    // 0x2911cc: 0x1000000a
    ctx->pc = 0x2911CCu;
    {
        const bool branch_taken_0x2911cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2911D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2911cc) {
            ctx->pc = 0x2911F8u;
            goto label_2911f8;
        }
    }
    ctx->pc = 0x2911D4u;
label_2911d4:
    // 0x2911d4: 0x3c020033
    ctx->pc = 0x2911d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2911d8: 0x2442d9f0
    ctx->pc = 0x2911d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957552));
    // 0x2911dc: 0x31880
    ctx->pc = 0x2911dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2911e0: 0x621821
    ctx->pc = 0x2911e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2911e4: 0x8e040000
    ctx->pc = 0x2911e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2911e8: 0x8c650000
    ctx->pc = 0x2911e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2911ec: 0xc08d26a
    ctx->pc = 0x2911ECu;
    SET_GPR_U32(ctx, 31, 0x2911F4u);
    ctx->pc = 0x2911F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2349A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddExp_0x2349a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2911F4u; }
    }
    if (ctx->pc != 0x2911F4u) { return; }
    ctx->pc = 0x2911F4u;
    // 0x2911f4: 0xdfbf0040
    ctx->pc = 0x2911f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2911f8:
    // 0x2911f8: 0xdfb30030
    ctx->pc = 0x2911f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2911fc: 0xdfb20020
    ctx->pc = 0x2911fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291200: 0xdfb10010
    ctx->pc = 0x291200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291204: 0xdfb00000
    ctx->pc = 0x291204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291208: 0x3e00008
    ctx->pc = 0x291208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29120Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2910D8u: goto label_2910d8;
            case 0x2910ECu: goto label_2910ec;
            case 0x29113Cu: goto label_29113c;
            case 0x291150u: goto label_291150;
            case 0x291160u: goto label_291160;
            case 0x291168u: goto label_291168;
            case 0x291180u: goto label_291180;
            case 0x291188u: goto label_291188;
            case 0x2911A8u: goto label_2911a8;
            case 0x2911D4u: goto label_2911d4;
            case 0x2911F8u: goto label_2911f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291210u;
}
