#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldPsysActivate
// Address: 0x21bbb8 - 0x21bcdc
void WorldPsysActivate_0x21bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21bbb8u;

    // 0x21bbb8: 0x27bdffd0
    ctx->pc = 0x21bbb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21bbbc: 0xffbf0020
    ctx->pc = 0x21bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21bbc0: 0xffb00010
    ctx->pc = 0x21bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21bbc4: 0x80802d
    ctx->pc = 0x21bbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bbc8: 0x8e020010
    ctx->pc = 0x21bbc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bbcc: 0x3c030080
    ctx->pc = 0x21bbccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x21bbd0: 0x431024
    ctx->pc = 0x21bbd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bbd4: 0x54400037
    ctx->pc = 0x21BBD4u;
    {
        const bool branch_taken_0x21bbd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21bbd4) {
            ctx->pc = 0x21BBD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x21BCB4u;
            goto label_21bcb4;
        }
    }
    ctx->pc = 0x21BBDCu;
    // 0x21bbdc: 0x3c05003a
    ctx->pc = 0x21bbdcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x21bbe0: 0xc0bf4b2
    ctx->pc = 0x21BBE0u;
    SET_GPR_U32(ctx, 31, 0x21BBE8u);
    ctx->pc = 0x21BBE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 25552));
    ctx->pc = 0x2FD2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strstr_0x2fd2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBE8u; }
    }
    if (ctx->pc != 0x21BBE8u) { return; }
    ctx->pc = 0x21BBE8u;
    // 0x21bbe8: 0x14400006
    ctx->pc = 0x21BBE8u;
    {
        const bool branch_taken_0x21bbe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21BBECu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x21bbe8) {
            ctx->pc = 0x21BC04u;
            goto label_21bc04;
        }
    }
    ctx->pc = 0x21BBF0u;
    // 0x21bbf0: 0x248463d8
    ctx->pc = 0x21bbf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25560));
    // 0x21bbf4: 0xc0b492e
    ctx->pc = 0x21BBF4u;
    SET_GPR_U32(ctx, 31, 0x21BBFCu);
    ctx->pc = 0x21BBF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBFCu; }
    }
    if (ctx->pc != 0x21BBFCu) { return; }
    ctx->pc = 0x21BBFCu;
    // 0x21bbfc: 0x10000033
    ctx->pc = 0x21BBFCu;
    {
        const bool branch_taken_0x21bbfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BC00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bbfc) {
            ctx->pc = 0x21BCCCu;
            goto label_21bccc;
        }
    }
    ctx->pc = 0x21BC04u;
