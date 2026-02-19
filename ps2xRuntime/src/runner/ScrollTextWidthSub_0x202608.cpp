#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScrollTextWidthSub
// Address: 0x202608 - 0x2026a0
void ScrollTextWidthSub_0x202608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202608u;

    // 0x202608: 0x27bdff60
    ctx->pc = 0x202608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20260c: 0xffbf0080
    ctx->pc = 0x20260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x202610: 0xffb30070
    ctx->pc = 0x202610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x202614: 0xffb20060
    ctx->pc = 0x202614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x202618: 0xffb10050
    ctx->pc = 0x202618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x20261c: 0xffb00040
    ctx->pc = 0x20261cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x202620: 0xe7b40090
    ctx->pc = 0x202620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x202624: 0xa0982d
    ctx->pc = 0x202624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202628: 0x46006506
    ctx->pc = 0x202628u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20262c: 0x3c050031
    ctx->pc = 0x20262cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x202630: 0x24a5fb78
    ctx->pc = 0x202630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966136));
    // 0x202634: 0xc0803e0
    ctx->pc = 0x202634u;
    SET_GPR_U32(ctx, 31, 0x20263Cu);
    ctx->pc = 0x202638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixMLineText_0x200f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20263Cu; }
    }
    if (ctx->pc != 0x20263Cu) { return; }
    ctx->pc = 0x20263Cu;
    // 0x20263c: 0x40902d
    ctx->pc = 0x20263cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202640: 0x882d
    ctx->pc = 0x202640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202644: 0x1a40000d
    ctx->pc = 0x202644u;
    {
        const bool branch_taken_0x202644 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x202648u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202644) {
            ctx->pc = 0x20267Cu;
            goto label_20267c;
        }
    }
    ctx->pc = 0x20264Cu;
    // 0x20264c: 0x111080
    ctx->pc = 0x20264cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_202650:
    // 0x202650: 0x3a21021
    ctx->pc = 0x202650u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x202654: 0x8c440000
    ctx->pc = 0x202654u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202658: 0x260282d
    ctx->pc = 0x202658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20265c: 0xc080552
    ctx->pc = 0x20265Cu;
    SET_GPR_U32(ctx, 31, 0x202664u);
    ctx->pc = 0x202660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202664u; }
    }
    if (ctx->pc != 0x202664u) { return; }
    ctx->pc = 0x202664u;
    // 0x202664: 0x202182a
    ctx->pc = 0x202664u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x202668: 0x43800b
    ctx->pc = 0x202668u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x20266c: 0x26310001
    ctx->pc = 0x20266cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x202670: 0x232102a
    ctx->pc = 0x202670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x202674: 0x1440fff6
    ctx->pc = 0x202674u;
    {
        const bool branch_taken_0x202674 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x202678u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x202674) {
            ctx->pc = 0x202650u;
            goto label_202650;
        }
    }
    ctx->pc = 0x20267Cu;
label_20267c:
    // 0x20267c: 0x200102d
    ctx->pc = 0x20267cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202680: 0xdfbf0080
    ctx->pc = 0x202680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x202684: 0xdfb30070
    ctx->pc = 0x202684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202688: 0xdfb20060
    ctx->pc = 0x202688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20268c: 0xdfb10050
    ctx->pc = 0x20268cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202690: 0xdfb00040
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202694: 0xc7b40090
    ctx->pc = 0x202694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202698: 0x3e00008
    ctx->pc = 0x202698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20269Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202650u: goto label_202650;
            case 0x20267Cu: goto label_20267c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2026A0u;
}
