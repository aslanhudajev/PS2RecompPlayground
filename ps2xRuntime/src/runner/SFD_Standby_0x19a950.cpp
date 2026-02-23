#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Standby
// Address: 0x19a950 - 0x19a998
void SFD_Standby_0x19a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Standby");


    ctx->pc = 0x19a950u;

    // 0x19a950: 0x27bdffe0
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a954: 0xffb00000
    ctx->pc = 0x19a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a958: 0xffbf0010
    ctx->pc = 0x19a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a95c: 0xc064f1e
    ctx->pc = 0x19A95Cu;
    SET_GPR_U32(ctx, 31, 0x19A964u);
    ctx->pc = 0x19A960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A964u; }
        else if (ctx->pc != 0x19A964u) { ctx->pc = 0x19A964u; }
    }
    if (ctx->pc != 0x19A964u) { return; }
    ctx->pc = 0x19A964u;
    // 0x19a964: 0x10400006
    ctx->pc = 0x19A964u;
    {
        const bool branch_taken_0x19a964 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A968u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a964) {
            ctx->pc = 0x19A980u;
            goto label_19a980;
        }
    }
    ctx->pc = 0x19A96Cu;
    // 0x19a96c: 0x3c05ff00
    ctx->pc = 0x19a96cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19a970: 0xc064ea0
    ctx->pc = 0x19A970u;
    SET_GPR_U32(ctx, 31, 0x19A978u);
    ctx->pc = 0x19A974u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 323));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A978u; }
        else if (ctx->pc != 0x19A978u) { ctx->pc = 0x19A978u; }
    }
    if (ctx->pc != 0x19A978u) { return; }
    ctx->pc = 0x19A978u;
    // 0x19a978: 0x10000004
    ctx->pc = 0x19A978u;
    {
        const bool branch_taken_0x19a978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A97Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19a978) {
            ctx->pc = 0x19A98Cu;
            goto label_19a98c;
        }
    }
    ctx->pc = 0x19A980u;
label_19a980:
    // 0x19a980: 0xc066a66
    ctx->pc = 0x19A980u;
    SET_GPR_U32(ctx, 31, 0x19A988u);
    ctx->pc = 0x19A984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A998u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPL2_Standby_0x19a998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A988u; }
        else if (ctx->pc != 0x19A988u) { ctx->pc = 0x19A988u; }
    }
    if (ctx->pc != 0x19A988u) { return; }
    ctx->pc = 0x19A988u;
    // 0x19a988: 0xdfbf0010
    ctx->pc = 0x19a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a98c:
    // 0x19a98c: 0xdfb00000
    ctx->pc = 0x19a98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a990: 0x3e00008
    ctx->pc = 0x19A990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A980u: goto label_19a980;
            case 0x19A98Cu: goto label_19a98c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A998u;
}
