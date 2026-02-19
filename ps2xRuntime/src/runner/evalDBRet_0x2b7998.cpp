#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalDBRet
// Address: 0x2b7998 - 0x2b7b80
void evalDBRet_0x2b7998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7998u;

    // 0x2b7998: 0x27bdffc0
    ctx->pc = 0x2b7998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b799c: 0xffbf0030
    ctx->pc = 0x2b799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b79a0: 0xffb20020
    ctx->pc = 0x2b79a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b79a4: 0xffb10010
    ctx->pc = 0x2b79a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b79a8: 0xffb00000
    ctx->pc = 0x2b79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b79ac: 0x80882d
    ctx->pc = 0x2b79acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79b0: 0xa0902d
    ctx->pc = 0x2b79b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79b4: 0x3c020037
    ctx->pc = 0x2b79b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b79b8: 0x8c4220ac
    ctx->pc = 0x2b79b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b79bc: 0x8c42002c
    ctx->pc = 0x2b79bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b79c0: 0x14400007
    ctx->pc = 0x2B79C0u;
    {
        const bool branch_taken_0x2b79c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B79C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b79c0) {
            ctx->pc = 0x2B79E0u;
            goto label_2b79e0;
        }
    }
    ctx->pc = 0x2B79C8u;
    // 0x2b79c8: 0xdfbf0030
    ctx->pc = 0x2b79c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b79cc: 0xdfb20020
    ctx->pc = 0x2b79ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b79d0: 0xdfb10010
    ctx->pc = 0x2b79d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b79d4: 0xdfb00000
    ctx->pc = 0x2b79d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b79d8: 0x80ad14a
    ctx->pc = 0x2B79D8u;
    ctx->pc = 0x2B79DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2B4528u;
    evalDBLvlDown_0x2b4528(rdram, ctx, runtime); return;
    ctx->pc = 0x2B79E0u;
label_2b79e0:
    // 0x2b79e0: 0x3c04003b
    ctx->pc = 0x2b79e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b79e4: 0x248451b0
    ctx->pc = 0x2b79e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20912));
    // 0x2b79e8: 0x2405003e
    ctx->pc = 0x2b79e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 62));
    // 0x2b79ec: 0x302d
    ctx->pc = 0x2b79ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79f0: 0xc0ad0d6
    ctx->pc = 0x2B79F0u;
    SET_GPR_U32(ctx, 31, 0x2B79F8u);
    ctx->pc = 0x2B79F4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79F8u; }
    }
    if (ctx->pc != 0x2B79F8u) { return; }
    ctx->pc = 0x2B79F8u;
    // 0x2b79f8: 0x220202d
    ctx->pc = 0x2b79f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79fc: 0x240282d
    ctx->pc = 0x2b79fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a00: 0x302d
    ctx->pc = 0x2b7a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a04: 0x382d
    ctx->pc = 0x2b7a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a08: 0x24080020
    ctx->pc = 0x2b7a08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7a0c: 0x24090023
    ctx->pc = 0x2b7a0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b7a10: 0xc0addd0
    ctx->pc = 0x2B7A10u;
    SET_GPR_U32(ctx, 31, 0x2B7A18u);
    ctx->pc = 0x2B7A14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7740u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBSectionStr_0x2b7740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A18u; }
    }
    if (ctx->pc != 0x2B7A18u) { return; }
    ctx->pc = 0x2B7A18u;
    // 0x2b7a18: 0x3c04003b
    ctx->pc = 0x2b7a18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7a1c: 0x248451c0
    ctx->pc = 0x2b7a1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20928));
    // 0x2b7a20: 0xc0b4a34
    ctx->pc = 0x2B7A20u;
    SET_GPR_U32(ctx, 31, 0x2B7A28u);
    ctx->pc = 0x2B7A24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A28u; }
    }
    if (ctx->pc != 0x2B7A28u) { return; }
    ctx->pc = 0x2B7A28u;
    // 0x2b7a28: 0xc0ad14a
    ctx->pc = 0x2B7A28u;
    SET_GPR_U32(ctx, 31, 0x2B7A30u);
    ctx->pc = 0x2B4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlDown_0x2b4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A30u; }
    }
    if (ctx->pc != 0x2B7A30u) { return; }
    ctx->pc = 0x2B7A30u;
    // 0x2b7a30: 0x8e030000
    ctx->pc = 0x2b7a30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b7a34: 0x24020002
    ctx->pc = 0x2b7a34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7a38: 0x10620024
    ctx->pc = 0x2B7A38u;
    {
        const bool branch_taken_0x2b7a38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7A3Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x2b7a38) {
            ctx->pc = 0x2B7ACCu;
            goto label_2b7acc;
        }
    }
    ctx->pc = 0x2B7A40u;
    // 0x2b7a40: 0x10400007
    ctx->pc = 0x2B7A40u;
    {
        const bool branch_taken_0x2b7a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7A44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b7a40) {
            ctx->pc = 0x2B7A60u;
            goto label_2b7a60;
        }
    }
    ctx->pc = 0x2B7A48u;
    // 0x2b7a48: 0x10600012
    ctx->pc = 0x2B7A48u;
    {
        const bool branch_taken_0x2b7a48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7A4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b7a48) {
            ctx->pc = 0x2B7A94u;
            goto label_2b7a94;
        }
    }
    ctx->pc = 0x2B7A50u;
    // 0x2b7a50: 0x10620018
    ctx->pc = 0x2B7A50u;
    {
        const bool branch_taken_0x2b7a50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7A54u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b7a50) {
            ctx->pc = 0x2B7AB4u;
            goto label_2b7ab4;
        }
    }
    ctx->pc = 0x2B7A58u;
    // 0x2b7a58: 0x10000030
    ctx->pc = 0x2B7A58u;
    {
        const bool branch_taken_0x2b7a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b7a58) {
            ctx->pc = 0x2B7B1Cu;
            goto label_2b7b1c;
        }
    }
    ctx->pc = 0x2B7A60u;
