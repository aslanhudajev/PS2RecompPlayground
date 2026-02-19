#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSendObjTextures
// Address: 0x2bda78 - 0x2bdbd0
void pbSendObjTextures_0x2bda78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bda78u;

    // 0x2bda78: 0x27bdffb0
    ctx->pc = 0x2bda78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bda7c: 0xffbf0040
    ctx->pc = 0x2bda7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bda80: 0xffb30030
    ctx->pc = 0x2bda80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bda84: 0xffb20020
    ctx->pc = 0x2bda84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bda88: 0xffb10010
    ctx->pc = 0x2bda88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bda8c: 0xffb00000
    ctx->pc = 0x2bda8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bda90: 0x80802d
    ctx->pc = 0x2bda90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda94: 0x24110001
    ctx->pc = 0x2bda94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bda98: 0x3c12ffff
    ctx->pc = 0x2bda98u;
    SET_GPR_U32(ctx, 18, ((uint32_t)65535 << 16));
    // 0x2bda9c: 0x3652ffff
    ctx->pc = 0x2bda9cu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 65535));
    // 0x2bdaa0: 0xc0af63a
    ctx->pc = 0x2BDAA0u;
    SET_GPR_U32(ctx, 31, 0x2BDAA8u);
    ctx->pc = 0x2BDAA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2BD8E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugObjStart_0x2bd8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDAA8u; }
    }
    if (ctx->pc != 0x2BDAA8u) { return; }
    ctx->pc = 0x2BDAA8u;
    // 0x2bdaa8: 0x8603005c
    ctx->pc = 0x2bdaa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2bdaac: 0x2402fffd
    ctx->pc = 0x2bdaacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2bdab0: 0x1062000a
    ctx->pc = 0x2BDAB0u;
    {
        const bool branch_taken_0x2bdab0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BDAB4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4294967294));
        if (branch_taken_0x2bdab0) {
            ctx->pc = 0x2BDADCu;
            goto label_2bdadc;
        }
    }
    ctx->pc = 0x2BDAB8u;
    // 0x2bdab8: 0x5440000b
    ctx->pc = 0x2BDAB8u;
    {
        const bool branch_taken_0x2bdab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bdab8) {
            ctx->pc = 0x2BDABCu;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->pc = 0x2BDAE8u;
            goto label_2bdae8;
        }
    }
    ctx->pc = 0x2BDAC0u;
    // 0x2bdac0: 0x2402fffe
    ctx->pc = 0x2bdac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2bdac4: 0x10620005
    ctx->pc = 0x2BDAC4u;
    {
        const bool branch_taken_0x2bdac4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BDAC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2bdac4) {
            ctx->pc = 0x2BDADCu;
            goto label_2bdadc;
        }
    }
    ctx->pc = 0x2BDACCu;
    // 0x2bdacc: 0x54620006
    ctx->pc = 0x2BDACCu;
    {
        const bool branch_taken_0x2bdacc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bdacc) {
            ctx->pc = 0x2BDAD0u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->pc = 0x2BDAE8u;
            goto label_2bdae8;
        }
    }
    ctx->pc = 0x2BDAD4u;
    // 0x2bdad4: 0x10000005
    ctx->pc = 0x2BDAD4u;
    {
        const bool branch_taken_0x2bdad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDAD8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bdad4) {
            ctx->pc = 0x2BDAECu;
            goto label_2bdaec;
        }
    }
    ctx->pc = 0x2BDADCu;
label_2bdadc:
    // 0x2bdadc: 0x8e120058
    ctx->pc = 0x2bdadcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2bdae0: 0x10000002
    ctx->pc = 0x2BDAE0u;
    {
        const bool branch_taken_0x2bdae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDAE4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bdae0) {
            ctx->pc = 0x2BDAECu;
            goto label_2bdaec;
        }
    }
    ctx->pc = 0x2BDAE8u;
