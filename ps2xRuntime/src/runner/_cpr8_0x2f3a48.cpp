#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _cpr8
// Address: 0x2f3a48 - 0x2f3c34
void _cpr8_0x2f3a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3a48u;

    // 0x2f3a48: 0x3c03003a
    ctx->pc = 0x2f3a48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3a4c: 0x80602d
    ctx->pc = 0x2f3a4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a50: 0x8c643024
    ctx->pc = 0x2f3a50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12324)));
    // 0x2f3a54: 0x3c020fff
    ctx->pc = 0x2f3a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2f3a58: 0x3c03003a
    ctx->pc = 0x2f3a58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3a5c: 0x8d850000
    ctx->pc = 0x2f3a5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2f3a60: 0x8c980040
    ctx->pc = 0x2f3a60u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2f3a64: 0x3442ffff
    ctx->pc = 0x2f3a64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2f3a68: 0x8c6631ec
    ctx->pc = 0x2f3a68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 12780)));
    // 0x2f3a6c: 0xa24824
    ctx->pc = 0x2f3a6cu;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f3a70: 0x8f0300d8
    ctx->pc = 0x2f3a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 216)));
    // 0x2f3a74: 0x24040003
    ctx->pc = 0x2f3a74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3a78: 0x10c40006
    ctx->pc = 0x2F3A78u;
    {
        const bool branch_taken_0x2f3a78 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        ctx->pc = 0x2F3A7Cu;
        SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2f3a78) {
            ctx->pc = 0x2F3A94u;
            goto label_2f3a94;
        }
    }
    ctx->pc = 0x2F3A80u;
    // 0x2f3a80: 0x8f0400e0
    ctx->pc = 0x2f3a80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x2f3a84: 0x1480000f
    ctx->pc = 0x2F3A84u;
    {
        const bool branch_taken_0x2f3a84 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3A88u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a84) {
            ctx->pc = 0x2F3AC4u;
            goto label_2f3ac4;
        }
    }
    ctx->pc = 0x2F3A8Cu;
    // 0x2f3a8c: 0x10000003
    ctx->pc = 0x2F3A8Cu;
    {
        const bool branch_taken_0x2f3a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3A90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
        if (branch_taken_0x2f3a8c) {
            ctx->pc = 0x2F3A9Cu;
            goto label_2f3a9c;
        }
    }
    ctx->pc = 0x2F3A94u;
label_2f3a94:
    // 0x2f3a94: 0x8f0300e0
    ctx->pc = 0x2f3a94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x2f3a98: 0x8d820010
    ctx->pc = 0x2f3a98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_2f3a9c:
    // 0x2f3a9c: 0x24040180
    ctx->pc = 0x2f3a9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2f3aa0: 0x445818
    ctx->pc = 0x2f3aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f3aa4: 0x10600004
    ctx->pc = 0x2F3AA4u;
    {
        const bool branch_taken_0x2f3aa4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3AA8u;
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
        if (branch_taken_0x2f3aa4) {
            ctx->pc = 0x2F3AB8u;
            goto label_2f3ab8;
        }
    }
    ctx->pc = 0x2F3AACu;
    // 0x2f3aac: 0x31103
    ctx->pc = 0x2f3aacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f3ab0: 0x10000002
    ctx->pc = 0x2F3AB0u;
    {
        const bool branch_taken_0x2f3ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3AB4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2f3ab0) {
            ctx->pc = 0x2F3ABCu;
            goto label_2f3abc;
        }
    }
    ctx->pc = 0x2F3AB8u;
label_2f3ab8:
    // 0x2f3ab8: 0x160702d
    ctx->pc = 0x2f3ab8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2f3abc:
    // 0x2f3abc: 0x1000000a
    ctx->pc = 0x2F3ABCu;
    {
        const bool branch_taken_0x2f3abc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3AC0u;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f3abc) {
            ctx->pc = 0x2F3AE8u;
            goto label_2f3ae8;
        }
    }
    ctx->pc = 0x2F3AC4u;
label_2f3ac4:
    // 0x2f3ac4: 0x8d820010
    ctx->pc = 0x2f3ac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2f3ac8: 0x24050180
    ctx->pc = 0x2f3ac8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2f3acc: 0x42103
    ctx->pc = 0x2f3accu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2f3ad0: 0x240300c0
    ctx->pc = 0x2f3ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x2f3ad4: 0x21043
    ctx->pc = 0x2f3ad4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f3ad8: 0x837018
    ctx->pc = 0x2f3ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f3adc: 0x70455818
    ctx->pc = 0x2f3adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x2f3ae0: 0x24190002
    ctx->pc = 0x2f3ae0u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3ae4: 0xb5103
    ctx->pc = 0x2f3ae4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
