#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableDmac
// Address: 0x304120 - 0x304184
void DisableDmac_0x304120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304120u;

    // 0x304120: 0x27bdffe0
    ctx->pc = 0x304120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304124: 0xffbf0010
    ctx->pc = 0x304124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304128: 0xffb00000
    ctx->pc = 0x304128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30412c: 0x40106000
    ctx->pc = 0x30412cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x304130: 0x3c020001
    ctx->pc = 0x304130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x304134: 0x2028024
    ctx->pc = 0x304134u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x304138: 0x12000008
    ctx->pc = 0x304138u;
    {
        const bool branch_taken_0x304138 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x30413Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x304138) {
            ctx->pc = 0x30415Cu;
            goto label_30415c;
        }
    }
    ctx->pc = 0x304140u;
label_304140:
    // 0x304140: 0x42000039
    ctx->pc = 0x304140u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x304144: 0x40f
    ctx->pc = 0x304144u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304148: 0x40026000
    ctx->pc = 0x304148u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x30414c: 0x431024
    ctx->pc = 0x30414cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304150: 0x0
    ctx->pc = 0x304150u;
    // NOP
    // 0x304154: 0x1440fffa
    ctx->pc = 0x304154u;
    {
        const bool branch_taken_0x304154 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x304154) {
            ctx->pc = 0x304140u;
            goto label_304140;
        }
    }
    ctx->pc = 0x30415Cu;
label_30415c:
    // 0x30415c: 0xc0c0cd4
    ctx->pc = 0x30415Cu;
    SET_GPR_U32(ctx, 31, 0x304164u);
    ctx->pc = 0x303350u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableDmac_0x303350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304164u; }
    }
    if (ctx->pc != 0x304164u) { return; }
    ctx->pc = 0x304164u;
    // 0x304164: 0xf
    ctx->pc = 0x304164u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304168: 0x12000003
    ctx->pc = 0x304168u;
    {
        const bool branch_taken_0x304168 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x30416Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x304168) {
            ctx->pc = 0x304178u;
            goto label_304178;
        }
    }
    ctx->pc = 0x304170u;
    // 0x304170: 0x42000038
    ctx->pc = 0x304170u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x304174: 0xdfbf0010
    ctx->pc = 0x304174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304178:
    // 0x304178: 0xdfb00000
    ctx->pc = 0x304178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30417c: 0x3e00008
    ctx->pc = 0x30417Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304180u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304140u: goto label_304140;
            case 0x30415Cu: goto label_30415c;
            case 0x304178u: goto label_304178;
            default: break;
        }
        return;
    }
    ctx->pc = 0x304184u;
}
