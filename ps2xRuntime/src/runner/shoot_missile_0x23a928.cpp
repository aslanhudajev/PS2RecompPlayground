#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: shoot_missile
// Address: 0x23a928 - 0x23aa10
void shoot_missile_0x23a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23a928u;

    // 0x23a928: 0x27bdffc0
    ctx->pc = 0x23a928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a92c: 0xffbf0030
    ctx->pc = 0x23a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23a930: 0xffb20020
    ctx->pc = 0x23a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23a934: 0xffb10010
    ctx->pc = 0x23a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23a938: 0xffb00000
    ctx->pc = 0x23a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a93c: 0x80882d
    ctx->pc = 0x23a93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a940: 0x96220324
    ctx->pc = 0x23a940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x23a944: 0x2442ffe4
    ctx->pc = 0x23a944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x23a948: 0x2c420002
    ctx->pc = 0x23a948u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23a94c: 0x1440000f
    ctx->pc = 0x23A94Cu;
    {
        const bool branch_taken_0x23a94c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A950u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a94c) {
            ctx->pc = 0x23A98Cu;
            goto label_23a98c;
        }
    }
    ctx->pc = 0x23A954u;
    // 0x23a954: 0x86230324
    ctx->pc = 0x23a954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x23a958: 0x24020010
    ctx->pc = 0x23a958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x23a95c: 0x10620003
    ctx->pc = 0x23A95Cu;
    {
        const bool branch_taken_0x23a95c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23A960u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x23a95c) {
            ctx->pc = 0x23A96Cu;
            goto label_23a96c;
        }
    }
    ctx->pc = 0x23A964u;
    // 0x23a964: 0x14620003
    ctx->pc = 0x23A964u;
    {
        const bool branch_taken_0x23a964 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A968u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x23a964) {
            ctx->pc = 0x23A974u;
            goto label_23a974;
        }
    }
    ctx->pc = 0x23A96Cu;
label_23a96c:
    // 0x23a96c: 0x10000008
    ctx->pc = 0x23A96Cu;
    {
        const bool branch_taken_0x23a96c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A970u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a96c) {
            ctx->pc = 0x23A990u;
            goto label_23a990;
        }
    }
    ctx->pc = 0x23A974u;
label_23a974:
    // 0x23a974: 0x10620003
    ctx->pc = 0x23A974u;
    {
        const bool branch_taken_0x23a974 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23A978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x23a974) {
            ctx->pc = 0x23A984u;
            goto label_23a984;
        }
    }
    ctx->pc = 0x23A97Cu;
    // 0x23a97c: 0x14620004
    ctx->pc = 0x23A97Cu;
    {
        const bool branch_taken_0x23a97c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A980u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23a97c) {
            ctx->pc = 0x23A990u;
            goto label_23a990;
        }
    }
    ctx->pc = 0x23A984u;
label_23a984:
    // 0x23a984: 0x10000002
    ctx->pc = 0x23A984u;
    {
        const bool branch_taken_0x23a984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A988u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23a984) {
            ctx->pc = 0x23A990u;
            goto label_23a990;
        }
    }
    ctx->pc = 0x23A98Cu;
label_23a98c:
    // 0x23a98c: 0x24100002
    ctx->pc = 0x23a98cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
label_23a990:
    // 0x23a990: 0x220202d
    ctx->pc = 0x23a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a994: 0x240302d
    ctx->pc = 0x23a994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a998: 0xc0a40d4
    ctx->pc = 0x23A998u;
    SET_GPR_U32(ctx, 31, 0x23A9A0u);
    ctx->pc = 0x23A99Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290350u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyStartMissile_0x290350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A9A0u; }
    }
    if (ctx->pc != 0x23A9A0u) { return; }
    ctx->pc = 0x23A9A0u;
    // 0x23a9a0: 0x10400016
    ctx->pc = 0x23A9A0u;
    {
        const bool branch_taken_0x23a9a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A9A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23a9a0) {
            ctx->pc = 0x23A9FCu;
            goto label_23a9fc;
        }
    }
    ctx->pc = 0x23A9A8u;
    // 0x23a9a8: 0x16000004
    ctx->pc = 0x23A9A8u;
    {
        const bool branch_taken_0x23a9a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A9ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23a9a8) {
            ctx->pc = 0x23A9BCu;
            goto label_23a9bc;
        }
    }
    ctx->pc = 0x23A9B0u;
    // 0x23a9b0: 0xc097f02
    ctx->pc = 0x23A9B0u;
    SET_GPR_U32(ctx, 31, 0x23A9B8u);
    ctx->pc = 0x23A9B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnemyShootArrow_0x25fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A9B8u; }
    }
    if (ctx->pc != 0x23A9B8u) { return; }
    ctx->pc = 0x23A9B8u;
    // 0x23a9b8: 0x24020002
    ctx->pc = 0x23a9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_23a9bc:
    // 0x23a9bc: 0x1602000f
    ctx->pc = 0x23A9BCu;
    {
        const bool branch_taken_0x23a9bc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A9C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23a9bc) {
            ctx->pc = 0x23A9FCu;
            goto label_23a9fc;
        }
    }
    ctx->pc = 0x23A9C4u;
    // 0x23a9c4: 0x8e220000
    ctx->pc = 0x23a9c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23a9c8: 0x14500007
    ctx->pc = 0x23A9C8u;
    {
        const bool branch_taken_0x23a9c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x23A9CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a9c8) {
            ctx->pc = 0x23A9E8u;
            goto label_23a9e8;
        }
    }
    ctx->pc = 0x23A9D0u;
    // 0x23a9d0: 0xdfbf0030
    ctx->pc = 0x23a9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a9d4: 0xdfb20020
    ctx->pc = 0x23a9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a9d8: 0xdfb10010
    ctx->pc = 0x23a9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a9dc: 0xdfb00000
    ctx->pc = 0x23a9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a9e0: 0x8097f22
    ctx->pc = 0x23A9E0u;
    ctx->pc = 0x23A9E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x25FC88u;
    AudioDemonFireBall_0x25fc88(rdram, ctx, runtime); return;
    ctx->pc = 0x23A9E8u;
label_23a9e8:
    // 0x23a9e8: 0xdfb20020
    ctx->pc = 0x23a9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a9ec: 0xdfb10010
    ctx->pc = 0x23a9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a9f0: 0xdfb00000
    ctx->pc = 0x23a9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a9f4: 0x8097f08
    ctx->pc = 0x23A9F4u;
    ctx->pc = 0x23A9F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x25FC20u;
    AudioEnemyShootFireball_0x25fc20(rdram, ctx, runtime); return;
    ctx->pc = 0x23A9FCu;
label_23a9fc:
    // 0x23a9fc: 0xdfb20020
    ctx->pc = 0x23a9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aa00: 0xdfb10010
    ctx->pc = 0x23aa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aa04: 0xdfb00000
    ctx->pc = 0x23aa04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aa08: 0x3e00008
    ctx->pc = 0x23AA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A96Cu: goto label_23a96c;
            case 0x23A974u: goto label_23a974;
            case 0x23A984u: goto label_23a984;
            case 0x23A98Cu: goto label_23a98c;
            case 0x23A990u: goto label_23a990;
            case 0x23A9BCu: goto label_23a9bc;
            case 0x23A9E8u: goto label_23a9e8;
            case 0x23A9FCu: goto label_23a9fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23AA10u;
}
