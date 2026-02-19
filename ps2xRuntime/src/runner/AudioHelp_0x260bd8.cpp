#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioHelp
// Address: 0x260bd8 - 0x260dac
void AudioHelp_0x260bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260bd8u;

    // 0x260bd8: 0x80482d
    ctx->pc = 0x260bd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bdc: 0xc0382d
    ctx->pc = 0x260bdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260be0: 0x3c030034
    ctx->pc = 0x260be0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x260be4: 0x2463d330
    ctx->pc = 0x260be4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955824));
    // 0x260be8: 0x91080
    ctx->pc = 0x260be8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 2));
    // 0x260bec: 0x431021
    ctx->pc = 0x260becu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260bf0: 0x8c460000
    ctx->pc = 0x260bf0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260bf4: 0x3c020031
    ctx->pc = 0x260bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x260bf8: 0x8c420028
    ctx->pc = 0x260bf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x260bfc: 0x28420002
    ctx->pc = 0x260bfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x260c00: 0x10400029
    ctx->pc = 0x260C00u;
    {
        const bool branch_taken_0x260c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260C04u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260c00) {
            ctx->pc = 0x260CA8u;
            goto label_260ca8;
        }
    }
    ctx->pc = 0x260C08u;
    // 0x260c08: 0x3c020001
    ctx->pc = 0x260c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x260c0c: 0x3442003d
    ctx->pc = 0x260c0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61));
    // 0x260c10: 0x1102000f
    ctx->pc = 0x260C10u;
    {
        const bool branch_taken_0x260c10 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x260C14u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 8)));
        if (branch_taken_0x260c10) {
            ctx->pc = 0x260C50u;
            goto label_260c50;
        }
    }
    ctx->pc = 0x260C18u;
    // 0x260c18: 0x14400007
    ctx->pc = 0x260C18u;
    {
        const bool branch_taken_0x260c18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260C1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x260c18) {
            ctx->pc = 0x260C38u;
            goto label_260c38;
        }
    }
    ctx->pc = 0x260C20u;
    // 0x260c20: 0x3c020001
    ctx->pc = 0x260c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x260c24: 0x3442002c
    ctx->pc = 0x260c24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 44));
    // 0x260c28: 0x11020012
    ctx->pc = 0x260C28u;
    {
        const bool branch_taken_0x260c28 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x260C2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260c28) {
            ctx->pc = 0x260C74u;
            goto label_260c74;
        }
    }
    ctx->pc = 0x260C30u;
    // 0x260c30: 0x10000017
    ctx->pc = 0x260C30u;
    {
        const bool branch_taken_0x260c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260C34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x260c30) {
            ctx->pc = 0x260C90u;
            goto label_260c90;
        }
    }
    ctx->pc = 0x260C38u;
label_260c38:
    // 0x260c38: 0x3442000f
    ctx->pc = 0x260c38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15));
    // 0x260c3c: 0x11020007
    ctx->pc = 0x260C3Cu;
    {
        const bool branch_taken_0x260c3c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x260C40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x260c3c) {
            ctx->pc = 0x260C5Cu;
            goto label_260c5c;
        }
    }
    ctx->pc = 0x260C44u;
    // 0x260c44: 0x3442002c
    ctx->pc = 0x260c44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 44));
    // 0x260c48: 0x15020010
    ctx->pc = 0x260C48u;
    {
        const bool branch_taken_0x260c48 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x260C4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260c48) {
            ctx->pc = 0x260C8Cu;
            goto label_260c8c;
        }
    }
    ctx->pc = 0x260C50u;
label_260c50:
    // 0x260c50: 0x120202d
    ctx->pc = 0x260c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260c54: 0x8097716
    ctx->pc = 0x260C54u;
    ctx->pc = 0x260C58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DC58u;
    AudioHasItem_0x25dc58(rdram, ctx, runtime); return;
    ctx->pc = 0x260C5Cu;
