#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFXMissile
// Address: 0x27e0c8 - 0x27e16c
void StartFXMissile_0x27e0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e0c8u;

    // 0x27e0c8: 0x27bdffa0
    ctx->pc = 0x27e0c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27e0cc: 0xffbf0050
    ctx->pc = 0x27e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27e0d0: 0xffb40040
    ctx->pc = 0x27e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27e0d4: 0xffb30030
    ctx->pc = 0x27e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27e0d8: 0xffb20020
    ctx->pc = 0x27e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27e0dc: 0xffb10010
    ctx->pc = 0x27e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27e0e0: 0xffb00000
    ctx->pc = 0x27e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27e0e4: 0xc0882d
    ctx->pc = 0x27e0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0e8: 0x100902d
    ctx->pc = 0x27e0e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0ec: 0x120982d
    ctx->pc = 0x27e0ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0f0: 0x140a02d
    ctx->pc = 0x27e0f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0f4: 0xe0302d
    ctx->pc = 0x27e0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0f8: 0xc09f5fa
    ctx->pc = 0x27E0F8u;
    SET_GPR_U32(ctx, 31, 0x27E100u);
    ctx->pc = 0x27E0FCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E100u; }
    }
    if (ctx->pc != 0x27E100u) { return; }
    ctx->pc = 0x27E100u;
    // 0x27e100: 0x40802d
    ctx->pc = 0x27e100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e104: 0x6010003
    ctx->pc = 0x27E104u;
    {
        const bool branch_taken_0x27e104 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x27E108u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27e104) {
            ctx->pc = 0x27E114u;
            goto label_27e114;
        }
    }
    ctx->pc = 0x27E10Cu;
    // 0x27e10c: 0x1000000f
    ctx->pc = 0x27E10Cu;
    {
        const bool branch_taken_0x27e10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E110u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x27e10c) {
            ctx->pc = 0x27E14Cu;
            goto label_27e14c;
        }
    }
    ctx->pc = 0x27E114u;
label_27e114:
    // 0x27e114: 0x220282d
    ctx->pc = 0x27e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e118: 0x302d
    ctx->pc = 0x27e118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e11c: 0x44806000
    ctx->pc = 0x27e11cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27e120: 0xc09f794
    ctx->pc = 0x27E120u;
    SET_GPR_U32(ctx, 31, 0x27E128u);
    ctx->pc = 0x27E124u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E128u; }
    }
    if (ctx->pc != 0x27E128u) { return; }
    ctx->pc = 0x27E128u;
    // 0x27e128: 0x3c030034
    ctx->pc = 0x27e128u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27e12c: 0x24630eb0
    ctx->pc = 0x27e12cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
    // 0x27e130: 0x240200f0
    ctx->pc = 0x27e130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27e134: 0x2021018
    ctx->pc = 0x27e134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27e138: 0x431021
    ctx->pc = 0x27e138u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e13c: 0xa45200be
    ctx->pc = 0x27e13cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 190), (uint16_t)GPR_U32(ctx, 18));
    // 0x27e140: 0xac5300cc
    ctx->pc = 0x27e140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 19));
    // 0x27e144: 0xac5400d0
    ctx->pc = 0x27e144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 20));
    // 0x27e148: 0x200102d
    ctx->pc = 0x27e148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e14c:
    // 0x27e14c: 0xdfbf0050
    ctx->pc = 0x27e14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e150: 0xdfb40040
    ctx->pc = 0x27e150u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e154: 0xdfb30030
    ctx->pc = 0x27e154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e158: 0xdfb20020
    ctx->pc = 0x27e158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e15c: 0xdfb10010
    ctx->pc = 0x27e15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e160: 0xdfb00000
    ctx->pc = 0x27e160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e164: 0x3e00008
    ctx->pc = 0x27E164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E114u: goto label_27e114;
            case 0x27E14Cu: goto label_27e14c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E16Cu;
}
