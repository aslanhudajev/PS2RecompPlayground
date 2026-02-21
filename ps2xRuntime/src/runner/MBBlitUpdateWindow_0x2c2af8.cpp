#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitUpdateWindow
// Address: 0x2c2af8 - 0x2c2bd8
void MBBlitUpdateWindow_0x2c2af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2af8u;

    // 0x2c2af8: 0x27bdffa0
    ctx->pc = 0x2c2af8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c2afc: 0xffbf0040
    ctx->pc = 0x2c2afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c2b00: 0xffb30030
    ctx->pc = 0x2c2b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c2b04: 0xffb20020
    ctx->pc = 0x2c2b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c2b08: 0xffb10010
    ctx->pc = 0x2c2b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c2b0c: 0xffb00000
    ctx->pc = 0x2c2b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2b10: 0xe7b50058
    ctx->pc = 0x2c2b10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c2b14: 0xe7b40050
    ctx->pc = 0x2c2b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c2b18: 0x46006546
    ctx->pc = 0x2c2b18u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2c2b1c: 0x46006d06
    ctx->pc = 0x2c2b1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2c2b20: 0x3c020037
    ctx->pc = 0x2c2b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2b24: 0x8c4231b0
    ctx->pc = 0x2c2b24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12720)));
    // 0x2c2b28: 0x18400010
    ctx->pc = 0x2C2B28u;
    {
        const bool branch_taken_0x2c2b28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C2B2Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b28) {
            ctx->pc = 0x2C2B6Cu;
            goto label_2c2b6c;
        }
    }
    ctx->pc = 0x2C2B30u;
    // 0x2c2b30: 0x24130038
    ctx->pc = 0x2c2b30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c2b34: 0x3c020037
    ctx->pc = 0x2c2b34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2b38: 0x245231b8
    ctx->pc = 0x2c2b38u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 12728));
    // 0x2c2b3c: 0x3c110037
    ctx->pc = 0x2c2b3cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)55 << 16));
    // 0x2c2b40: 0x2131018
    ctx->pc = 0x2c2b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c2b44: 0x0
    ctx->pc = 0x2c2b44u;
    // NOP
label_2c2b48:
    // 0x2c2b48: 0x522021
    ctx->pc = 0x2c2b48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c2b4c: 0x4600ab06
    ctx->pc = 0x2c2b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c2b50: 0xc0b0a90
    ctx->pc = 0x2C2B50u;
    SET_GPR_U32(ctx, 31, 0x2C2B58u);
    ctx->pc = 0x2C2B54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C2A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitUpdateWindowSub_0x2c2a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2B58u; }
    }
    if (ctx->pc != 0x2C2B58u) { return; }
    ctx->pc = 0x2C2B58u;
    // 0x2c2b58: 0x26100001
    ctx->pc = 0x2c2b58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2b5c: 0x8e2231b0
    ctx->pc = 0x2c2b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12720)));
    // 0x2c2b60: 0x202102a
    ctx->pc = 0x2c2b60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2c2b64: 0x1440fff8
    ctx->pc = 0x2C2B64u;
    {
        const bool branch_taken_0x2c2b64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2B68u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c2b64) {
            ctx->pc = 0x2C2B48u;
            goto label_2c2b48;
        }
    }
    ctx->pc = 0x2C2B6Cu;
label_2c2b6c:
    // 0x2c2b6c: 0x3c020038
    ctx->pc = 0x2c2b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2b70: 0x8c428cb8
    ctx->pc = 0x2c2b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937784)));
    // 0x2c2b74: 0x1840000f
    ctx->pc = 0x2C2B74u;
    {
        const bool branch_taken_0x2c2b74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C2B78u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b74) {
            ctx->pc = 0x2C2BB4u;
            goto label_2c2bb4;
        }
    }
    ctx->pc = 0x2C2B7Cu;
    // 0x2c2b7c: 0x24130038
    ctx->pc = 0x2c2b7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c2b80: 0x3c020038
    ctx->pc = 0x2c2b80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2b84: 0x245285b8
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294935992));
    // 0x2c2b88: 0x3c110038
    ctx->pc = 0x2c2b88u;
    SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
    // 0x2c2b8c: 0x2131018
    ctx->pc = 0x2c2b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2c2b90:
    // 0x2c2b90: 0x522021
    ctx->pc = 0x2c2b90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c2b94: 0x4600ab06
    ctx->pc = 0x2c2b94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c2b98: 0xc0b0a90
    ctx->pc = 0x2C2B98u;
    SET_GPR_U32(ctx, 31, 0x2C2BA0u);
    ctx->pc = 0x2C2B9Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C2A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitUpdateWindowSub_0x2c2a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2BA0u; }
    }
    if (ctx->pc != 0x2C2BA0u) { return; }
    ctx->pc = 0x2C2BA0u;
    // 0x2c2ba0: 0x26100001
    ctx->pc = 0x2c2ba0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c2ba4: 0x8e228cb8
    ctx->pc = 0x2c2ba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294937784)));
    // 0x2c2ba8: 0x202102a
    ctx->pc = 0x2c2ba8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2c2bac: 0x1440fff8
    ctx->pc = 0x2C2BACu;
    {
        const bool branch_taken_0x2c2bac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2BB0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2c2bac) {
            ctx->pc = 0x2C2B90u;
            goto label_2c2b90;
        }
    }
    ctx->pc = 0x2C2BB4u;
label_2c2bb4:
    // 0x2c2bb4: 0xdfbf0040
    ctx->pc = 0x2c2bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2bb8: 0xdfb30030
    ctx->pc = 0x2c2bb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2bbc: 0xdfb20020
    ctx->pc = 0x2c2bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2bc0: 0xdfb10010
    ctx->pc = 0x2c2bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2bc4: 0xdfb00000
    ctx->pc = 0x2c2bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2bc8: 0xc7b50058
    ctx->pc = 0x2c2bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c2bcc: 0xc7b40050
    ctx->pc = 0x2c2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c2bd0: 0x3e00008
    ctx->pc = 0x2C2BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2BD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2B48u: goto label_2c2b48;
            case 0x2C2B6Cu: goto label_2c2b6c;
            case 0x2C2B90u: goto label_2c2b90;
            case 0x2C2BB4u: goto label_2c2bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2BD8u;
}
