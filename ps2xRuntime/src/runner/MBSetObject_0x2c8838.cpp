#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetObject
// Address: 0x2c8838 - 0x2c88d4
void MBSetObject_0x2c8838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8838u;

    // 0x2c8838: 0x27bdffd0
    ctx->pc = 0x2c8838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c883c: 0xffbf0020
    ctx->pc = 0x2c883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8840: 0xffb10010
    ctx->pc = 0x2c8840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c8844: 0xffb00000
    ctx->pc = 0x2c8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8848: 0x80802d
    ctx->pc = 0x2c8848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c884c: 0xa0882d
    ctx->pc = 0x2c884cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8850: 0x3c020036
    ctx->pc = 0x2c8850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c8854: 0x6210008
    ctx->pc = 0x2C8854u;
    {
        const bool branch_taken_0x2c8854 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2C8858u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2c8854) {
            ctx->pc = 0x2C8878u;
            goto label_2c8878;
        }
    }
    ctx->pc = 0x2C885Cu;
    // 0x2c885c: 0x3c04003b
    ctx->pc = 0x2c885cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c8860: 0x24847328
    ctx->pc = 0x2c8860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29480));
    // 0x2c8864: 0xc0b49a6
    ctx->pc = 0x2C8864u;
    SET_GPR_U32(ctx, 31, 0x2C886Cu);
    ctx->pc = 0x2C8868u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C886Cu; }
    }
    if (ctx->pc != 0x2C886Cu) { return; }
    ctx->pc = 0x2C886Cu;
    // 0x2c886c: 0xae11006c
    ctx->pc = 0x2c886cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
    // 0x2c8870: 0x10000013
    ctx->pc = 0x2C8870u;
    {
        const bool branch_taken_0x2c8870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8874u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        if (branch_taken_0x2c8870) {
            ctx->pc = 0x2C88C0u;
            goto label_2c88c0;
        }
    }
    ctx->pc = 0x2C8878u;
label_2c8878:
    // 0x2c8878: 0x8c430038
    ctx->pc = 0x2c8878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2c887c: 0x111403
    ctx->pc = 0x2c887cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2c8880: 0x21100
    ctx->pc = 0x2c8880u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c8884: 0x621821
    ctx->pc = 0x2c8884u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8888: 0x8c630004
    ctx->pc = 0x2c8888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c888c: 0xae11006c
    ctx->pc = 0x2c888cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
    // 0x2c8890: 0x3222ffff
    ctx->pc = 0x2c8890u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x2c8894: 0x21180
    ctx->pc = 0x2c8894u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2c8898: 0x8c630054
    ctx->pc = 0x2c8898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2c889c: 0x431021
    ctx->pc = 0x2c889cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c88a0: 0xae020070
    ctx->pc = 0x2c88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2c88a4: 0x24020002
    ctx->pc = 0x2c88a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c88a8: 0xa2020052
    ctx->pc = 0x2c88a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c88ac: 0x8e020060
    ctx->pc = 0x2c88acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c88b0: 0x3c03ffff
    ctx->pc = 0x2c88b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c88b4: 0x3463fffe
    ctx->pc = 0x2c88b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65534));
    // 0x2c88b8: 0x431024
    ctx->pc = 0x2c88b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c88bc: 0xae020060
    ctx->pc = 0x2c88bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_2c88c0:
    // 0x2c88c0: 0xdfbf0020
    ctx->pc = 0x2c88c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c88c4: 0xdfb10010
    ctx->pc = 0x2c88c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c88c8: 0xdfb00000
    ctx->pc = 0x2c88c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c88cc: 0x3e00008
    ctx->pc = 0x2C88CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C88D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8878u: goto label_2c8878;
            case 0x2C88C0u: goto label_2c88c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C88D4u;
}