label_2b7a60:
    // 0x2b7a60: 0x10620029
    ctx->pc = 0x2B7A60u;
    {
        const bool branch_taken_0x2b7a60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7A64u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 33));
        if (branch_taken_0x2b7a60) {
            ctx->pc = 0x2B7B08u;
            goto label_2b7b08;
        }
    }
    ctx->pc = 0x2B7A68u;
    // 0x2b7a68: 0x10400005
    ctx->pc = 0x2B7A68u;
    {
        const bool branch_taken_0x2b7a68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7A6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2b7a68) {
            ctx->pc = 0x2B7A80u;
            goto label_2b7a80;
        }
    }
    ctx->pc = 0x2B7A70u;
    // 0x2b7a70: 0x1062001b
    ctx->pc = 0x2B7A70u;
    {
        const bool branch_taken_0x2b7a70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7A74u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b7a70) {
            ctx->pc = 0x2B7AE0u;
            goto label_2b7ae0;
        }
    }
    ctx->pc = 0x2B7A78u;
    // 0x2b7a78: 0x10000028
    ctx->pc = 0x2B7A78u;
    {
        const bool branch_taken_0x2b7a78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b7a78) {
            ctx->pc = 0x2B7B1Cu;
            goto label_2b7b1c;
        }
    }
    ctx->pc = 0x2B7A80u;
label_2b7a80:
    // 0x2b7a80: 0x24020040
    ctx->pc = 0x2b7a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b7a84: 0x1062001a
    ctx->pc = 0x2B7A84u;
    {
        const bool branch_taken_0x2b7a84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7A88u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b7a84) {
            ctx->pc = 0x2B7AF0u;
            goto label_2b7af0;
        }
    }
    ctx->pc = 0x2B7A8Cu;
    // 0x2b7a8c: 0x10000023
    ctx->pc = 0x2B7A8Cu;
    {
        const bool branch_taken_0x2b7a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b7a8c) {
            ctx->pc = 0x2B7B1Cu;
            goto label_2b7b1c;
        }
    }
    ctx->pc = 0x2B7A94u;
