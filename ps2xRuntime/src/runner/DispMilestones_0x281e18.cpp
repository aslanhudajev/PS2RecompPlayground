#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispMilestones
// Address: 0x281e18 - 0x281ec4
void DispMilestones_0x281e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281e18u;

    // 0x281e18: 0x27bdffa0
    ctx->pc = 0x281e18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x281e1c: 0xffbf0050
    ctx->pc = 0x281e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x281e20: 0xffb40040
    ctx->pc = 0x281e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x281e24: 0xffb30030
    ctx->pc = 0x281e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x281e28: 0xffb20020
    ctx->pc = 0x281e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x281e2c: 0xffb10010
    ctx->pc = 0x281e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x281e30: 0xffb00000
    ctx->pc = 0x281e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281e34: 0x80982d
    ctx->pc = 0x281e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e38: 0x3c020034
    ctx->pc = 0x281e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x281e3c: 0x8c42c380
    ctx->pc = 0x281e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x281e40: 0x18400018
    ctx->pc = 0x281E40u;
    {
        const bool branch_taken_0x281e40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x281E44u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x281e40) {
            ctx->pc = 0x281EA4u;
            goto label_281ea4;
        }
    }
    ctx->pc = 0x281E48u;
    // 0x281e48: 0x3c020034
    ctx->pc = 0x281e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x281e4c: 0x24528b80
    ctx->pc = 0x281e4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x281e50: 0x24110070
    ctx->pc = 0x281e50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 112));
    // 0x281e54: 0x3c140034
    ctx->pc = 0x281e54u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
label_281e58:
    // 0x281e58: 0x12600008
    ctx->pc = 0x281E58u;
    {
        const bool branch_taken_0x281e58 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x281E5Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x281e58) {
            ctx->pc = 0x281E7Cu;
            goto label_281e7c;
        }
    }
    ctx->pc = 0x281E60u;
    // 0x281e60: 0x721021
    ctx->pc = 0x281e60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x281e64: 0x8c440060
    ctx->pc = 0x281e64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x281e68: 0x24050002
    ctx->pc = 0x281e68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x281e6c: 0xc0b41e4
    ctx->pc = 0x281E6Cu;
    SET_GPR_U32(ctx, 31, 0x281E74u);
    ctx->pc = 0x281E70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E74u; }
    }
    if (ctx->pc != 0x281E74u) { return; }
    ctx->pc = 0x281E74u;
    // 0x281e74: 0x10000007
    ctx->pc = 0x281E74u;
    {
        const bool branch_taken_0x281e74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281E78u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x281e74) {
            ctx->pc = 0x281E94u;
            goto label_281e94;
        }
    }
    ctx->pc = 0x281E7Cu;
label_281e7c:
    // 0x281e7c: 0x721021
    ctx->pc = 0x281e7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x281e80: 0x8c440060
    ctx->pc = 0x281e80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x281e84: 0x24050002
    ctx->pc = 0x281e84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x281e88: 0xc0b41b8
    ctx->pc = 0x281E88u;
    SET_GPR_U32(ctx, 31, 0x281E90u);
    ctx->pc = 0x281E8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E90u; }
    }
    if (ctx->pc != 0x281E90u) { return; }
    ctx->pc = 0x281E90u;
    // 0x281e90: 0x26100001
    ctx->pc = 0x281e90u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_281e94:
    // 0x281e94: 0x8e82c380
    ctx->pc = 0x281e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294951808)));
    // 0x281e98: 0x202102a
    ctx->pc = 0x281e98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x281e9c: 0x1440ffee
    ctx->pc = 0x281E9Cu;
    {
        const bool branch_taken_0x281e9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x281e9c) {
            ctx->pc = 0x281E58u;
            goto label_281e58;
        }
    }
    ctx->pc = 0x281EA4u;
label_281ea4:
    // 0x281ea4: 0xdfbf0050
    ctx->pc = 0x281ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281ea8: 0xdfb40040
    ctx->pc = 0x281ea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281eac: 0xdfb30030
    ctx->pc = 0x281eacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281eb0: 0xdfb20020
    ctx->pc = 0x281eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281eb4: 0xdfb10010
    ctx->pc = 0x281eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281eb8: 0xdfb00000
    ctx->pc = 0x281eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281ebc: 0x3e00008
    ctx->pc = 0x281EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281EC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281E58u: goto label_281e58;
            case 0x281E7Cu: goto label_281e7c;
            case 0x281E94u: goto label_281e94;
            case 0x281EA4u: goto label_281ea4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281EC4u;
}
