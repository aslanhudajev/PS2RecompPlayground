#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _outputFrame
// Address: 0x2f3510 - 0x2f35c8
void _outputFrame_0x2f3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3510u;

    // 0x2f3510: 0x27bdffe0
    ctx->pc = 0x2f3510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f3514: 0x3c03003a
    ctx->pc = 0x2f3514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3518: 0xffbf0010
    ctx->pc = 0x2f3518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f351c: 0x80302d
    ctx->pc = 0x2f351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3520: 0x8c623024
    ctx->pc = 0x2f3520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12324)));
    // 0x2f3524: 0xffb00000
    ctx->pc = 0x2f3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3528: 0x10a0001e
    ctx->pc = 0x2F3528u;
    {
        const bool branch_taken_0x2f3528 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F352Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 64)));
        if (branch_taken_0x2f3528) {
            ctx->pc = 0x2F35A4u;
            goto label_2f35a4;
        }
    }
    ctx->pc = 0x2F3530u;
    // 0x2f3530: 0x3c03003a
    ctx->pc = 0x2f3530u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3534: 0x24040003
    ctx->pc = 0x2f3534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3538: 0x8c6231ec
    ctx->pc = 0x2f3538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12780)));
    // 0x2f353c: 0x1444000c
    ctx->pc = 0x2F353Cu;
    {
        const bool branch_taken_0x2f353c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x2F3540u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f353c) {
            ctx->pc = 0x2F3570u;
            goto label_2f3570;
        }
    }
    ctx->pc = 0x2F3544u;
    // 0x2f3544: 0x8c4331bc
    ctx->pc = 0x2f3544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12732)));
    // 0x2f3548: 0x14640004
    ctx->pc = 0x2F3548u;
    {
        const bool branch_taken_0x2f3548 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x2F354Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3548) {
            ctx->pc = 0x2F355Cu;
            goto label_2f355c;
        }
    }
    ctx->pc = 0x2F3550u;
    // 0x2f3550: 0x3c02003a
    ctx->pc = 0x2f3550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3554: 0x10000002
    ctx->pc = 0x2F3554u;
    {
        const bool branch_taken_0x2f3554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3558u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12360)));
        if (branch_taken_0x2f3554) {
            ctx->pc = 0x2F3560u;
            goto label_2f3560;
        }
    }
    ctx->pc = 0x2F355Cu;
label_2f355c:
    // 0x2f355c: 0x8c443040
    ctx->pc = 0x2f355cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12352)));
label_2f3560:
    // 0x2f3560: 0xc0bcf82
    ctx->pc = 0x2F3560u;
    SET_GPR_U32(ctx, 31, 0x2F3568u);
    ctx->pc = 0x2F3564u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x2F3E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x2f3e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3568u; }
    }
    if (ctx->pc != 0x2F3568u) { return; }
    ctx->pc = 0x2F3568u;
    // 0x2f3568: 0x1000000f
    ctx->pc = 0x2F3568u;
    {
        const bool branch_taken_0x2f3568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F356Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 248)));
        if (branch_taken_0x2f3568) {
            ctx->pc = 0x2F35A8u;
            goto label_2f35a8;
        }
    }
    ctx->pc = 0x2F3570u;
label_2f3570:
    // 0x2f3570: 0x8c4331bc
    ctx->pc = 0x2f3570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12732)));
    // 0x2f3574: 0x14640006
    ctx->pc = 0x2F3574u;
    {
        const bool branch_taken_0x2f3574 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x2F3578u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3574) {
            ctx->pc = 0x2F3590u;
            goto label_2f3590;
        }
    }
    ctx->pc = 0x2F357Cu;
    // 0x2f357c: 0x3c02003a
    ctx->pc = 0x2f357cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3580: 0x3c03003a
    ctx->pc = 0x2f3580u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3584: 0x8c443054
    ctx->pc = 0x2f3584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12372)));
    // 0x2f3588: 0x10000004
    ctx->pc = 0x2F3588u;
    {
        const bool branch_taken_0x2f3588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F358Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12384)));
        if (branch_taken_0x2f3588) {
            ctx->pc = 0x2F359Cu;
            goto label_2f359c;
        }
    }
    ctx->pc = 0x2F3590u;
label_2f3590:
    // 0x2f3590: 0x3c03003a
    ctx->pc = 0x2f3590u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3594: 0x8c44304c
    ctx->pc = 0x2f3594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12364)));
    // 0x2f3598: 0x8c653058
    ctx->pc = 0x2f3598u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12376)));
label_2f359c:
    // 0x2f359c: 0xc0bcfc8
    ctx->pc = 0x2F359Cu;
    SET_GPR_U32(ctx, 31, 0x2F35A4u);
    ctx->pc = 0x2F35A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x2F3F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x2f3f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F35A4u; }
    }
    if (ctx->pc != 0x2F35A4u) { return; }
    ctx->pc = 0x2F35A4u;
label_2f35a4:
    // 0x2f35a4: 0x8e0300f8
    ctx->pc = 0x2f35a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_2f35a8:
    // 0x2f35a8: 0x24020001
    ctx->pc = 0x2f35a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f35ac: 0x14620003
    ctx->pc = 0x2F35ACu;
    {
        const bool branch_taken_0x2f35ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F35B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f35ac) {
            ctx->pc = 0x2F35BCu;
            goto label_2f35bc;
        }
    }
    ctx->pc = 0x2F35B4u;
    // 0x2f35b4: 0x24020002
    ctx->pc = 0x2f35b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f35b8: 0xae0200f8
    ctx->pc = 0x2f35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_2f35bc:
    // 0x2f35bc: 0xdfb00000
    ctx->pc = 0x2f35bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f35c0: 0x3e00008
    ctx->pc = 0x2F35C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F35C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F355Cu: goto label_2f355c;
            case 0x2F3560u: goto label_2f3560;
            case 0x2F3570u: goto label_2f3570;
            case 0x2F3590u: goto label_2f3590;
            case 0x2F359Cu: goto label_2f359c;
            case 0x2F35A4u: goto label_2f35a4;
            case 0x2F35A8u: goto label_2f35a8;
            case 0x2F35BCu: goto label_2f35bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F35C8u;
}
