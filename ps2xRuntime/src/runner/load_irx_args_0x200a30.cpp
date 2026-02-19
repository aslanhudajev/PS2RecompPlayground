#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_irx_args
// Address: 0x200a30 - 0x200ba0
void load_irx_args_0x200a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200a30u;

    // 0x200a30: 0x27bdff10
    ctx->pc = 0x200a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x200a34: 0xffbf00e0
    ctx->pc = 0x200a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x200a38: 0xffb500d0
    ctx->pc = 0x200a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x200a3c: 0xffb400c0
    ctx->pc = 0x200a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x200a40: 0xffb300b0
    ctx->pc = 0x200a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x200a44: 0xffb200a0
    ctx->pc = 0x200a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x200a48: 0xffb10090
    ctx->pc = 0x200a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x200a4c: 0xffb00080
    ctx->pc = 0x200a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x200a50: 0x80882d
    ctx->pc = 0x200a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a54: 0xa0802d
    ctx->pc = 0x200a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a58: 0xc0a82d
    ctx->pc = 0x200a58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a5c: 0xe0a02d
    ctx->pc = 0x200a5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a60: 0x100982d
    ctx->pc = 0x200a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a64: 0x902d
    ctx->pc = 0x200a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a68: 0x3c05003a
    ctx->pc = 0x200a68u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200a6c: 0x24a54538
    ctx->pc = 0x200a6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17720));
    // 0x200a70: 0xc0bec34
    ctx->pc = 0x200A70u;
    SET_GPR_U32(ctx, 31, 0x200A78u);
    ctx->pc = 0x200A74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2FB0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x2fb0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A78u; }
    }
    if (ctx->pc != 0x200A78u) { return; }
    ctx->pc = 0x200A78u;
    // 0x200a78: 0x14400014
    ctx->pc = 0x200A78u;
    {
        const bool branch_taken_0x200a78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200A7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200a78) {
            ctx->pc = 0x200ACCu;
            goto label_200acc;
        }
    }
    ctx->pc = 0x200A80u;
    // 0x200a80: 0xc08027c
    ctx->pc = 0x200A80u;
    SET_GPR_U32(ctx, 31, 0x200A88u);
    ctx->pc = 0x200A84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2009F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fed_upper_0x2009f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200A88u; }
    }
    if (ctx->pc != 0x200A88u) { return; }
    ctx->pc = 0x200A88u;
    // 0x200a88: 0x3c020031
    ctx->pc = 0x200a88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x200a8c: 0x8c42f184
    ctx->pc = 0x200a8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x200a90: 0x10400007
    ctx->pc = 0x200A90u;
    {
        const bool branch_taken_0x200a90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200A94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200a90) {
            ctx->pc = 0x200AB0u;
            goto label_200ab0;
        }
    }
    ctx->pc = 0x200A98u;
    // 0x200a98: 0x3c05003a
    ctx->pc = 0x200a98u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200a9c: 0x24a54540
    ctx->pc = 0x200a9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17728));
    // 0x200aa0: 0xc0b6252
    ctx->pc = 0x200AA0u;
    SET_GPR_U32(ctx, 31, 0x200AA8u);
    ctx->pc = 0x200AA4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200AA8u; }
    }
    if (ctx->pc != 0x200AA8u) { return; }
    ctx->pc = 0x200AA8u;
    // 0x200aa8: 0x10000019
    ctx->pc = 0x200AA8u;
    {
        const bool branch_taken_0x200aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200AACu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200aa8) {
            ctx->pc = 0x200B10u;
            goto label_200b10;
        }
    }
    ctx->pc = 0x200AB0u;
label_200ab0:
    // 0x200ab0: 0x3c05003a
    ctx->pc = 0x200ab0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200ab4: 0x24a54558
    ctx->pc = 0x200ab4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17752));
    // 0x200ab8: 0x220302d
    ctx->pc = 0x200ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200abc: 0xc0b6252
    ctx->pc = 0x200ABCu;
    SET_GPR_U32(ctx, 31, 0x200AC4u);
    ctx->pc = 0x200AC0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200AC4u; }
    }
    if (ctx->pc != 0x200AC4u) { return; }
    ctx->pc = 0x200AC4u;
    // 0x200ac4: 0x10000012
    ctx->pc = 0x200AC4u;
    {
        const bool branch_taken_0x200ac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200AC8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200ac4) {
            ctx->pc = 0x200B10u;
            goto label_200b10;
        }
    }
    ctx->pc = 0x200ACCu;
label_200acc:
    // 0x200acc: 0x3c05003a
    ctx->pc = 0x200accu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200ad0: 0x24a54560
    ctx->pc = 0x200ad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17760));
    // 0x200ad4: 0x220302d
    ctx->pc = 0x200ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ad8: 0xc0b6252
    ctx->pc = 0x200AD8u;
    SET_GPR_U32(ctx, 31, 0x200AE0u);
    ctx->pc = 0x200ADCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200AE0u; }
    }
    if (ctx->pc != 0x200AE0u) { return; }
    ctx->pc = 0x200AE0u;
    // 0x200ae0: 0x1000000b
    ctx->pc = 0x200AE0u;
    {
        const bool branch_taken_0x200ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200AE4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200ae0) {
            ctx->pc = 0x200B10u;
            goto label_200b10;
        }
    }
    ctx->pc = 0x200AE8u;
