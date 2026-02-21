#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RemoveItemGeo
// Address: 0x2536e0 - 0x253730
void RemoveItemGeo_0x2536e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2536e0u;

    // 0x2536e0: 0x27bdffe0
    ctx->pc = 0x2536e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2536e4: 0xffbf0010
    ctx->pc = 0x2536e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2536e8: 0xffb00000
    ctx->pc = 0x2536e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2536ec: 0x80802d
    ctx->pc = 0x2536ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2536f0: 0x8e020080
    ctx->pc = 0x2536f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2536f4: 0x50400005
    ctx->pc = 0x2536F4u;
    {
        const bool branch_taken_0x2536f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2536f4) {
            ctx->pc = 0x2536F8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->pc = 0x25370Cu;
            goto label_25370c;
        }
    }
    ctx->pc = 0x2536FCu;
    // 0x2536fc: 0xc08496c
    ctx->pc = 0x2536FCu;
    SET_GPR_U32(ctx, 31, 0x253704u);
    ctx->pc = 0x253700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253704u; }
    }
    if (ctx->pc != 0x253704u) { return; }
    ctx->pc = 0x253704u;
    // 0x253704: 0xae000080
    ctx->pc = 0x253704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x253708: 0x8e040070
    ctx->pc = 0x253708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_25370c:
    // 0x25370c: 0x10800005
    ctx->pc = 0x25370Cu;
    {
        const bool branch_taken_0x25370c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x253710u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25370c) {
            ctx->pc = 0x253724u;
            goto label_253724;
        }
    }
    ctx->pc = 0x253714u;
    // 0x253714: 0xc0b3f1a
    ctx->pc = 0x253714u;
    SET_GPR_U32(ctx, 31, 0x25371Cu);
    ctx->pc = 0x253718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25371Cu; }
    }
    if (ctx->pc != 0x25371Cu) { return; }
    ctx->pc = 0x25371Cu;
    // 0x25371c: 0xae000070
    ctx->pc = 0x25371cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x253720: 0xdfbf0010
    ctx->pc = 0x253720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_253724:
    // 0x253724: 0xdfb00000
    ctx->pc = 0x253724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253728: 0x3e00008
    ctx->pc = 0x253728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25372Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25370Cu: goto label_25370c;
            case 0x253724u: goto label_253724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253730u;
}
