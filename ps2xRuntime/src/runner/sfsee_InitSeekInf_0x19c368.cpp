#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_InitSeekInf
// Address: 0x19c368 - 0x19c3d8
void sfsee_InitSeekInf_0x19c368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_InitSeekInf");


    ctx->pc = 0x19c368u;

    // 0x19c368: 0x27bdffe0
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c36c: 0x282d
    ctx->pc = 0x19c36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c370: 0xffb00000
    ctx->pc = 0x19c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c374: 0x24060371
    ctx->pc = 0x19c374u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 881));
    // 0x19c378: 0xffbf0010
    ctx->pc = 0x19c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c37c: 0xc0601e6
    ctx->pc = 0x19C37Cu;
    SET_GPR_U32(ctx, 31, 0x19C384u);
    ctx->pc = 0x19C380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C384u; }
        else if (ctx->pc != 0x19C384u) { ctx->pc = 0x19C384u; }
    }
    if (ctx->pc != 0x19C384u) { return; }
    ctx->pc = 0x19C384u;
    // 0x19c384: 0xc0670f6
    ctx->pc = 0x19C384u;
    SET_GPR_U32(ctx, 31, 0x19C38Cu);
    ctx->pc = 0x19C388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_InitHeadInf_0x19c3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C38Cu; }
        else if (ctx->pc != 0x19C38Cu) { ctx->pc = 0x19C38Cu; }
    }
    if (ctx->pc != 0x19C38Cu) { return; }
    ctx->pc = 0x19C38Cu;
    // 0x19c38c: 0x2402ffff
    ctx->pc = 0x19c38cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c390: 0x2403fff8
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x19c394: 0x24040001
    ctx->pc = 0x19c394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c398: 0xae020dc0
    ctx->pc = 0x19c398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 2));
    // 0x19c39c: 0xae030db4
    ctx->pc = 0x19c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 3));
    // 0x19c3a0: 0xae040db8
    ctx->pc = 0x19c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 4));
    // 0x19c3a4: 0xae000d94
    ctx->pc = 0x19c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 0));
    // 0x19c3a8: 0xae000d98
    ctx->pc = 0x19c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3480), GPR_U32(ctx, 0));
    // 0x19c3ac: 0xae030d9c
    ctx->pc = 0x19c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3484), GPR_U32(ctx, 3));
    // 0x19c3b0: 0xae040da0
    ctx->pc = 0x19c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 4));
    // 0x19c3b4: 0xae020da4
    ctx->pc = 0x19c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3492), GPR_U32(ctx, 2));
    // 0x19c3b8: 0xae020da8
    ctx->pc = 0x19c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
    // 0x19c3bc: 0xae000dac
    ctx->pc = 0x19c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 0));
    // 0x19c3c0: 0xae000db0
    ctx->pc = 0x19c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 0));
    // 0x19c3c4: 0xae000dbc
    ctx->pc = 0x19c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 0));
    // 0x19c3c8: 0xdfbf0010
    ctx->pc = 0x19c3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3cc: 0xdfb00000
    ctx->pc = 0x19c3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c3d0: 0x3e00008
    ctx->pc = 0x19C3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C3D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C3D8u;
}
