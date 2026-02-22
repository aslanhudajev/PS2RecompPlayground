#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fptoui
// Address: 0x129fa8 - 0x12a040
void fptoui_0x129fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129fa8u;

    // 0x129fa8: 0x27bdffd0
    ctx->pc = 0x129fa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129fac: 0xffbf0020
    ctx->pc = 0x129facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129fb0: 0x27a40010
    ctx->pc = 0x129fb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x129fb4: 0xe7ac0010
    ctx->pc = 0x129fb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x129fb8: 0xc04a586
    ctx->pc = 0x129FB8u;
    SET_GPR_U32(ctx, 31, 0x129FC0u);
    ctx->pc = 0x129FBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FC0u; }
    }
    if (ctx->pc != 0x129FC0u) { return; }
    ctx->pc = 0x129FC0u;
    // 0x129fc0: 0x8fa30000
    ctx->pc = 0x129fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129fc4: 0x38620002
    ctx->pc = 0x129fc4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x129fc8: 0x10400003
    ctx->pc = 0x129FC8u;
    {
        const bool branch_taken_0x129fc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129FCCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x129fc8) {
            ctx->pc = 0x129FD8u;
            goto label_129fd8;
        }
    }
    ctx->pc = 0x129FD0u;
    // 0x129fd0: 0x10400003
    ctx->pc = 0x129FD0u;
    {
        const bool branch_taken_0x129fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129FD4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x129fd0) {
            ctx->pc = 0x129FE0u;
            goto label_129fe0;
        }
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x10000016
    ctx->pc = 0x129FD8u;
    {
        const bool branch_taken_0x129fd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129FDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129fd8) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x129FE0u;
label_129fe0:
    // 0x129fe0: 0x14400014
    ctx->pc = 0x129FE0u;
    {
        const bool branch_taken_0x129fe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x129FE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129fe0) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x129FE8u;
    // 0x129fe8: 0x38620004
    ctx->pc = 0x129fe8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
    // 0x129fec: 0x10400005
    ctx->pc = 0x129FECu;
    {
        const bool branch_taken_0x129fec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129FF0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x129fec) {
            ctx->pc = 0x12A004u;
            goto label_12a004;
        }
    }
    ctx->pc = 0x129FF4u;
    // 0x129ff4: 0x480fff8
    ctx->pc = 0x129FF4u;
    {
        const bool branch_taken_0x129ff4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x129FF8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 32));
        if (branch_taken_0x129ff4) {
            ctx->pc = 0x129FD8u;
            goto label_129fd8;
        }
    }
    ctx->pc = 0x129FFCu;
    // 0x129ffc: 0x54400004
    ctx->pc = 0x129FFCu;
    {
        const bool branch_taken_0x129ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x129ffc) {
            ctx->pc = 0x12A000u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
            ctx->pc = 0x12A010u;
            goto label_12a010;
        }
    }
    ctx->pc = 0x12A004u;
label_12a004:
    // 0x12a004: 0x3c02ffff
    ctx->pc = 0x12a004u;
    SET_GPR_S32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x12a008: 0x1000000a
    ctx->pc = 0x12A008u;
    {
        const bool branch_taken_0x12a008 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12A00Cu;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
        if (branch_taken_0x12a008) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x12A010u;
label_12a010:
    // 0x12a010: 0x54400005
    ctx->pc = 0x12A010u;
    {
        const bool branch_taken_0x12a010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12a010) {
            ctx->pc = 0x12A014u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
            ctx->pc = 0x12A028u;
            goto label_12a028;
        }
    }
    ctx->pc = 0x12A018u;
    // 0x12a018: 0x8fa3000c
    ctx->pc = 0x12a018u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12a01c: 0x2482ffe2
    ctx->pc = 0x12a01cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x12a020: 0x10000004
    ctx->pc = 0x12A020u;
    {
        const bool branch_taken_0x12a020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12A024u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        if (branch_taken_0x12a020) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x12A028u;
label_12a028:
    // 0x12a028: 0x8fa3000c
    ctx->pc = 0x12a028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12a02c: 0x441023
    ctx->pc = 0x12a02cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12a030: 0x431006
    ctx->pc = 0x12a030u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_12a034:
    // 0x12a034: 0xdfbf0020
    ctx->pc = 0x12a034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a038: 0x3e00008
    ctx->pc = 0x12A038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A03Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129FD8u: goto label_129fd8;
            case 0x129FE0u: goto label_129fe0;
            case 0x12A004u: goto label_12a004;
            case 0x12A010u: goto label_12a010;
            case 0x12A028u: goto label_12a028;
            case 0x12A034u: goto label_12a034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A040u;
}
