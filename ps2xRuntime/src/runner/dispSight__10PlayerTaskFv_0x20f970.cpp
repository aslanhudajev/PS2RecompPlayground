#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispSight__10PlayerTaskFv
// Address: 0x20f970 - 0x20fa14
void dispSight__10PlayerTaskFv_0x20f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispSight__10PlayerTaskFv");


    ctx->pc = 0x20f970u;

    // 0x20f970: 0x27bdffd0
    ctx->pc = 0x20f970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f974: 0x7fbf0020
    ctx->pc = 0x20f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x20f978: 0x7fb10010
    ctx->pc = 0x20f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20f97c: 0x7fb00000
    ctx->pc = 0x20f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f980: 0x70808e28
    ctx->pc = 0x20f980u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20f984: 0x8c841cb8
    ctx->pc = 0x20f984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20f988: 0x3c020050
    ctx->pc = 0x20f988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20f98c: 0x2442db70
    ctx->pc = 0x20f98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x20f990: 0x41880
    ctx->pc = 0x20f990u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20f994: 0x642821
    ctx->pc = 0x20f994u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20f998: 0x51880
    ctx->pc = 0x20f998u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20f99c: 0xa31821
    ctx->pc = 0x20f99cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20f9a0: 0x31880
    ctx->pc = 0x20f9a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f9a4: 0xc07bf9c
    ctx->pc = 0x20F9A4u;
    SET_GPR_U32(ctx, 31, 0x20F9ACu);
    ctx->pc = 0x20F9A8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F9ACu; }
        else if (ctx->pc != 0x20F9ACu) { ctx->pc = 0x20F9ACu; }
    }
    if (ctx->pc != 0x20F9ACu) { return; }
    ctx->pc = 0x20F9ACu;
    // 0x20f9ac: 0x24030002
    ctx->pc = 0x20f9acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f9b0: 0x10430013
    ctx->pc = 0x20F9B0u;
    {
        const bool branch_taken_0x20f9b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20f9b0) {
            ctx->pc = 0x20FA00u;
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20F9B8u;
    // 0x20f9b8: 0x24030003
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f9bc: 0x10430010
    ctx->pc = 0x20F9BCu;
    {
        const bool branch_taken_0x20f9bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20f9bc) {
            ctx->pc = 0x20FA00u;
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20F9C4u;
    // 0x20f9c4: 0x97838bf4
    ctx->pc = 0x20f9c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x20f9c8: 0x1460000d
    ctx->pc = 0x20F9C8u;
    {
        const bool branch_taken_0x20f9c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20f9c8) {
            ctx->pc = 0x20FA00u;
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20F9D0u;
    // 0x20f9d0: 0x8e231cbc
    ctx->pc = 0x20f9d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7356)));
    // 0x20f9d4: 0x8c630010
    ctx->pc = 0x20f9d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x20f9d8: 0x18600009
    ctx->pc = 0x20F9D8u;
    {
        const bool branch_taken_0x20f9d8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x20f9d8) {
            ctx->pc = 0x20FA00u;
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20F9E0u;
    // 0x20f9e0: 0x8f838b68
    ctx->pc = 0x20f9e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x20f9e4: 0x10600006
    ctx->pc = 0x20F9E4u;
    {
        const bool branch_taken_0x20f9e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f9e4) {
            ctx->pc = 0x20FA00u;
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20F9ECu;
    // 0x20f9ec: 0x8603000c
    ctx->pc = 0x20f9ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20f9f0: 0x10600003
    ctx->pc = 0x20F9F0u;
    {
        const bool branch_taken_0x20f9f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f9f0) {
            ctx->pc = 0x20FA00u;
            goto label_20fa00;
        }
    }
    ctx->pc = 0x20F9F8u;
    // 0x20f9f8: 0xc083e00
    ctx->pc = 0x20F9F8u;
    SET_GPR_U32(ctx, 31, 0x20FA00u);
    ctx->pc = 0x20F9FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F800u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispSight_core__FP4_gun_0x20f800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FA00u; }
        else if (ctx->pc != 0x20FA00u) { ctx->pc = 0x20FA00u; }
    }
    if (ctx->pc != 0x20FA00u) { return; }
    ctx->pc = 0x20FA00u;
label_20fa00:
    // 0x20fa00: 0x7bbf0020
    ctx->pc = 0x20fa00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fa04: 0x7bb10010
    ctx->pc = 0x20fa04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fa08: 0x7bb00000
    ctx->pc = 0x20fa08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fa0c: 0x3e00008
    ctx->pc = 0x20FA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FA00u: goto label_20fa00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FA14u;
}
