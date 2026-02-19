#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _isOutSizeOK
// Address: 0x2f39a8 - 0x2f3a44
void _isOutSizeOK_0x2f39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f39a8u;

    // 0x2f39a8: 0x27bdfee0
    ctx->pc = 0x2f39a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2f39ac: 0x3c03003a
    ctx->pc = 0x2f39acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f39b0: 0xffbf0110
    ctx->pc = 0x2f39b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2f39b4: 0x80302d
    ctx->pc = 0x2f39b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39b8: 0xffb00100
    ctx->pc = 0x2f39b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2f39bc: 0x8c623024
    ctx->pc = 0x2f39bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12324)));
    // 0x2f39c0: 0x8c420040
    ctx->pc = 0x2f39c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2f39c4: 0x8c4400e0
    ctx->pc = 0x2f39c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2f39c8: 0x5080000a
    ctx->pc = 0x2F39C8u;
    {
        const bool branch_taken_0x2f39c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f39c8) {
            ctx->pc = 0x2F39CCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F39D0u;
    // 0x2f39d0: 0x8c4200dc
    ctx->pc = 0x2f39d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x2f39d4: 0x8cc30004
    ctx->pc = 0x2f39d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f39d8: 0x43102a
    ctx->pc = 0x2f39d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2f39dc: 0x1440000a
    ctx->pc = 0x2F39DCu;
    {
        const bool branch_taken_0x2f39dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F39E0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f39dc) {
            ctx->pc = 0x2F3A08u;
            goto label_2f3a08;
        }
    }
    ctx->pc = 0x2F39E4u;
    // 0x2f39e4: 0x8cc20008
    ctx->pc = 0x2f39e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f39e8: 0x82102a
    ctx->pc = 0x2f39e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2f39ec: 0x10000006
    ctx->pc = 0x2F39ECu;
    {
        const bool branch_taken_0x2f39ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F39F0u;
        SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2f39ec) {
            ctx->pc = 0x2F3A08u;
            goto label_2f3a08;
        }
    }
    ctx->pc = 0x2F39F4u;
label_2f39f4:
    // 0x2f39f4: 0x8cc40010
    ctx->pc = 0x2f39f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f39f8: 0x8c4200e4
    ctx->pc = 0x2f39f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x2f39fc: 0x641818
    ctx->pc = 0x2f39fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f3a00: 0x43102a
    ctx->pc = 0x2f3a00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2f3a04: 0x38500001
    ctx->pc = 0x2f3a04u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
label_2f3a08:
    // 0x2f3a08: 0x1600000a
    ctx->pc = 0x2F3A08u;
    {
        const bool branch_taken_0x2f3a08 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3A0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a08) {
            ctx->pc = 0x2F3A34u;
            goto label_2f3a34;
        }
    }
    ctx->pc = 0x2F3A10u;
    // 0x2f3a10: 0x8cc70008
    ctx->pc = 0x2f3a10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2f3a14: 0x3c05003c
    ctx->pc = 0x2f3a14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x2f3a18: 0x8cc60004
    ctx->pc = 0x2f3a18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f3a1c: 0x24a5a148
    ctx->pc = 0x2f3a1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294943048));
    // 0x2f3a20: 0xc0b6252
    ctx->pc = 0x2F3A20u;
    SET_GPR_U32(ctx, 31, 0x2F3A28u);
    ctx->pc = 0x2F3A24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A28u; }
    }
    if (ctx->pc != 0x2F3A28u) { return; }
    ctx->pc = 0x2F3A28u;
    // 0x2f3a28: 0xc0bba56
    ctx->pc = 0x2F3A28u;
    SET_GPR_U32(ctx, 31, 0x2F3A30u);
    ctx->pc = 0x2F3A2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A30u; }
    }
    if (ctx->pc != 0x2F3A30u) { return; }
    ctx->pc = 0x2F3A30u;
    // 0x2f3a30: 0x200102d
    ctx->pc = 0x2f3a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a34:
    // 0x2f3a34: 0xdfbf0110
    ctx->pc = 0x2f3a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f3a38: 0xdfb00100
    ctx->pc = 0x2f3a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f3a3c: 0x3e00008
    ctx->pc = 0x2F3A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3A40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F39F4u: goto label_2f39f4;
            case 0x2F3A08u: goto label_2f3a08;
            case 0x2F3A34u: goto label_2f3a34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3A44u;
}
