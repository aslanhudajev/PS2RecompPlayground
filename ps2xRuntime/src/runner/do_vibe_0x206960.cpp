#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_vibe
// Address: 0x206960 - 0x206a0c
void do_vibe_0x206960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206960u;

    // 0x206960: 0x27bdffd0
    ctx->pc = 0x206960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206964: 0xffbf0020
    ctx->pc = 0x206964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x206968: 0xffb10010
    ctx->pc = 0x206968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20696c: 0xffb00000
    ctx->pc = 0x20696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206970: 0x80802d
    ctx->pc = 0x206970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206974: 0x3c030031
    ctx->pc = 0x206974u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x206978: 0x24631b90
    ctx->pc = 0x206978u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x20697c: 0x2402003c
    ctx->pc = 0x20697cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x206980: 0x2021018
    ctx->pc = 0x206980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x206984: 0x621821
    ctx->pc = 0x206984u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206988: 0x8c620030
    ctx->pc = 0x206988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20698c: 0x1040001a
    ctx->pc = 0x20698Cu;
    {
        const bool branch_taken_0x20698c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206990u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20698c) {
            ctx->pc = 0x2069F8u;
            goto label_2069f8;
        }
    }
    ctx->pc = 0x206994u;
    // 0x206994: 0x24a5fffe
    ctx->pc = 0x206994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x206998: 0xa22821
    ctx->pc = 0x206998u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20699c: 0x4a00016
    ctx->pc = 0x20699Cu;
    {
        const bool branch_taken_0x20699c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2069A0u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 5));
        if (branch_taken_0x20699c) {
            ctx->pc = 0x2069F8u;
            goto label_2069f8;
        }
    }
    ctx->pc = 0x2069A4u;
    // 0x2069a4: 0x24020004
    ctx->pc = 0x2069a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2069a8: 0x43280a
    ctx->pc = 0x2069a8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x2069ac: 0x3c020031
    ctx->pc = 0x2069acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2069b0: 0x24420e90
    ctx->pc = 0x2069b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x2069b4: 0x102080
    ctx->pc = 0x2069b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2069b8: 0x822021
    ctx->pc = 0x2069b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2069bc: 0x3c020031
    ctx->pc = 0x2069bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2069c0: 0x24421b08
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6920));
    // 0x2069c4: 0x51880
    ctx->pc = 0x2069c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2069c8: 0x621821
    ctx->pc = 0x2069c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2069cc: 0x8c840000
    ctx->pc = 0x2069ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2069d0: 0xc081a30
    ctx->pc = 0x2069D0u;
    SET_GPR_U32(ctx, 31, 0x2069D8u);
    ctx->pc = 0x2069D4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2068C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        joyBeginShake_0x2068c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069D8u; }
    }
    if (ctx->pc != 0x2069D8u) { return; }
    ctx->pc = 0x2069D8u;
    // 0x2069d8: 0x3c020031
    ctx->pc = 0x2069d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2069dc: 0x24421d68
    ctx->pc = 0x2069dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7528));
    // 0x2069e0: 0x1028c0
    ctx->pc = 0x2069e0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 3));
    // 0x2069e4: 0xa22021
    ctx->pc = 0x2069e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2069e8: 0x24030001
    ctx->pc = 0x2069e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2069ec: 0xac830000
    ctx->pc = 0x2069ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2069f0: 0x451021
    ctx->pc = 0x2069f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2069f4: 0xac510004
    ctx->pc = 0x2069f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_2069f8:
    // 0x2069f8: 0xdfbf0020
    ctx->pc = 0x2069f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2069fc: 0xdfb10010
    ctx->pc = 0x2069fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206a00: 0xdfb00000
    ctx->pc = 0x206a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a04: 0x3e00008
    ctx->pc = 0x206A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206A08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2069F8u: goto label_2069f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206A0Cu;
}
