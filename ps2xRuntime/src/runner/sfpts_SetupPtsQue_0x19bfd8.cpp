#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfpts_SetupPtsQue
// Address: 0x19bfd8 - 0x19c050
void sfpts_SetupPtsQue_0x19bfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfpts_SetupPtsQue");


    ctx->pc = 0x19bfd8u;

    // 0x19bfd8: 0x27bdffc0
    ctx->pc = 0x19bfd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19bfdc: 0xffb00000
    ctx->pc = 0x19bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bfe0: 0x24b00003
    ctx->pc = 0x19bfe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 3));
    // 0x19bfe4: 0xffb20020
    ctx->pc = 0x19bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19bfe8: 0xffb10010
    ctx->pc = 0x19bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19bfec: 0x108082
    ctx->pc = 0x19bfecu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x19bff0: 0x80902d
    ctx->pc = 0x19bff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bff4: 0x108080
    ctx->pc = 0x19bff4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x19bff8: 0x24d1fffc
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x19bffc: 0x200202d
    ctx->pc = 0x19bffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c000: 0x220302d
    ctx->pc = 0x19c000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c004: 0xffbf0030
    ctx->pc = 0x19c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19c008: 0xc050cfe
    ctx->pc = 0x19C008u;
    SET_GPR_U32(ctx, 31, 0x19C010u);
    ctx->pc = 0x19C00Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C010u; }
        else if (ctx->pc != 0x19C010u) { ctx->pc = 0x19C010u; }
    }
    if (ctx->pc != 0x19C010u) { return; }
    ctx->pc = 0x19C010u;
    // 0x19c010: 0x2403000c
    ctx->pc = 0x19c010u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x19c014: 0xae500000
    ctx->pc = 0x19c014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x19c018: 0x223001a
    ctx->pc = 0x19c018u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19c01c: 0x50600001
    ctx->pc = 0x19C01Cu;
    {
        const bool branch_taken_0x19c01c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x19c01c) {
            ctx->pc = 0x19C020u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19C024u;
            goto label_19c024;
        }
    }
    ctx->pc = 0x19C024u;
label_19c024:
    // 0x19c024: 0xae400010
    ctx->pc = 0x19c024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x19c028: 0xae400008
    ctx->pc = 0x19c028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x19c02c: 0xae40000c
    ctx->pc = 0x19c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x19c030: 0xdfbf0030
    ctx->pc = 0x19c030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c034: 0xdfb00000
    ctx->pc = 0x19c034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c038: 0x8812
    ctx->pc = 0x19c038u;
    SET_GPR_U32(ctx, 17, ctx->lo);
    // 0x19c03c: 0xae510004
    ctx->pc = 0x19c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x19c040: 0xdfb20020
    ctx->pc = 0x19c040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c044: 0xdfb10010
    ctx->pc = 0x19c044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c048: 0x3e00008
    ctx->pc = 0x19C048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C04Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C024u: goto label_19c024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C050u;
}
