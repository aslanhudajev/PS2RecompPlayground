#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufIncCount
// Address: 0x2de888 - 0x2de904
void voBufIncCount_0x2de888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de888u;

    // 0x2de888: 0x80282d
    ctx->pc = 0x2de888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de88c: 0x3c030001
    ctx->pc = 0x2de88cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_2de890:
    // 0x2de890: 0x42000039
    ctx->pc = 0x2de890u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x2de894: 0x40f
    ctx->pc = 0x2de894u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2de898: 0x40026000
    ctx->pc = 0x2de898u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2de89c: 0x431024
    ctx->pc = 0x2de89cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2de8a0: 0x0
    ctx->pc = 0x2de8a0u;
    // NOP
    // 0x2de8a4: 0x1440fffa
    ctx->pc = 0x2DE8A4u;
    {
        const bool branch_taken_0x2de8a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2de8a4) {
            ctx->pc = 0x2DE890u;
            goto label_2de890;
        }
    }
    ctx->pc = 0x2DE8ACu;
    // 0x2de8ac: 0x8ca20008
    ctx->pc = 0x2de8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2de8b0: 0x8ca40004
    ctx->pc = 0x2de8b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2de8b4: 0x3c030003
    ctx->pc = 0x2de8b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
    // 0x2de8b8: 0x34639240
    ctx->pc = 0x2de8b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 37440));
    // 0x2de8bc: 0x431018
    ctx->pc = 0x2de8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2de8c0: 0x441021
    ctx->pc = 0x2de8c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2de8c4: 0x24030002
    ctx->pc = 0x2de8c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2de8c8: 0xac430000
    ctx->pc = 0x2de8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2de8cc: 0x8ca2000c
    ctx->pc = 0x2de8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2de8d0: 0x24420001
    ctx->pc = 0x2de8d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de8d4: 0xaca2000c
    ctx->pc = 0x2de8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2de8d8: 0x8ca30008
    ctx->pc = 0x2de8d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2de8dc: 0x24630001
    ctx->pc = 0x2de8dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de8e0: 0x8ca20010
    ctx->pc = 0x2de8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2de8e4: 0x62001a
    ctx->pc = 0x2de8e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2de8e8: 0x1810
    ctx->pc = 0x2de8e8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2de8ec: 0x50400001
    ctx->pc = 0x2DE8ECu;
    {
        const bool branch_taken_0x2de8ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2de8ec) {
            ctx->pc = 0x2DE8F0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DE8F4u;
            goto label_2de8f4;
        }
    }
    ctx->pc = 0x2DE8F4u;
label_2de8f4:
    // 0x2de8f4: 0xaca30008
    ctx->pc = 0x2de8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2de8f8: 0x42000038
    ctx->pc = 0x2de8f8u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2de8fc: 0x3e00008
    ctx->pc = 0x2DE8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE890u: goto label_2de890;
            case 0x2DE8F4u: goto label_2de8f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DE904u;
}