label_2bdae8:
    // 0x2bdae8: 0x24130001
    ctx->pc = 0x2bdae8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_2bdaec:
    // 0x2bdaec: 0x3c02ffff
    ctx->pc = 0x2bdaecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2bdaf0: 0x3442ffff
    ctx->pc = 0x2bdaf0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bdaf4: 0x1242000b
    ctx->pc = 0x2BDAF4u;
    {
        const bool branch_taken_0x2bdaf4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bdaf4) {
            ctx->pc = 0x2BDB24u;
            goto label_2bdb24;
        }
    }
    ctx->pc = 0x2BDAFCu;
    // 0x2bdafc: 0xc0ab6e2
    ctx->pc = 0x2BDAFCu;
    SET_GPR_U32(ctx, 31, 0x2BDB04u);
    ctx->pc = 0x2BDB00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB04u; }
    }
    if (ctx->pc != 0x2BDB04u) { return; }
    ctx->pc = 0x2BDB04u;
    // 0x2bdb04: 0x40882d
    ctx->pc = 0x2bdb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb08: 0x16200008
    ctx->pc = 0x2BDB08u;
    {
        const bool branch_taken_0x2bdb08 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bdb08) {
            ctx->pc = 0x2BDB2Cu;
            goto label_2bdb2c;
        }
    }
    ctx->pc = 0x2BDB10u;
    // 0x2bdb10: 0xc0aa110
    ctx->pc = 0x2BDB10u;
    SET_GPR_U32(ctx, 31, 0x2BDB18u);
    ctx->pc = 0x2BDB14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPageEnd_0x2a8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB18u; }
    }
    if (ctx->pc != 0x2BDB18u) { return; }
    ctx->pc = 0x2BDB18u;
    // 0x2bdb18: 0xc0ab6e2
    ctx->pc = 0x2BDB18u;
    SET_GPR_U32(ctx, 31, 0x2BDB20u);
    ctx->pc = 0x2BDB1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB20u; }
    }
    if (ctx->pc != 0x2BDB20u) { return; }
    ctx->pc = 0x2BDB20u;
    // 0x2bdb20: 0x40882d
    ctx->pc = 0x2bdb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb24:
    // 0x2bdb24: 0x12200020
    ctx->pc = 0x2BDB24u;
    {
        const bool branch_taken_0x2bdb24 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDB28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb24) {
            ctx->pc = 0x2BDBA8u;
            goto label_2bdba8;
        }
    }
    ctx->pc = 0x2BDB2Cu;
