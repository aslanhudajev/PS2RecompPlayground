#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_CopyDstBuft
// Address: 0x194a78 - 0x194bb0
void sfmps_CopyDstBuft_0x194a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_CopyDstBuft");


    ctx->pc = 0x194a78u;

    // 0x194a78: 0x27bdff30
    ctx->pc = 0x194a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x194a7c: 0xffb60090
    ctx->pc = 0x194a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x194a80: 0xffb50080
    ctx->pc = 0x194a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x194a84: 0xa0b02d
    ctx->pc = 0x194a84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a88: 0xffb20050
    ctx->pc = 0x194a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x194a8c: 0x80a82d
    ctx->pc = 0x194a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a90: 0xffbe00b0
    ctx->pc = 0x194a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x194a94: 0xc0902d
    ctx->pc = 0x194a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a98: 0xffb10040
    ctx->pc = 0x194a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x194a9c: 0x100f02d
    ctx->pc = 0x194a9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194aa0: 0xffbf00c0
    ctx->pc = 0x194aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x194aa4: 0xe0882d
    ctx->pc = 0x194aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194aa8: 0xffb700a0
    ctx->pc = 0x194aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x194aac: 0xffb40070
    ctx->pc = 0x194aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x194ab0: 0xffb30060
    ctx->pc = 0x194ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x194ab4: 0x3a0302d
    ctx->pc = 0x194ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ab8: 0xc06474c
    ctx->pc = 0x194AB8u;
    SET_GPR_U32(ctx, 31, 0x194AC0u);
    ctx->pc = 0x194ABCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->pc = 0x191D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingGetWrite_0x191d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194AC0u; }
        else if (ctx->pc != 0x194AC0u) { ctx->pc = 0x194AC0u; }
    }
    if (ctx->pc != 0x194AC0u) { return; }
    ctx->pc = 0x194AC0u;
    // 0x194ac0: 0x40182d
    ctx->pc = 0x194ac0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ac4: 0x1460002f
    ctx->pc = 0x194AC4u;
    {
        const bool branch_taken_0x194ac4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x194AC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x194ac4) {
            ctx->pc = 0x194B84u;
            goto label_194b84;
        }
    }
    ctx->pc = 0x194ACCu;
    // 0x194acc: 0x8fb00004
    ctx->pc = 0x194accu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x194ad0: 0x8fa2000c
    ctx->pc = 0x194ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x194ad4: 0x8fb30000
    ctx->pc = 0x194ad4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ad8: 0x2021021
    ctx->pc = 0x194ad8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x194adc: 0x8fb40008
    ctx->pc = 0x194adcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x194ae0: 0x51102a
    ctx->pc = 0x194ae0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x194ae4: 0x10400003
    ctx->pc = 0x194AE4u;
    {
        const bool branch_taken_0x194ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194AE8u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x194ae4) {
            ctx->pc = 0x194AF4u;
            goto label_194af4;
        }
    }
    ctx->pc = 0x194AECu;
    // 0x194aec: 0x10000025
    ctx->pc = 0x194AECu;
    {
        const bool branch_taken_0x194aec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194AF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194aec) {
            ctx->pc = 0x194B84u;
            goto label_194b84;
        }
    }
    ctx->pc = 0x194AF4u;
label_194af4:
    // 0x194af4: 0x211102a
    ctx->pc = 0x194af4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x194af8: 0x14400006
    ctx->pc = 0x194AF8u;
    {
        const bool branch_taken_0x194af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x194AFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194af8) {
            ctx->pc = 0x194B14u;
            goto label_194b14;
        }
    }
    ctx->pc = 0x194B00u;
    // 0x194b00: 0x240282d
    ctx->pc = 0x194b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b04: 0xc060172
    ctx->pc = 0x194B04u;
    SET_GPR_U32(ctx, 31, 0x194B0Cu);
    ctx->pc = 0x194B08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B0Cu; }
        else if (ctx->pc != 0x194B0Cu) { ctx->pc = 0x194B0Cu; }
    }
    if (ctx->pc != 0x194B0Cu) { return; }
    ctx->pc = 0x194B0Cu;
    // 0x194b0c: 0x10000009
    ctx->pc = 0x194B0Cu;
    {
        const bool branch_taken_0x194b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194B10u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194b0c) {
            ctx->pc = 0x194B34u;
            goto label_194b34;
        }
    }
    ctx->pc = 0x194B14u;