label_2f3ae8:
    // 0x2f3ae8: 0x13200050
    ctx->pc = 0x2F3AE8u;
    {
        const bool branch_taken_0x2f3ae8 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3AECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ae8) {
            ctx->pc = 0x2F3C2Cu;
            goto label_2f3c2c;
        }
    }
    ctx->pc = 0x2F3AF0u;
    // 0x2f3af0: 0x8d87000c
    ctx->pc = 0x2f3af0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2f3af4: 0x0
    ctx->pc = 0x2f3af4u;
    // NOP
label_2f3af8:
    // 0x2f3af8: 0x1e0402d
    ctx->pc = 0x2f3af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3afc: 0x18e00043
    ctx->pc = 0x2F3AFCu;
    {
        const bool branch_taken_0x2f3afc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2F3B00u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3afc) {
            ctx->pc = 0x2F3C0Cu;
            goto label_2f3c0c;
        }
    }
    ctx->pc = 0x2F3B04u;
    // 0x2f3b04: 0x24ad0001
    ctx->pc = 0x2f3b04u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 1));
label_2f3b08:
    // 0x2f3b08: 0x3c021000
    ctx->pc = 0x2f3b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f3b0c: 0x3c041000
    ctx->pc = 0x2f3b0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f3b10: 0x3442d480
    ctx->pc = 0x2f3b10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54400));
    // 0x2f3b14: 0x3484d410
    ctx->pc = 0x2f3b14u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 54288));
    // 0x2f3b18: 0xac400000
    ctx->pc = 0x2f3b18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2f3b1c: 0x3c031000
    ctx->pc = 0x2f3b1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f3b20: 0xac890000
    ctx->pc = 0x2f3b20u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x2f3b24: 0x3463d420
    ctx->pc = 0x2f3b24u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54304));
    // 0x2f3b28: 0x3c041000
    ctx->pc = 0x2f3b28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f3b2c: 0xac6a0000
    ctx->pc = 0x2f3b2cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x2f3b30: 0x3484d400
    ctx->pc = 0x2f3b30u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 54272));
    // 0x2f3b34: 0x24020101
    ctx->pc = 0x2f3b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x2f3b38: 0x3c031000
    ctx->pc = 0x2f3b38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f3b3c: 0x12b2821
    ctx->pc = 0x2f3b3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2f3b40: 0xac820000
    ctx->pc = 0x2f3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2f3b44: 0x24c60001
    ctx->pc = 0x2f3b44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f3b48: 0x10e4821
    ctx->pc = 0x2f3b48u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x2f3b4c: 0x3463d400
    ctx->pc = 0x2f3b4cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54272));
label_2f3b50:
    // 0x2f3b50: 0x8c620000
    ctx->pc = 0x2f3b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3b54: 0x30420100
    ctx->pc = 0x2f3b54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2f3b58: 0x0
    ctx->pc = 0x2f3b58u;
    // NOP
    // 0x2f3b5c: 0x0
    ctx->pc = 0x2f3b5cu;
    // NOP
    // 0x2f3b60: 0x0
    ctx->pc = 0x2f3b60u;
    // NOP
    // 0x2f3b64: 0x1440fffa
    ctx->pc = 0x2F3B64u;
    {
        const bool branch_taken_0x2f3b64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f3b64) {
            ctx->pc = 0x2F3B50u;
            goto label_2f3b50;
        }
    }
    ctx->pc = 0x2F3B6Cu;
    // 0x2f3b6c: 0x3c021000
    ctx->pc = 0x2f3b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2f3b70: 0x3c041000
    ctx->pc = 0x2f3b70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f3b74: 0x3442d080
    ctx->pc = 0x2f3b74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53376));
    // 0x2f3b78: 0x3484d010
    ctx->pc = 0x2f3b78u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 53264));
    // 0x2f3b7c: 0xac400000
    ctx->pc = 0x2f3b7cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2f3b80: 0x3c031000
    ctx->pc = 0x2f3b80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f3b84: 0xac880000
    ctx->pc = 0x2f3b84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x2f3b88: 0x3463d020
    ctx->pc = 0x2f3b88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 53280));
    // 0x2f3b8c: 0x3c041000
    ctx->pc = 0x2f3b8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f3b90: 0xac6a0000
    ctx->pc = 0x2f3b90u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x2f3b94: 0x3484d000
    ctx->pc = 0x2f3b94u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 53248));
    // 0x2f3b98: 0x24020100
    ctx->pc = 0x2f3b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f3b9c: 0xac820000
    ctx->pc = 0x2f3b9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2f3ba0: 0x3c031000
    ctx->pc = 0x2f3ba0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f3ba4: 0x3463d000
    ctx->pc = 0x2f3ba4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 53248));
    // 0x2f3ba8: 0x8d87000c
    ctx->pc = 0x2f3ba8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x2f3bac: 0x0
    ctx->pc = 0x2f3bacu;
    // NOP