label_260c5c:
    // 0x260c5c: 0x3c0140a0
    ctx->pc = 0x260c5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x260c60: 0x44816000
    ctx->pc = 0x260c60u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260c64: 0x2404ffff
    ctx->pc = 0x260c64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260c68: 0x120282d
    ctx->pc = 0x260c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260c6c: 0x8097672
    ctx->pc = 0x260C6Cu;
    ctx->pc = 0x260C70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x260C74u;
label_260c74:
    // 0x260c74: 0x3c0140a0
    ctx->pc = 0x260c74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x260c78: 0x44816000
    ctx->pc = 0x260c78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260c7c: 0x2404ffff
    ctx->pc = 0x260c7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260c80: 0x120282d
    ctx->pc = 0x260c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260c84: 0x8097672
    ctx->pc = 0x260C84u;
    ctx->pc = 0x260C88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x260C8Cu;
label_260c8c:
    // 0x260c8c: 0x240500e0
    ctx->pc = 0x260c8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
label_260c90:
    // 0x260c90: 0x3c01bf80
    ctx->pc = 0x260c90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x260c94: 0x44816000
    ctx->pc = 0x260c94u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260c98: 0x3c013f00
    ctx->pc = 0x260c98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x260c9c: 0x44816800
    ctx->pc = 0x260c9cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x260ca0: 0x8097116
    ctx->pc = 0x260CA0u;
    ctx->pc = 0x260CA4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x260CA8u;
label_260ca8:
    // 0x260ca8: 0x3c020002
    ctx->pc = 0x260ca8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x260cac: 0x34420028
    ctx->pc = 0x260cacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 40));
    // 0x260cb0: 0x48102a
    ctx->pc = 0x260cb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 8)));
    // 0x260cb4: 0x14400015
    ctx->pc = 0x260CB4u;
    {
        const bool branch_taken_0x260cb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260CB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x260cb4) {
            ctx->pc = 0x260D0Cu;
            goto label_260d0c;
        }
    }
    ctx->pc = 0x260CBCu;
    // 0x260cbc: 0x34420011
    ctx->pc = 0x260cbcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 17));
    // 0x260cc0: 0x102102a
    ctx->pc = 0x260cc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x260cc4: 0x10400023
    ctx->pc = 0x260CC4u;
    {
        const bool branch_taken_0x260cc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260CC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x260cc4) {
            ctx->pc = 0x260D54u;
            goto label_260d54;
        }
    }
    ctx->pc = 0x260CCCu;
    // 0x260ccc: 0x3442003d
    ctx->pc = 0x260cccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61));
    // 0x260cd0: 0x11020020
    ctx->pc = 0x260CD0u;
    {
        const bool branch_taken_0x260cd0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x260CD4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 8)));
        if (branch_taken_0x260cd0) {
            ctx->pc = 0x260D54u;
            goto label_260d54;
        }
    }
    ctx->pc = 0x260CD8u;
    // 0x260cd8: 0x14400007
    ctx->pc = 0x260CD8u;
    {
        const bool branch_taken_0x260cd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260CDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x260cd8) {
            ctx->pc = 0x260CF8u;
            goto label_260cf8;
        }
    }
    ctx->pc = 0x260CE0u;
    // 0x260ce0: 0x3c020001
    ctx->pc = 0x260ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x260ce4: 0x3442002c
    ctx->pc = 0x260ce4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 44));
    // 0x260ce8: 0x11020023
    ctx->pc = 0x260CE8u;
    {
        const bool branch_taken_0x260ce8 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x260CECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260ce8) {
            ctx->pc = 0x260D78u;
            goto label_260d78;
        }
    }
    ctx->pc = 0x260CF0u;
    // 0x260cf0: 0x10000028
    ctx->pc = 0x260CF0u;
    {
        const bool branch_taken_0x260cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260CF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x260cf0) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260CF8u;
