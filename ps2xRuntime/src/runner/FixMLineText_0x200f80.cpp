#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FixMLineText
// Address: 0x200f80 - 0x201020
void FixMLineText_0x200f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200f80u;

    // 0x200f80: 0x27bdffc0
    ctx->pc = 0x200f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200f84: 0xffbf0030
    ctx->pc = 0x200f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x200f88: 0xffb20020
    ctx->pc = 0x200f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200f8c: 0xffb10010
    ctx->pc = 0x200f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x200f90: 0xffb00000
    ctx->pc = 0x200f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200f94: 0x80102d
    ctx->pc = 0x200f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f98: 0xa0882d
    ctx->pc = 0x200f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f9c: 0x12200006
    ctx->pc = 0x200F9Cu;
    {
        const bool branch_taken_0x200f9c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x200FA0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200f9c) {
            ctx->pc = 0x200FB8u;
            goto label_200fb8;
        }
    }
    ctx->pc = 0x200FA4u;
    // 0x200fa4: 0x220202d
    ctx->pc = 0x200fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fa8: 0xc0bf2c1
    ctx->pc = 0x200FA8u;
    SET_GPR_U32(ctx, 31, 0x200FB0u);
    ctx->pc = 0x200FACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FB0u; }
    }
    if (ctx->pc != 0x200FB0u) { return; }
    ctx->pc = 0x200FB0u;
    // 0x200fb0: 0x10000002
    ctx->pc = 0x200FB0u;
    {
        const bool branch_taken_0x200fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200FB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200fb0) {
            ctx->pc = 0x200FBCu;
            goto label_200fbc;
        }
    }
    ctx->pc = 0x200FB8u;
label_200fb8:
    // 0x200fb8: 0x40202d
    ctx->pc = 0x200fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200fbc:
    // 0x200fbc: 0x10000003
    ctx->pc = 0x200FBCu;
    {
        const bool branch_taken_0x200fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200FC0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200fbc) {
            ctx->pc = 0x200FCCu;
            goto label_200fcc;
        }
    }
    ctx->pc = 0x200FC4u;
    // 0x200fc4: 0x0
    ctx->pc = 0x200fc4u;
    // NOP
label_200fc8:
    // 0x200fc8: 0x26100001
    ctx->pc = 0x200fc8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_200fcc:
    // 0x200fcc: 0x12400003
    ctx->pc = 0x200FCCu;
    {
        const bool branch_taken_0x200fcc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x200FD0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x200fcc) {
            ctx->pc = 0x200FDCu;
            goto label_200fdc;
        }
    }
    ctx->pc = 0x200FD4u;
    // 0x200fd4: 0x521021
    ctx->pc = 0x200fd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x200fd8: 0xac440000
    ctx->pc = 0x200fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_200fdc:
    // 0x200fdc: 0xc0803ce
    ctx->pc = 0x200FDCu;
    SET_GPR_U32(ctx, 31, 0x200FE4u);
    ctx->pc = 0x200FE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x200F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        my_strchr_0x200f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FE4u; }
    }
    if (ctx->pc != 0x200FE4u) { return; }
    ctx->pc = 0x200FE4u;
    // 0x200fe4: 0x40202d
    ctx->pc = 0x200fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fe8: 0x10800007
    ctx->pc = 0x200FE8u;
    {
        const bool branch_taken_0x200fe8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x200FECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x200fe8) {
            ctx->pc = 0x201008u;
            goto label_201008;
        }
    }
    ctx->pc = 0x200FF0u;
    // 0x200ff0: 0x56200001
    ctx->pc = 0x200FF0u;
    {
        const bool branch_taken_0x200ff0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x200ff0) {
            ctx->pc = 0x200FF4u;
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x200FF8u;
            goto label_200ff8;
        }
    }
    ctx->pc = 0x200FF8u;
label_200ff8:
    // 0x200ff8: 0x2a02000f
    ctx->pc = 0x200ff8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 15));
    // 0x200ffc: 0x5440fff2
    ctx->pc = 0x200FFCu;
    {
        const bool branch_taken_0x200ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x200ffc) {
            ctx->pc = 0x201000u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x200FC8u;
            goto label_200fc8;
        }
    }
    ctx->pc = 0x201004u;
    // 0x201004: 0x26020001
    ctx->pc = 0x201004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
label_201008:
    // 0x201008: 0xdfbf0030
    ctx->pc = 0x201008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20100c: 0xdfb20020
    ctx->pc = 0x20100cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201010: 0xdfb10010
    ctx->pc = 0x201010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201014: 0xdfb00000
    ctx->pc = 0x201014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201018: 0x3e00008
    ctx->pc = 0x201018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20101Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200FB8u: goto label_200fb8;
            case 0x200FBCu: goto label_200fbc;
            case 0x200FC8u: goto label_200fc8;
            case 0x200FCCu: goto label_200fcc;
            case 0x200FDCu: goto label_200fdc;
            case 0x200FF8u: goto label_200ff8;
            case 0x201008u: goto label_201008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201020u;
}