label_2f3bb0:
    // 0x2f3bb0: 0x8c620000
    ctx->pc = 0x2f3bb0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f3bb4: 0x30420100
    ctx->pc = 0x2f3bb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2f3bb8: 0x0
    ctx->pc = 0x2f3bb8u;
    // NOP
    // 0x2f3bbc: 0x0
    ctx->pc = 0x2f3bbcu;
    // NOP
    // 0x2f3bc0: 0x0
    ctx->pc = 0x2f3bc0u;
    // NOP
    // 0x2f3bc4: 0x1440fffa
    ctx->pc = 0x2F3BC4u;
    {
        const bool branch_taken_0x2f3bc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f3bc4) {
            ctx->pc = 0x2F3BB0u;
            goto label_2f3bb0;
        }
    }
    ctx->pc = 0x2F3BCCu;
    // 0x2f3bcc: 0x3c031000
    ctx->pc = 0x2f3bccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f3bd0: 0x3463d020
    ctx->pc = 0x2f3bd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 53280));
    // 0x2f3bd4: 0x0
    ctx->pc = 0x2f3bd4u;
    // NOP
label_2f3bd8:
    // 0x2f3bd8: 0x8c620000
    ctx->pc = 0x2f3bd8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x2f3bdc: 0x0
    ctx->pc = 0x2f3bdcu;
    // NOP
    // 0x2f3be0: 0x0
    ctx->pc = 0x2f3be0u;
    // NOP
    // 0x2f3be4: 0x0
    ctx->pc = 0x2f3be4u;
    // NOP
    // 0x2f3be8: 0x0
    ctx->pc = 0x2f3be8u;
    // NOP
    // 0x2f3bec: 0x1440fffa
    ctx->pc = 0x2F3BECu;
    {
        const bool branch_taken_0x2f3bec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f3bec) {
            ctx->pc = 0x2F3BD8u;
            goto label_2f3bd8;
        }
    }
    ctx->pc = 0x2F3BF4u;
    // 0x2f3bf4: 0x120402d
    ctx->pc = 0x2f3bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3bf8: 0xc7102a
    ctx->pc = 0x2f3bf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x2f3bfc: 0x1440ffc2
    ctx->pc = 0x2F3BFCu;
    {
        const bool branch_taken_0x2f3bfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3C00u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3bfc) {
            ctx->pc = 0x2F3B08u;
            goto label_2f3b08;
        }
    }
    ctx->pc = 0x2F3C04u;
    // 0x2f3c04: 0x10000003
    ctx->pc = 0x2F3C04u;
    {
        const bool branch_taken_0x2f3c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3C08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 228)));
        if (branch_taken_0x2f3c04) {
            ctx->pc = 0x2F3C14u;
            goto label_2f3c14;
        }
    }
    ctx->pc = 0x2F3C0Cu;
label_2f3c0c:
    // 0x2f3c0c: 0x24ad0001
    ctx->pc = 0x2f3c0cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f3c10: 0x8f0200e4
    ctx->pc = 0x2f3c10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 228)));
label_2f3c14:
    // 0x2f3c14: 0x240300c0
    ctx->pc = 0x2f3c14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x2f3c18: 0x1a0282d
    ctx->pc = 0x2f3c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c1c: 0x433018
    ctx->pc = 0x2f3c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f3c20: 0xb9202a
    ctx->pc = 0x2f3c20u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 25)));
    // 0x2f3c24: 0x1480ffb4
    ctx->pc = 0x2F3C24u;
    {
        const bool branch_taken_0x2f3c24 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3C28u;
        SET_GPR_U32(ctx, 15, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
        if (branch_taken_0x2f3c24) {
            ctx->pc = 0x2F3AF8u;
            goto label_2f3af8;
        }
    }
    ctx->pc = 0x2F3C2Cu;
label_2f3c2c:
    // 0x2f3c2c: 0x3e00008
    ctx->pc = 0x2F3C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3A94u: goto label_2f3a94;
            case 0x2F3A9Cu: goto label_2f3a9c;
            case 0x2F3AB8u: goto label_2f3ab8;
            case 0x2F3ABCu: goto label_2f3abc;
            case 0x2F3AC4u: goto label_2f3ac4;
            case 0x2F3AE8u: goto label_2f3ae8;
            case 0x2F3AF8u: goto label_2f3af8;
            case 0x2F3B08u: goto label_2f3b08;
            case 0x2F3B50u: goto label_2f3b50;
            case 0x2F3BB0u: goto label_2f3bb0;
            case 0x2F3BD8u: goto label_2f3bd8;
            case 0x2F3C0Cu: goto label_2f3c0c;
            case 0x2F3C14u: goto label_2f3c14;
            case 0x2F3C2Cu: goto label_2f3c2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3C34u;
}
