#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterUpdateColnodes
// Address: 0x292e38 - 0x292ecc
void CritterUpdateColnodes_0x292e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292e38u;

    // 0x292e38: 0x27bdffc0
    ctx->pc = 0x292e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292e3c: 0xffbf0030
    ctx->pc = 0x292e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x292e40: 0xffb20020
    ctx->pc = 0x292e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x292e44: 0xffb10010
    ctx->pc = 0x292e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x292e48: 0xffb00000
    ctx->pc = 0x292e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292e4c: 0x80882d
    ctx->pc = 0x292e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292e50: 0x8e220004
    ctx->pc = 0x292e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292e54: 0x84420118
    ctx->pc = 0x292e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x292e58: 0x18400016
    ctx->pc = 0x292E58u;
    {
        const bool branch_taken_0x292e58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292E5Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292e58) {
            ctx->pc = 0x292EB4u;
            goto label_292eb4;
        }
    }
    ctx->pc = 0x292E60u;
    // 0x292e60: 0x24120060
    ctx->pc = 0x292e60u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 96));
    // 0x292e64: 0x2121018
    ctx->pc = 0x292e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_292e68:
    // 0x292e68: 0x24420540
    ctx->pc = 0x292e68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x292e6c: 0x2222821
    ctx->pc = 0x292e6cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x292e70: 0x8ca40004
    ctx->pc = 0x292e70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x292e74: 0x50800007
    ctx->pc = 0x292E74u;
    {
        const bool branch_taken_0x292e74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x292e74) {
            ctx->pc = 0x292E78u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
            ctx->pc = 0x292E94u;
            goto label_292e94;
        }
    }
    ctx->pc = 0x292E7Cu;
    // 0x292e7c: 0x8ca60000
    ctx->pc = 0x292e7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x292e80: 0x24a50010
    ctx->pc = 0x292e80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x292e84: 0xc0b4302
    ctx->pc = 0x292E84u;
    SET_GPR_U32(ctx, 31, 0x292E8Cu);
    ctx->pc = 0x292E88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E8Cu; }
    }
    if (ctx->pc != 0x292E8Cu) { return; }
    ctx->pc = 0x292E8Cu;
    // 0x292e8c: 0x10000004
    ctx->pc = 0x292E8Cu;
    {
        const bool branch_taken_0x292e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292E90u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x292e8c) {
            ctx->pc = 0x292EA0u;
            goto label_292ea0;
        }
    }
    ctx->pc = 0x292E94u;
label_292e94:
    // 0x292e94: 0xc0b5494
    ctx->pc = 0x292E94u;
    SET_GPR_U32(ctx, 31, 0x292E9Cu);
    ctx->pc = 0x292E98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292E9Cu; }
    }
    if (ctx->pc != 0x292E9Cu) { return; }
    ctx->pc = 0x292E9Cu;
    // 0x292e9c: 0x26100001
    ctx->pc = 0x292e9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_292ea0:
    // 0x292ea0: 0x8e220004
    ctx->pc = 0x292ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292ea4: 0x84420118
    ctx->pc = 0x292ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x292ea8: 0x202102a
    ctx->pc = 0x292ea8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x292eac: 0x1440ffee
    ctx->pc = 0x292EACu;
    {
        const bool branch_taken_0x292eac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x292EB0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x292eac) {
            ctx->pc = 0x292E68u;
            goto label_292e68;
        }
    }
    ctx->pc = 0x292EB4u;
label_292eb4:
    // 0x292eb4: 0xdfbf0030
    ctx->pc = 0x292eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292eb8: 0xdfb20020
    ctx->pc = 0x292eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292ebc: 0xdfb10010
    ctx->pc = 0x292ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292ec0: 0xdfb00000
    ctx->pc = 0x292ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292ec4: 0x3e00008
    ctx->pc = 0x292EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292EC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292E68u: goto label_292e68;
            case 0x292E94u: goto label_292e94;
            case 0x292EA0u: goto label_292ea0;
            case 0x292EB4u: goto label_292eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292ECCu;
}