label_2bdb2c:
    // 0x2bdb2c: 0x1260001e
    ctx->pc = 0x2BDB2Cu;
    {
        const bool branch_taken_0x2bdb2c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDB30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb2c) {
            ctx->pc = 0x2BDBA8u;
            goto label_2bdba8;
        }
    }
    ctx->pc = 0x2BDB34u;
    // 0x2bdb34: 0x9604006e
    ctx->pc = 0x2bdb34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2bdb38: 0xc0af672
    ctx->pc = 0x2BDB38u;
    SET_GPR_U32(ctx, 31, 0x2BDB40u);
    ctx->pc = 0x2BDB3Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x2BD9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSendObjTexturesSub_0x2bd9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB40u; }
    }
    if (ctx->pc != 0x2BDB40u) { return; }
    ctx->pc = 0x2BDB40u;
    // 0x2bdb40: 0x40882d
    ctx->pc = 0x2bdb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb44: 0x16200018
    ctx->pc = 0x2BDB44u;
    {
        const bool branch_taken_0x2bdb44 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BDB48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb44) {
            ctx->pc = 0x2BDBA8u;
            goto label_2bdba8;
        }
    }
    ctx->pc = 0x2BDB4Cu;
    // 0x2bdb4c: 0x24110001
    ctx->pc = 0x2bdb4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bdb50: 0xc0aa110
    ctx->pc = 0x2BDB50u;
    SET_GPR_U32(ctx, 31, 0x2BDB58u);
    ctx->pc = 0x2BDB54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPageEnd_0x2a8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB58u; }
    }
    if (ctx->pc != 0x2BDB58u) { return; }
    ctx->pc = 0x2BDB58u;
    // 0x2bdb58: 0x3c02ffff
    ctx->pc = 0x2bdb58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2bdb5c: 0x3442ffff
    ctx->pc = 0x2bdb5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bdb60: 0x12420004
    ctx->pc = 0x2BDB60u;
    {
        const bool branch_taken_0x2bdb60 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bdb60) {
            ctx->pc = 0x2BDB74u;
            goto label_2bdb74;
        }
    }
    ctx->pc = 0x2BDB68u;
    // 0x2bdb68: 0xc0ab6e2
    ctx->pc = 0x2BDB68u;
    SET_GPR_U32(ctx, 31, 0x2BDB70u);
    ctx->pc = 0x2BDB6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB70u; }
    }
    if (ctx->pc != 0x2BDB70u) { return; }
    ctx->pc = 0x2BDB70u;
    // 0x2bdb70: 0x40882d
    ctx->pc = 0x2bdb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb74:
    // 0x2bdb74: 0x12200008
    ctx->pc = 0x2BDB74u;
    {
        const bool branch_taken_0x2bdb74 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDB78u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bdb74) {
            ctx->pc = 0x2BDB98u;
            goto label_2bdb98;
        }
    }
    ctx->pc = 0x2BDB7Cu;
    // 0x2bdb7c: 0x9604006e
    ctx->pc = 0x2bdb7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
    // 0x2bdb80: 0xc0af672
    ctx->pc = 0x2BDB80u;
    SET_GPR_U32(ctx, 31, 0x2BDB88u);
    ctx->pc = 0x2BDB84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x2BD9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSendObjTexturesSub_0x2bd9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB88u; }
    }
    if (ctx->pc != 0x2BDB88u) { return; }
    ctx->pc = 0x2BDB88u;
    // 0x2bdb88: 0x40882d
    ctx->pc = 0x2bdb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdb8c: 0x16200006
    ctx->pc = 0x2BDB8Cu;
    {
        const bool branch_taken_0x2bdb8c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BDB90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb8c) {
            ctx->pc = 0x2BDBA8u;
            goto label_2bdba8;
        }
    }
    ctx->pc = 0x2BDB94u;
    // 0x2bdb94: 0x3c04003b
    ctx->pc = 0x2bdb94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2bdb98:
    // 0x2bdb98: 0x24846908
    ctx->pc = 0x2bdb98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26888));
    // 0x2bdb9c: 0xc0b49a6
    ctx->pc = 0x2BDB9Cu;
    SET_GPR_U32(ctx, 31, 0x2BDBA4u);
    ctx->pc = 0x2BDBA0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBA4u; }
    }
    if (ctx->pc != 0x2BDBA4u) { return; }
    ctx->pc = 0x2BDBA4u;
    // 0x2bdba4: 0x200202d
    ctx->pc = 0x2bdba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdba8:
    // 0x2bdba8: 0xc0af668
    ctx->pc = 0x2BDBA8u;
    SET_GPR_U32(ctx, 31, 0x2BDBB0u);
    ctx->pc = 0x2BDBACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2BD9A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugObjEnd_0x2bd9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBB0u; }
    }
    if (ctx->pc != 0x2BDBB0u) { return; }
    ctx->pc = 0x2BDBB0u;
    // 0x2bdbb0: 0x220102d
    ctx->pc = 0x2bdbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdbb4: 0xdfbf0040
    ctx->pc = 0x2bdbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bdbb8: 0xdfb30030
    ctx->pc = 0x2bdbb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdbbc: 0xdfb20020
    ctx->pc = 0x2bdbbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdbc0: 0xdfb10010
    ctx->pc = 0x2bdbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdbc4: 0xdfb00000
    ctx->pc = 0x2bdbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdbc8: 0x3e00008
    ctx->pc = 0x2BDBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDBCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BDADCu: goto label_2bdadc;
            case 0x2BDAE8u: goto label_2bdae8;
            case 0x2BDAECu: goto label_2bdaec;
            case 0x2BDB24u: goto label_2bdb24;
            case 0x2BDB2Cu: goto label_2bdb2c;
            case 0x2BDB74u: goto label_2bdb74;
            case 0x2BDB98u: goto label_2bdb98;
            case 0x2BDBA8u: goto label_2bdba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BDBD0u;
}