label_260cf8:
    // 0x260cf8: 0x3442000f
    ctx->pc = 0x260cf8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15));
    // 0x260cfc: 0x11020018
    ctx->pc = 0x260CFCu;
    {
        const bool branch_taken_0x260cfc = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x260D00u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260cfc) {
            ctx->pc = 0x260D60u;
            goto label_260d60;
        }
    }
    ctx->pc = 0x260D04u;
    // 0x260d04: 0x10000023
    ctx->pc = 0x260D04u;
    {
        const bool branch_taken_0x260d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260D08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x260d04) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D0Cu;
label_260d0c:
    // 0x260d0c: 0x3442002b
    ctx->pc = 0x260d0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 43));
    // 0x260d10: 0x102102a
    ctx->pc = 0x260d10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x260d14: 0x1440001e
    ctx->pc = 0x260D14u;
    {
        const bool branch_taken_0x260d14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260D18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260d14) {
            ctx->pc = 0x260D90u;
            goto label_260d90;
        }
    }
    ctx->pc = 0x260D1Cu;
    // 0x260d1c: 0x3c020002
    ctx->pc = 0x260d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x260d20: 0x34420031
    ctx->pc = 0x260d20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49));
    // 0x260d24: 0x48102a
    ctx->pc = 0x260d24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 8)));
    // 0x260d28: 0x1040000a
    ctx->pc = 0x260D28u;
    {
        const bool branch_taken_0x260d28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x260D2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x260d28) {
            ctx->pc = 0x260D54u;
            goto label_260d54;
        }
    }
    ctx->pc = 0x260D30u;
    // 0x260d30: 0x3442003d
    ctx->pc = 0x260d30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61));
    // 0x260d34: 0x48102a
    ctx->pc = 0x260d34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 8)));
    // 0x260d38: 0x14400016
    ctx->pc = 0x260D38u;
    {
        const bool branch_taken_0x260d38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260D3Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x260d38) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D40u;
    // 0x260d40: 0x3c020002
    ctx->pc = 0x260d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x260d44: 0x34420035
    ctx->pc = 0x260d44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 53));
    // 0x260d48: 0x102102a
    ctx->pc = 0x260d48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x260d4c: 0x14400011
    ctx->pc = 0x260D4Cu;
    {
        const bool branch_taken_0x260d4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x260d4c) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D54u;
label_260d54:
    // 0x260d54: 0x120202d
    ctx->pc = 0x260d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d58: 0x8097716
    ctx->pc = 0x260D58u;
    ctx->pc = 0x260D5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DC58u;
    AudioHasItem_0x25dc58(rdram, ctx, runtime); return;
    ctx->pc = 0x260D60u;
label_260d60:
    // 0x260d60: 0x3c0140a0
    ctx->pc = 0x260d60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x260d64: 0x44816000
    ctx->pc = 0x260d64u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260d68: 0x2404ffff
    ctx->pc = 0x260d68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260d6c: 0x120282d
    ctx->pc = 0x260d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d70: 0x8097672
    ctx->pc = 0x260D70u;
    ctx->pc = 0x260D74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x260D78u;
label_260d78:
    // 0x260d78: 0x3c0140a0
    ctx->pc = 0x260d78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x260d7c: 0x44816000
    ctx->pc = 0x260d7cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260d80: 0x2404ffff
    ctx->pc = 0x260d80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260d84: 0x120282d
    ctx->pc = 0x260d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d88: 0x8097672
    ctx->pc = 0x260D88u;
    ctx->pc = 0x260D8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x260D90u;
label_260d90:
    // 0x260d90: 0x240500e0
    ctx->pc = 0x260d90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
label_260d94:
    // 0x260d94: 0x3c01bf80
    ctx->pc = 0x260d94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x260d98: 0x44816000
    ctx->pc = 0x260d98u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260d9c: 0x3c013f00
    ctx->pc = 0x260d9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x260da0: 0x44816800
    ctx->pc = 0x260da0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x260da4: 0x8097116
    ctx->pc = 0x260DA4u;
    ctx->pc = 0x260DA8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x260DACu;
}