label_21bc04:
    // 0x21bc04: 0xc086ed0
    ctx->pc = 0x21BC04u;
    SET_GPR_U32(ctx, 31, 0x21BC0Cu);
    ctx->pc = 0x21BC08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x21BB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPsysIdx_0x21bb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC0Cu; }
    }
    if (ctx->pc != 0x21BC0Cu) { return; }
    ctx->pc = 0x21BC0Cu;
    // 0x21bc0c: 0x40282d
    ctx->pc = 0x21bc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc10: 0x4a20028
    ctx->pc = 0x21BC10u;
    {
        const bool branch_taken_0x21bc10 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x21bc10) {
            ctx->pc = 0x21BC14u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x21BCB4u;
            goto label_21bcb4;
        }
    }
    ctx->pc = 0x21BC18u;
    // 0x21bc18: 0x86020036
    ctx->pc = 0x21bc18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x21bc1c: 0x18400012
    ctx->pc = 0x21BC1Cu;
    {
        const bool branch_taken_0x21bc1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21BC20u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bc1c) {
            ctx->pc = 0x21BC68u;
            goto label_21bc68;
        }
    }
    ctx->pc = 0x21BC24u;
    // 0x21bc24: 0x3c040032
    ctx->pc = 0x21bc24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21bc28: 0x8e020038
    ctx->pc = 0x21bc28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21bc2c: 0x24030028
    ctx->pc = 0x21bc2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x21bc30: 0x431018
    ctx->pc = 0x21bc30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21bc34: 0x8c83fa00
    ctx->pc = 0x21bc34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294965760)));
    // 0x21bc38: 0x434821
    ctx->pc = 0x21bc38u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bc3c: 0x25290008
    ctx->pc = 0x21bc3cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x21bc40: 0xc5200000
    ctx->pc = 0x21bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bc44: 0x46000007
    ctx->pc = 0x21bc44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21bc48: 0xe7a00000
    ctx->pc = 0x21bc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21bc4c: 0xc5200004
    ctx->pc = 0x21bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bc50: 0x46000007
    ctx->pc = 0x21bc50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21bc54: 0xe7a00004
    ctx->pc = 0x21bc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21bc58: 0xc5200008
    ctx->pc = 0x21bc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21bc5c: 0x46000007
    ctx->pc = 0x21bc5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21bc60: 0xe7a00008
    ctx->pc = 0x21bc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21bc64: 0x3a0482d
    ctx->pc = 0x21bc64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21bc68:
    // 0x21bc68: 0x3c020032
    ctx->pc = 0x21bc68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21bc6c: 0x24060138
    ctx->pc = 0x21bc6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 312));
    // 0x21bc70: 0xa63018
    ctx->pc = 0x21bc70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21bc74: 0x8c42fa94
    ctx->pc = 0x21bc74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965908)));
    // 0x21bc78: 0x8e070010
    ctx->pc = 0x21bc78u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bc7c: 0x202d
    ctx->pc = 0x21bc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bc80: 0x8e050028
    ctx->pc = 0x21bc80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21bc84: 0xc23021
    ctx->pc = 0x21bc84u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21bc88: 0x30e71000
    ctx->pc = 0x21bc88u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 4096));
    // 0x21bc8c: 0xc0b2dda
    ctx->pc = 0x21BC8Cu;
    SET_GPR_U32(ctx, 31, 0x21BC94u);
    ctx->pc = 0x21BC90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewWorldPsys_0x2cb768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BC94u; }
    }
    if (ctx->pc != 0x21BC94u) { return; }
    ctx->pc = 0x21BC94u;
    // 0x21bc94: 0x8e020010
    ctx->pc = 0x21bc94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bc98: 0x3c03ffbf
    ctx->pc = 0x21bc98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65471 << 16));
    // 0x21bc9c: 0x3463ffff
    ctx->pc = 0x21bc9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x21bca0: 0x431024
    ctx->pc = 0x21bca0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bca4: 0x3c030080
    ctx->pc = 0x21bca4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x21bca8: 0x431025
    ctx->pc = 0x21bca8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bcac: 0xae020010
    ctx->pc = 0x21bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x21bcb0: 0x8e020028
    ctx->pc = 0x21bcb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_21bcb4:
    // 0x21bcb4: 0x8c430060
    ctx->pc = 0x21bcb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x21bcb8: 0x3c04ffff
    ctx->pc = 0x21bcb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x21bcbc: 0x3484fffd
    ctx->pc = 0x21bcbcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65533));
    // 0x21bcc0: 0x641824
    ctx->pc = 0x21bcc0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21bcc4: 0xac430060
    ctx->pc = 0x21bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x21bcc8: 0x24020001
    ctx->pc = 0x21bcc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21bccc:
    // 0x21bccc: 0xdfbf0020
    ctx->pc = 0x21bcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bcd0: 0xdfb00010
    ctx->pc = 0x21bcd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bcd4: 0x3e00008
    ctx->pc = 0x21BCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BCD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BC04u: goto label_21bc04;
            case 0x21BC68u: goto label_21bc68;
            case 0x21BCB4u: goto label_21bcb4;
            case 0x21BCCCu: goto label_21bccc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BCDCu;
}