label_2b7a94:
    // 0x2b7a94: 0xc0be862
    ctx->pc = 0x2B7A94u;
    SET_GPR_U32(ctx, 31, 0x2B7A9Cu);
    ctx->pc = 0x2B7A98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A9Cu; }
    }
    if (ctx->pc != 0x2B7A9Cu) { return; }
    ctx->pc = 0x2B7A9Cu;
    // 0x2b7a9c: 0x3c04003b
    ctx->pc = 0x2b7a9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7aa0: 0x248451c8
    ctx->pc = 0x2b7aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20936));
    // 0x2b7aa4: 0xc0b4a34
    ctx->pc = 0x2B7AA4u;
    SET_GPR_U32(ctx, 31, 0x2B7AACu);
    ctx->pc = 0x2B7AA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AACu; }
    }
    if (ctx->pc != 0x2B7AACu) { return; }
    ctx->pc = 0x2B7AACu;
    // 0x2b7aac: 0x10000022
    ctx->pc = 0x2B7AACu;
    {
        const bool branch_taken_0x2b7aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7AB0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7aac) {
            ctx->pc = 0x2B7B38u;
            goto label_2b7b38;
        }
    }
    ctx->pc = 0x2B7AB4u;
label_2b7ab4:
    // 0x2b7ab4: 0x248451d8
    ctx->pc = 0x2b7ab4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20952));
    // 0x2b7ab8: 0x8e050010
    ctx->pc = 0x2b7ab8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b7abc: 0xc0b4a34
    ctx->pc = 0x2B7ABCu;
    SET_GPR_U32(ctx, 31, 0x2B7AC4u);
    ctx->pc = 0x2B7AC0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AC4u; }
    }
    if (ctx->pc != 0x2B7AC4u) { return; }
    ctx->pc = 0x2B7AC4u;
    // 0x2b7ac4: 0x1000001c
    ctx->pc = 0x2B7AC4u;
    {
        const bool branch_taken_0x2b7ac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7AC8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7ac4) {
            ctx->pc = 0x2B7B38u;
            goto label_2b7b38;
        }
    }
    ctx->pc = 0x2B7ACCu;
label_2b7acc:
    // 0x2b7acc: 0x3c04003b
    ctx->pc = 0x2b7accu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7ad0: 0xc0b4a34
    ctx->pc = 0x2B7AD0u;
    SET_GPR_U32(ctx, 31, 0x2B7AD8u);
    ctx->pc = 0x2B7AD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20984));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AD8u; }
    }
    if (ctx->pc != 0x2B7AD8u) { return; }
    ctx->pc = 0x2B7AD8u;
    // 0x2b7ad8: 0x10000017
    ctx->pc = 0x2B7AD8u;
    {
        const bool branch_taken_0x2b7ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7ADCu;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7ad8) {
            ctx->pc = 0x2B7B38u;
            goto label_2b7b38;
        }
    }
    ctx->pc = 0x2B7AE0u;
label_2b7ae0:
    // 0x2b7ae0: 0xc0b4a34
    ctx->pc = 0x2B7AE0u;
    SET_GPR_U32(ctx, 31, 0x2B7AE8u);
    ctx->pc = 0x2B7AE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21000));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AE8u; }
    }
    if (ctx->pc != 0x2B7AE8u) { return; }
    ctx->pc = 0x2B7AE8u;
    // 0x2b7ae8: 0x10000013
    ctx->pc = 0x2B7AE8u;
    {
        const bool branch_taken_0x2b7ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7AECu;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7ae8) {
            ctx->pc = 0x2B7B38u;
            goto label_2b7b38;
        }
    }
    ctx->pc = 0x2B7AF0u;
