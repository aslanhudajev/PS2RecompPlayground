#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispPlInsert__11CreditClassFi
// Address: 0x1d4580 - 0x1d4614
void dispPlInsert__11CreditClassFi_0x1d4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispPlInsert__11CreditClassFi");


    ctx->pc = 0x1d4580u;

    // 0x1d4580: 0x27bdffd0
    ctx->pc = 0x1d4580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d4584: 0x7fbf0020
    ctx->pc = 0x1d4584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d4588: 0x7fb10010
    ctx->pc = 0x1d4588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d458c: 0x7fb00000
    ctx->pc = 0x1d458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4590: 0x8c900084
    ctx->pc = 0x1d4590u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1d4594: 0x2407fcff
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x1d4598: 0x24060003
    ctx->pc = 0x1d4598u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d459c: 0x24030002
    ctx->pc = 0x1d459cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d45a0: 0x2073824
    ctx->pc = 0x1d45a0u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1d45a4: 0xac870084
    ctx->pc = 0x1d45a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 7));
    // 0x1d45a8: 0x8c870084
    ctx->pc = 0x1d45a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1d45ac: 0x34e70100
    ctx->pc = 0x1d45acu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 256));
    // 0x1d45b0: 0xac870084
    ctx->pc = 0x1d45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 7));
    // 0x1d45b4: 0x8c870098
    ctx->pc = 0x1d45b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1d45b8: 0x73943
    ctx->pc = 0x1d45b8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
    // 0x1d45bc: 0xe6001a
    ctx->pc = 0x1d45bcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1d45c0: 0x0
    ctx->pc = 0x1d45c0u;
    // NOP
    // 0x1d45c4: 0x0
    ctx->pc = 0x1d45c4u;
    // NOP
    // 0x1d45c8: 0x3010
    ctx->pc = 0x1d45c8u;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x1d45cc: 0x10c3000b
    ctx->pc = 0x1D45CCu;
    {
        const bool branch_taken_0x1d45cc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D45D0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d45cc) {
            ctx->pc = 0x1D45FCu;
            goto label_1d45fc;
        }
    }
    ctx->pc = 0x1D45D4u;
    // 0x1d45d4: 0x3c020026
    ctx->pc = 0x1d45d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d45d8: 0x518c0
    ctx->pc = 0x1d45d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d45dc: 0x24425600
    ctx->pc = 0x1d45dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22016));
    // 0x1d45e0: 0x431021
    ctx->pc = 0x1d45e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d45e4: 0xc44c0000
    ctx->pc = 0x1d45e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d45e8: 0x3c020026
    ctx->pc = 0x1d45e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d45ec: 0x24425604
    ctx->pc = 0x1d45ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22020));
    // 0x1d45f0: 0x431021
    ctx->pc = 0x1d45f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d45f4: 0xc075188
    ctx->pc = 0x1D45F4u;
    SET_GPR_U32(ctx, 31, 0x1D45FCu);
    ctx->pc = 0x1D45F8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x1D4620u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispPlPressStart__11CreditClassFffi_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45FCu; }
        else if (ctx->pc != 0x1D45FCu) { ctx->pc = 0x1D45FCu; }
    }
    if (ctx->pc != 0x1D45FCu) { return; }
    ctx->pc = 0x1D45FCu;
label_1d45fc:
    // 0x1d45fc: 0xae300084
    ctx->pc = 0x1d45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
    // 0x1d4600: 0x7bbf0020
    ctx->pc = 0x1d4600u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4604: 0x7bb10010
    ctx->pc = 0x1d4604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4608: 0x7bb00000
    ctx->pc = 0x1d4608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d460c: 0x3e00008
    ctx->pc = 0x1D460Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D45FCu: goto label_1d45fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4614u;
}
