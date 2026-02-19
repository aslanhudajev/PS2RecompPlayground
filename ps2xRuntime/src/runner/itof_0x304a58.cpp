#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: itof
// Address: 0x304a58 - 0x304b20
void itof_0x304a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304a58u;

    // 0x304a58: 0x27bdfff0
    ctx->pc = 0x304a58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304a5c: 0x282d
    ctx->pc = 0x304a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a60: 0xffbf0000
    ctx->pc = 0x304a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304a64: 0x14800003
    ctx->pc = 0x304A64u;
    {
        const bool branch_taken_0x304a64 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x304A68u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x304a64) {
            ctx->pc = 0x304A74u;
            goto label_304a74;
        }
    }
    ctx->pc = 0x304A6Cu;
    // 0x304a6c: 0x10000029
    ctx->pc = 0x304A6Cu;
    {
        const bool branch_taken_0x304a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x304A70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x304a6c) {
            ctx->pc = 0x304B14u;
            goto label_304b14;
        }
    }
    ctx->pc = 0x304A74u;
label_304a74:
    // 0x304a74: 0x4810004
    ctx->pc = 0x304A74u;
    {
        const bool branch_taken_0x304a74 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x304A78u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x304a74) {
            ctx->pc = 0x304A88u;
            goto label_304a88;
        }
    }
    ctx->pc = 0x304A7Cu;
    // 0x304a7c: 0x4182f
    ctx->pc = 0x304a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x304a80: 0x34068000
    ctx->pc = 0x304a80u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    // 0x304a84: 0x6343c
    ctx->pc = 0x304a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_304a88:
    // 0x304a88: 0x24020001
    ctx->pc = 0x304a88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x304a8c: 0x5062000a
    ctx->pc = 0x304A8Cu;
    {
        const bool branch_taken_0x304a8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x304a8c) {
            ctx->pc = 0x304A90u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 53));
            ctx->pc = 0x304AB8u;
            goto label_304ab8;
        }
    }
    ctx->pc = 0x304A94u;
    // 0x304a94: 0x0
    ctx->pc = 0x304a94u;
    // NOP
label_304a98:
    // 0x304a98: 0x64a50001
    ctx->pc = 0x304a98u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)1);
    // 0x304a9c: 0x3187b
    ctx->pc = 0x304a9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
    // 0x304aa0: 0x0
    ctx->pc = 0x304aa0u;
    // NOP
    // 0x304aa4: 0x0
    ctx->pc = 0x304aa4u;
    // NOP
    // 0x304aa8: 0x0
    ctx->pc = 0x304aa8u;
    // NOP
    // 0x304aac: 0x1462fffa
    ctx->pc = 0x304AACu;
    {
        const bool branch_taken_0x304aac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x304aac) {
            ctx->pc = 0x304A98u;
            goto label_304a98;
        }
    }
    ctx->pc = 0x304AB4u;
    // 0x304ab4: 0x28a20035
    ctx->pc = 0x304ab4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 53));
label_304ab8:
    // 0x304ab8: 0x10400007
    ctx->pc = 0x304AB8u;
    {
        const bool branch_taken_0x304ab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x304ABCu;
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)1023);
        if (branch_taken_0x304ab8) {
            ctx->pc = 0x304AD8u;
            goto label_304ad8;
        }
    }
    ctx->pc = 0x304AC0u;
    // 0x304ac0: 0x24020040
    ctx->pc = 0x304ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x304ac4: 0x45102f
    ctx->pc = 0x304ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x304ac8: 0x2103c
    ctx->pc = 0x304ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304acc: 0x2103f
    ctx->pc = 0x304accu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x304ad0: 0x442014
    ctx->pc = 0x304ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x304ad4: 0x4233b
    ctx->pc = 0x304ad4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 12);
label_304ad8:
    // 0x304ad8: 0x3153c
    ctx->pc = 0x304ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 20));
    // 0x304adc: 0xc21025
    ctx->pc = 0x304adcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x304ae0: 0x442025
    ctx->pc = 0x304ae0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x304ae4: 0x4800005
    ctx->pc = 0x304AE4u;
    {
        const bool branch_taken_0x304ae4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x304AE8u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        if (branch_taken_0x304ae4) {
            ctx->pc = 0x304AFCu;
            goto label_304afc;
        }
    }
    ctx->pc = 0x304AECu;
    // 0x304aec: 0xc0bdf3c
    ctx->pc = 0x304AECu;
    SET_GPR_U32(ctx, 31, 0x304AF4u);
    ctx->pc = 0x2F7CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x2f7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304AF4u; }
    }
    if (ctx->pc != 0x304AF4u) { return; }
    ctx->pc = 0x304AF4u;
    // 0x304af4: 0x10000008
    ctx->pc = 0x304AF4u;
    {
        const bool branch_taken_0x304af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x304AF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x304af4) {
            ctx->pc = 0x304B18u;
            goto label_304b18;
        }
    }
    ctx->pc = 0x304AFCu;
label_304afc:
    // 0x304afc: 0x30840001
    ctx->pc = 0x304afcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x304b00: 0xc0bdf3c
    ctx->pc = 0x304B00u;
    SET_GPR_U32(ctx, 31, 0x304B08u);
    ctx->pc = 0x304B04u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x2F7CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x2f7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B08u; }
    }
    if (ctx->pc != 0x304B08u) { return; }
    ctx->pc = 0x304B08u;
    // 0x304b08: 0x40202d
    ctx->pc = 0x304b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b0c: 0xc0be340
    ctx->pc = 0x304B0Cu;
    SET_GPR_U32(ctx, 31, 0x304B14u);
    ctx->pc = 0x304B10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304B14u; }
    }
    if (ctx->pc != 0x304B14u) { return; }
    ctx->pc = 0x304B14u;
label_304b14:
    // 0x304b14: 0xdfbf0000
    ctx->pc = 0x304b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304b18:
    // 0x304b18: 0x3e00008
    ctx->pc = 0x304B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304B1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304A74u: goto label_304a74;
            case 0x304A88u: goto label_304a88;
            case 0x304A98u: goto label_304a98;
            case 0x304AB8u: goto label_304ab8;
            case 0x304AD8u: goto label_304ad8;
            case 0x304AFCu: goto label_304afc;
            case 0x304B14u: goto label_304b14;
            case 0x304B18u: goto label_304b18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x304B20u;
}