label_194b14:
    // 0x194b14: 0x240282d
    ctx->pc = 0x194b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b18: 0xc060172
    ctx->pc = 0x194B18u;
    SET_GPR_U32(ctx, 31, 0x194B20u);
    ctx->pc = 0x194B1Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B20u; }
        else if (ctx->pc != 0x194B20u) { ctx->pc = 0x194B20u; }
    }
    if (ctx->pc != 0x194B20u) { return; }
    ctx->pc = 0x194B20u;
    // 0x194b20: 0x280202d
    ctx->pc = 0x194b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b24: 0x2502821
    ctx->pc = 0x194b24u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x194b28: 0xc060172
    ctx->pc = 0x194B28u;
    SET_GPR_U32(ctx, 31, 0x194B30u);
    ctx->pc = 0x194B2Cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B30u; }
        else if (ctx->pc != 0x194B30u) { ctx->pc = 0x194B30u; }
    }
    if (ctx->pc != 0x194B30u) { return; }
    ctx->pc = 0x194B30u;
    // 0x194b30: 0x2e0382d
    ctx->pc = 0x194b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_194b34:
    // 0x194b34: 0x2a0202d
    ctx->pc = 0x194b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b38: 0x2c0282d
    ctx->pc = 0x194b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b3c: 0xc064796
    ctx->pc = 0x194B3Cu;
    SET_GPR_U32(ctx, 31, 0x194B44u);
    ctx->pc = 0x194B40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_RingAddWrite_0x191e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B44u; }
        else if (ctx->pc != 0x194B44u) { ctx->pc = 0x194B44u; }
    }
    if (ctx->pc != 0x194B44u) { return; }
    ctx->pc = 0x194B44u;
    // 0x194b44: 0x40182d
    ctx->pc = 0x194b44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b48: 0x1460000e
    ctx->pc = 0x194B48u;
    {
        const bool branch_taken_0x194b48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x194B4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x194b48) {
            ctx->pc = 0x194B84u;
            goto label_194b84;
        }
    }
    ctx->pc = 0x194B50u;
    // 0x194b50: 0x7c0000a
    ctx->pc = 0x194B50u;
    {
        const bool branch_taken_0x194b50 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x194B54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194b50) {
            ctx->pc = 0x194B7Cu;
            goto label_194b7c;
        }
    }
    ctx->pc = 0x194B58u;
    // 0x194b58: 0xafbe0020
    ctx->pc = 0x194b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x194b5c: 0xafb30024
    ctx->pc = 0x194b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x194b60: 0x2c0282d
    ctx->pc = 0x194b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b64: 0xafb10028
    ctx->pc = 0x194b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x194b68: 0xc067014
    ctx->pc = 0x194B68u;
    SET_GPR_U32(ctx, 31, 0x194B70u);
    ctx->pc = 0x194B6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x19C050u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPTS_WritePtsQue_0x19c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B70u; }
        else if (ctx->pc != 0x194B70u) { ctx->pc = 0x194B70u; }
    }
    if (ctx->pc != 0x194B70u) { return; }
    ctx->pc = 0x194B70u;
    // 0x194b70: 0x40182d
    ctx->pc = 0x194b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b74: 0x14600003
    ctx->pc = 0x194B74u;
    {
        const bool branch_taken_0x194b74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x194B78u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x194b74) {
            ctx->pc = 0x194B84u;
            goto label_194b84;
        }
    }
    ctx->pc = 0x194B7Cu;
label_194b7c:
    // 0x194b7c: 0x24020001
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x194b80: 0xdfbf00c0
    ctx->pc = 0x194b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_194b84:
    // 0x194b84: 0xdfbe00b0
    ctx->pc = 0x194b84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x194b88: 0xdfb700a0
    ctx->pc = 0x194b88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x194b8c: 0xdfb60090
    ctx->pc = 0x194b8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194b90: 0xdfb50080
    ctx->pc = 0x194b90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x194b94: 0xdfb40070
    ctx->pc = 0x194b94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194b98: 0xdfb30060
    ctx->pc = 0x194b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194b9c: 0xdfb20050
    ctx->pc = 0x194b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194ba0: 0xdfb10040
    ctx->pc = 0x194ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194ba4: 0xdfb00030
    ctx->pc = 0x194ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194ba8: 0x3e00008
    ctx->pc = 0x194BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194BACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194AF4u: goto label_194af4;
            case 0x194B14u: goto label_194b14;
            case 0x194B34u: goto label_194b34;
            case 0x194B7Cu: goto label_194b7c;
            case 0x194B84u: goto label_194b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194BB0u;
}
