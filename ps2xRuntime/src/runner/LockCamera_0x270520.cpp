#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LockCamera
// Address: 0x270520 - 0x27058c
void LockCamera_0x270520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x270520u;

    // 0x270520: 0x3c020034
    ctx->pc = 0x270520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270524: 0x8c42eb04
    ctx->pc = 0x270524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961924)));
    // 0x270528: 0x10400016
    ctx->pc = 0x270528u;
    {
        const bool branch_taken_0x270528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27052Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270528) {
            ctx->pc = 0x270584u;
            goto label_270584;
        }
    }
    ctx->pc = 0x270530u;
    // 0x270530: 0xac45f934
    ctx->pc = 0x270530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965556), GPR_U32(ctx, 5));
    // 0x270534: 0x3c030034
    ctx->pc = 0x270534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x270538: 0x24020001
    ctx->pc = 0x270538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27053c: 0xac62f938
    ctx->pc = 0x27053cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965560), GPR_U32(ctx, 2));
    // 0x270540: 0x3c030034
    ctx->pc = 0x270540u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x270544: 0x8c62f93c
    ctx->pc = 0x270544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965564)));
    // 0x270548: 0x44102a
    ctx->pc = 0x270548u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x27054c: 0x54400001
    ctx->pc = 0x27054Cu;
    {
        const bool branch_taken_0x27054c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27054c) {
            ctx->pc = 0x270550u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294965564), GPR_U32(ctx, 4));
            ctx->pc = 0x270554u;
            goto label_270554;
        }
    }
    ctx->pc = 0x270554u;
label_270554:
    // 0x270554: 0x28a20002
    ctx->pc = 0x270554u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x270558: 0x1040000a
    ctx->pc = 0x270558u;
    {
        const bool branch_taken_0x270558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27055Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270558) {
            ctx->pc = 0x270584u;
            goto label_270584;
        }
    }
    ctx->pc = 0x270560u;
    // 0x270560: 0xc441f9fc
    ctx->pc = 0x270560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270564: 0x3c013f66
    ctx->pc = 0x270564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x270568: 0x34216666
    ctx->pc = 0x270568u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x27056c: 0x44810000
    ctx->pc = 0x27056cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270570: 0x46000834
    ctx->pc = 0x270570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270574: 0x0
    ctx->pc = 0x270574u;
    // NOP
    // 0x270578: 0x45000002
    ctx->pc = 0x270578u;
    {
        const bool branch_taken_0x270578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27057Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270578) {
            ctx->pc = 0x270584u;
            goto label_270584;
        }
    }
    ctx->pc = 0x270580u;
    // 0x270580: 0xac40f93c
    ctx->pc = 0x270580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965564), GPR_U32(ctx, 0));
label_270584:
    // 0x270584: 0x3e00008
    ctx->pc = 0x270584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x270554u: goto label_270554;
            case 0x270584u: goto label_270584;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27058Cu;
}