label_200ae8:
    // 0x200ae8: 0x2403ffff
    ctx->pc = 0x200ae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200aec: 0x0
    ctx->pc = 0x200aecu;
    // NOP
label_200af0:
    // 0x200af0: 0x2442ffff
    ctx->pc = 0x200af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x200af4: 0x0
    ctx->pc = 0x200af4u;
    // NOP
    // 0x200af8: 0x0
    ctx->pc = 0x200af8u;
    // NOP
    // 0x200afc: 0x0
    ctx->pc = 0x200afcu;
    // NOP
    // 0x200b00: 0x0
    ctx->pc = 0x200b00u;
    // NOP
    // 0x200b04: 0x1443fffa
    ctx->pc = 0x200B04u;
    {
        const bool branch_taken_0x200b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x200b04) {
            ctx->pc = 0x200AF0u;
            goto label_200af0;
        }
    }
    ctx->pc = 0x200B0Cu;
    // 0x200b0c: 0x26100001
    ctx->pc = 0x200b0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_200b10:
    // 0x200b10: 0x2a020064
    ctx->pc = 0x200b10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 100));
    // 0x200b14: 0x10400007
    ctx->pc = 0x200B14u;
    {
        const bool branch_taken_0x200b14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200B18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x200b14) {
            ctx->pc = 0x200B34u;
            goto label_200b34;
        }
    }
    ctx->pc = 0x200B1Cu;
    // 0x200b1c: 0x280282d
    ctx->pc = 0x200b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b20: 0xc0c1f9e
    ctx->pc = 0x200B20u;
    SET_GPR_U32(ctx, 31, 0x200B28u);
    ctx->pc = 0x200B24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x307E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x307e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B28u; }
    }
    if (ctx->pc != 0x200B28u) { return; }
    ctx->pc = 0x200B28u;
    // 0x200b28: 0x40902d
    ctx->pc = 0x200b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b2c: 0x640ffee
    ctx->pc = 0x200B2Cu;
    {
        const bool branch_taken_0x200b2c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x200B30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x200b2c) {
            ctx->pc = 0x200AE8u;
            goto label_200ae8;
        }
    }
    ctx->pc = 0x200B34u;
label_200b34:
    // 0x200b34: 0x6410010
    ctx->pc = 0x200B34u;
    {
        const bool branch_taken_0x200b34 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x200B38u;
        SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        if (branch_taken_0x200b34) {
            ctx->pc = 0x200B78u;
            goto label_200b78;
        }
    }
    ctx->pc = 0x200B3Cu;
    // 0x200b3c: 0x3c04003a
    ctx->pc = 0x200b3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x200b40: 0x24844568
    ctx->pc = 0x200b40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17768));
    // 0x200b44: 0x3a0282d
    ctx->pc = 0x200b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b48: 0x240302d
    ctx->pc = 0x200b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b4c: 0x3c10003a
    ctx->pc = 0x200b4cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x200b50: 0xc0b4a34
    ctx->pc = 0x200B50u;
    SET_GPR_U32(ctx, 31, 0x200B58u);
    ctx->pc = 0x200B54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 17808));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B58u; }
    }
    if (ctx->pc != 0x200B58u) { return; }
    ctx->pc = 0x200B58u;
    // 0x200b58: 0x12a00006
    ctx->pc = 0x200B58u;
    {
        const bool branch_taken_0x200b58 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x200B5Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x200b58) {
            ctx->pc = 0x200B74u;
            goto label_200b74;
        }
    }
    ctx->pc = 0x200B60u;
    // 0x200b60: 0x248445a0
    ctx->pc = 0x200b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17824));
    // 0x200b64: 0x3a0282d
    ctx->pc = 0x200b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b68: 0x240302d
    ctx->pc = 0x200b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b6c: 0xc0b4976
    ctx->pc = 0x200B6Cu;
    SET_GPR_U32(ctx, 31, 0x200B74u);
    ctx->pc = 0x200B70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 17808));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200B74u; }
    }
    if (ctx->pc != 0x200B74u) { return; }
    ctx->pc = 0x200B74u;
label_200b74:
    // 0x200b74: 0x121027
    ctx->pc = 0x200b74u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_200b78:
    // 0x200b78: 0x217c2
    ctx->pc = 0x200b78u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x200b7c: 0xdfbf00e0
    ctx->pc = 0x200b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x200b80: 0xdfb500d0
    ctx->pc = 0x200b80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x200b84: 0xdfb400c0
    ctx->pc = 0x200b84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x200b88: 0xdfb300b0
    ctx->pc = 0x200b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x200b8c: 0xdfb200a0
    ctx->pc = 0x200b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x200b90: 0xdfb10090
    ctx->pc = 0x200b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x200b94: 0xdfb00080
    ctx->pc = 0x200b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x200b98: 0x3e00008
    ctx->pc = 0x200B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200AB0u: goto label_200ab0;
            case 0x200ACCu: goto label_200acc;
            case 0x200AE8u: goto label_200ae8;
            case 0x200AF0u: goto label_200af0;
            case 0x200B10u: goto label_200b10;
            case 0x200B34u: goto label_200b34;
            case 0x200B74u: goto label_200b74;
            case 0x200B78u: goto label_200b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200BA0u;
}