label_2b7af0:
    // 0x2b7af0: 0x24845218
    ctx->pc = 0x2b7af0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21016));
    // 0x2b7af4: 0x8e050014
    ctx->pc = 0x2b7af4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b7af8: 0xc0b4a34
    ctx->pc = 0x2B7AF8u;
    SET_GPR_U32(ctx, 31, 0x2B7B00u);
    ctx->pc = 0x2B7AFCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B00u; }
    }
    if (ctx->pc != 0x2B7B00u) { return; }
    ctx->pc = 0x2B7B00u;
    // 0x2b7b00: 0x1000000d
    ctx->pc = 0x2B7B00u;
    {
        const bool branch_taken_0x2b7b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7B04u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7b00) {
            ctx->pc = 0x2B7B38u;
            goto label_2b7b38;
        }
    }
    ctx->pc = 0x2B7B08u;
label_2b7b08:
    // 0x2b7b08: 0x3c04003b
    ctx->pc = 0x2b7b08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7b0c: 0xc0b4a34
    ctx->pc = 0x2B7B0Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B14u);
    ctx->pc = 0x2B7B10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21032));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B14u; }
    }
    if (ctx->pc != 0x2B7B14u) { return; }
    ctx->pc = 0x2B7B14u;
    // 0x2b7b14: 0x10000008
    ctx->pc = 0x2B7B14u;
    {
        const bool branch_taken_0x2b7b14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7B18u;
        SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
        if (branch_taken_0x2b7b14) {
            ctx->pc = 0x2B7B38u;
            goto label_2b7b38;
        }
    }
    ctx->pc = 0x2B7B1Cu;
label_2b7b1c:
    // 0x2b7b1c: 0xc0ad082
    ctx->pc = 0x2B7B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B24u);
    ctx->pc = 0x2B7B20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B24u; }
    }
    if (ctx->pc != 0x2B7B24u) { return; }
    ctx->pc = 0x2B7B24u;
    // 0x2b7b24: 0x3c04003b
    ctx->pc = 0x2b7b24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7b28: 0x24845230
    ctx->pc = 0x2b7b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21040));
    // 0x2b7b2c: 0xc0b4a34
    ctx->pc = 0x2B7B2Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B34u);
    ctx->pc = 0x2B7B30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B34u; }
    }
    if (ctx->pc != 0x2B7B34u) { return; }
    ctx->pc = 0x2B7B34u;
    // 0x2b7b34: 0x3c100037
    ctx->pc = 0x2b7b34u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
label_2b7b38:
    // 0x2b7b38: 0x8e0220ac
    ctx->pc = 0x2b7b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b7b3c: 0x8c450004
    ctx->pc = 0x2b7b3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7b40: 0x80a20000
    ctx->pc = 0x2b7b40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7b44: 0x10400006
    ctx->pc = 0x2B7B44u;
    {
        const bool branch_taken_0x2b7b44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7B48u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b7b44) {
            ctx->pc = 0x2B7B60u;
            goto label_2b7b60;
        }
    }
    ctx->pc = 0x2B7B4Cu;
    // 0x2b7b4c: 0xc0b4a34
    ctx->pc = 0x2B7B4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B54u);
    ctx->pc = 0x2B7B50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21056));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B54u; }
    }
    if (ctx->pc != 0x2B7B54u) { return; }
    ctx->pc = 0x2B7B54u;
    // 0x2b7b54: 0x8e0220ac
    ctx->pc = 0x2b7b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8364)));
    // 0x2b7b58: 0x8c420004
    ctx->pc = 0x2b7b58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7b5c: 0xa0400000
    ctx->pc = 0x2b7b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b7b60:
    // 0x2b7b60: 0x3c04003b
    ctx->pc = 0x2b7b60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7b64: 0x24844678
    ctx->pc = 0x2b7b64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    // 0x2b7b68: 0xdfbf0030
    ctx->pc = 0x2b7b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7b6c: 0xdfb20020
    ctx->pc = 0x2b7b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7b70: 0xdfb10010
    ctx->pc = 0x2b7b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7b74: 0xdfb00000
    ctx->pc = 0x2b7b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7b78: 0x80b4a34
    ctx->pc = 0x2B7B78u;
    ctx->pc = 0x2B7B7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B7B80u;
}
