#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _fs_version
// Address: 0x158830 - 0x1588bc
void _fs_version_0x158830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_fs_version");


    ctx->pc = 0x158830u;

    // 0x158830: 0x27bdffb0
    ctx->pc = 0x158830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x158834: 0x3c020023
    ctx->pc = 0x158834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x158838: 0xffb30030
    ctx->pc = 0x158838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x15883c: 0x3c03002e
    ctx->pc = 0x15883cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x158840: 0xffb10010
    ctx->pc = 0x158840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x158844: 0x2453986c
    ctx->pc = 0x158844u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294940780));
    // 0x158848: 0xffb20020
    ctx->pc = 0x158848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15884c: 0x2471a668
    ctx->pc = 0x15884cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294944360));
    // 0x158850: 0xffbf0040
    ctx->pc = 0x158850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x158854: 0x902d
    ctx->pc = 0x158854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158858: 0xffb00000
    ctx->pc = 0x158858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15885c: 0x220202d
    ctx->pc = 0x15885cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158860: 0x260282d
    ctx->pc = 0x158860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158864: 0xc050c6a
    ctx->pc = 0x158864u;
    SET_GPR_U32(ctx, 31, 0x15886Cu);
    ctx->pc = 0x158868u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15886Cu; }
        else if (ctx->pc != 0x15886Cu) { ctx->pc = 0x15886Cu; }
    }
    if (ctx->pc != 0x15886Cu) { return; }
    ctx->pc = 0x15886Cu;
    // 0x15886c: 0x1040000b
    ctx->pc = 0x15886Cu;
    {
        const bool branch_taken_0x15886c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158870u;
        SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
        if (branch_taken_0x15886c) {
            ctx->pc = 0x15889Cu;
            goto label_15889c;
        }
    }
    ctx->pc = 0x158874u;
    // 0x158874: 0x220202d
    ctx->pc = 0x158874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158878: 0x8e05a0d0
    ctx->pc = 0x158878u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294942928)));
    // 0x15887c: 0xc050c6a
    ctx->pc = 0x15887Cu;
    SET_GPR_U32(ctx, 31, 0x158884u);
    ctx->pc = 0x158880u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158884u; }
        else if (ctx->pc != 0x158884u) { ctx->pc = 0x158884u; }
    }
    if (ctx->pc != 0x158884u) { return; }
    ctx->pc = 0x158884u;
    // 0x158884: 0x10400005
    ctx->pc = 0x158884u;
    {
        const bool branch_taken_0x158884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158888u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294942928)));
        if (branch_taken_0x158884) {
            ctx->pc = 0x15889Cu;
            goto label_15889c;
        }
    }
    ctx->pc = 0x15888Cu;
    // 0x15888c: 0x260202d
    ctx->pc = 0x15888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158890: 0xc050c6a
    ctx->pc = 0x158890u;
    SET_GPR_U32(ctx, 31, 0x158898u);
    ctx->pc = 0x158894u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158898u; }
        else if (ctx->pc != 0x158898u) { ctx->pc = 0x158898u; }
    }
    if (ctx->pc != 0x158898u) { return; }
    ctx->pc = 0x158898u;
    // 0x158898: 0x2902b
    ctx->pc = 0x158898u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_15889c:
    // 0x15889c: 0x240102d
    ctx->pc = 0x15889cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588a0: 0xdfbf0040
    ctx->pc = 0x1588a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1588a4: 0xdfb30030
    ctx->pc = 0x1588a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1588a8: 0xdfb20020
    ctx->pc = 0x1588a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1588ac: 0xdfb10010
    ctx->pc = 0x1588acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1588b0: 0xdfb00000
    ctx->pc = 0x1588b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1588b4: 0x3e00008
    ctx->pc = 0x1588B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15889Cu: goto label_15889c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1588BCu;
}
