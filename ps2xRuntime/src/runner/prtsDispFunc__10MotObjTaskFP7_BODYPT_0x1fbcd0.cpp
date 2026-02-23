#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: prtsDispFunc__10MotObjTaskFP7_BODYPT
// Address: 0x1fbcd0 - 0x1fbd24
void prtsDispFunc__10MotObjTaskFP7_BODYPT_0x1fbcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("prtsDispFunc__10MotObjTaskFP7_BODYPT");


    ctx->pc = 0x1fbcd0u;

    // 0x1fbcd0: 0x27bdffe0
    ctx->pc = 0x1fbcd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbcd4: 0x7fbf0010
    ctx->pc = 0x1fbcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fbcd8: 0x7fb00000
    ctx->pc = 0x1fbcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fbcdc: 0x84a50020
    ctx->pc = 0x1fbcdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fbce0: 0x51900
    ctx->pc = 0x1fbce0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fbce4: 0x651823
    ctx->pc = 0x1fbce4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fbce8: 0x31900
    ctx->pc = 0x1fbce8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fbcec: 0x831821
    ctx->pc = 0x1fbcecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fbcf0: 0x24700070
    ctx->pc = 0x1fbcf0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 112));
    // 0x1fbcf4: 0x8c630124
    ctx->pc = 0x1fbcf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x1fbcf8: 0x30634000
    ctx->pc = 0x1fbcf8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16384));
    // 0x1fbcfc: 0x14600005
    ctx->pc = 0x1FBCFCu;
    {
        const bool branch_taken_0x1fbcfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fbcfc) {
            ctx->pc = 0x1FBD14u;
            goto label_1fbd14;
        }
    }
    ctx->pc = 0x1FBD04u;
    // 0x1fbd04: 0xc06b218
    ctx->pc = 0x1FBD04u;
    SET_GPR_U32(ctx, 31, 0x1FBD0Cu);
    ctx->pc = 0x1FBD08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD0Cu; }
        else if (ctx->pc != 0x1FBD0Cu) { ctx->pc = 0x1FBD0Cu; }
    }
    if (ctx->pc != 0x1FBD0Cu) { return; }
    ctx->pc = 0x1FBD0Cu;
    // 0x1fbd0c: 0xc0853ac
    ctx->pc = 0x1FBD0Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD14u);
    ctx->pc = 0x1FBD10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBD14u; }
        else if (ctx->pc != 0x1FBD14u) { ctx->pc = 0x1FBD14u; }
    }
    if (ctx->pc != 0x1FBD14u) { return; }
    ctx->pc = 0x1FBD14u;
label_1fbd14:
    // 0x1fbd14: 0x7bbf0010
    ctx->pc = 0x1fbd14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbd18: 0x7bb00000
    ctx->pc = 0x1fbd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbd1c: 0x3e00008
    ctx->pc = 0x1FBD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FBD14u: goto label_1fbd14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FBD24u;
}
