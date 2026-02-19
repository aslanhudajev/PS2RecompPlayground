#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitDamage
// Address: 0x291e80 - 0x291f1c
void CritterInitDamage_0x291e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291e80u;

    // 0x291e80: 0x27bdffc0
    ctx->pc = 0x291e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291e84: 0xffbf0030
    ctx->pc = 0x291e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x291e88: 0xffb20020
    ctx->pc = 0x291e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x291e8c: 0xffb10010
    ctx->pc = 0x291e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x291e90: 0xffb00000
    ctx->pc = 0x291e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291e94: 0x80882d
    ctx->pc = 0x291e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e98: 0x4a0001a
    ctx->pc = 0x291E98u;
    {
        const bool branch_taken_0x291e98 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x291E9Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291e98) {
            ctx->pc = 0x291F04u;
            goto label_291f04;
        }
    }
    ctx->pc = 0x291EA0u;
    // 0x291ea0: 0x24100050
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 80));
    // 0x291ea4: 0xb08018
    ctx->pc = 0x291ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291ea8: 0x8e220044
    ctx->pc = 0x291ea8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x291eac: 0x2028021
    ctx->pc = 0x291eacu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x291eb0: 0xc0a474c
    ctx->pc = 0x291EB0u;
    SET_GPR_U32(ctx, 31, 0x291EB8u);
    ctx->pc = 0x291EB4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EB8u; }
    }
    if (ctx->pc != 0x291EB8u) { return; }
    ctx->pc = 0x291EB8u;
    // 0x291eb8: 0x220202d
    ctx->pc = 0x291eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ebc: 0x86050044
    ctx->pc = 0x291ebcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x291ec0: 0xc0a474c
    ctx->pc = 0x291EC0u;
    SET_GPR_U32(ctx, 31, 0x291EC8u);
    ctx->pc = 0x291EC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EC8u; }
    }
    if (ctx->pc != 0x291EC8u) { return; }
    ctx->pc = 0x291EC8u;
    // 0x291ec8: 0x220202d
    ctx->pc = 0x291ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ecc: 0x86050046
    ctx->pc = 0x291eccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x291ed0: 0xc0a474c
    ctx->pc = 0x291ED0u;
    SET_GPR_U32(ctx, 31, 0x291ED8u);
    ctx->pc = 0x291ED4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291ED8u; }
    }
    if (ctx->pc != 0x291ED8u) { return; }
    ctx->pc = 0x291ED8u;
    // 0x291ed8: 0x220202d
    ctx->pc = 0x291ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291edc: 0x86050042
    ctx->pc = 0x291edcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x291ee0: 0xc0a474c
    ctx->pc = 0x291EE0u;
    SET_GPR_U32(ctx, 31, 0x291EE8u);
    ctx->pc = 0x291EE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInitSfx_0x291d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EE8u; }
    }
    if (ctx->pc != 0x291EE8u) { return; }
    ctx->pc = 0x291EE8u;
    // 0x291ee8: 0x86030000
    ctx->pc = 0x291ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x291eec: 0x24020006
    ctx->pc = 0x291eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x291ef0: 0x14620005
    ctx->pc = 0x291EF0u;
    {
        const bool branch_taken_0x291ef0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x291EF4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x291ef0) {
            ctx->pc = 0x291F08u;
            goto label_291f08;
        }
    }
    ctx->pc = 0x291EF8u;
    // 0x291ef8: 0x3c030036
    ctx->pc = 0x291ef8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x291efc: 0x24020001
    ctx->pc = 0x291efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x291f00: 0xac62d7e0
    ctx->pc = 0x291f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957024), GPR_U32(ctx, 2));
label_291f04:
    // 0x291f04: 0xdfbf0030
    ctx->pc = 0x291f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_291f08:
    // 0x291f08: 0xdfb20020
    ctx->pc = 0x291f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291f0c: 0xdfb10010
    ctx->pc = 0x291f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f10: 0xdfb00000
    ctx->pc = 0x291f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291f14: 0x3e00008
    ctx->pc = 0x291F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291F18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291F04u: goto label_291f04;
            case 0x291F08u: goto label_291f08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291F1Cu;
}
