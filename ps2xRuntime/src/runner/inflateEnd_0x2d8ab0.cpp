#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflateEnd
// Address: 0x2d8ab0 - 0x2d8b24
void inflateEnd_0x2d8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d8ab0u;

label_2d8ab0:
    // 0x2d8ab0: 0x27bdffd0
    ctx->pc = 0x2d8ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d8ab4:
    // 0x2d8ab4: 0xffbf0020
    ctx->pc = 0x2d8ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8ab8:
    // 0x2d8ab8: 0xffb00010
    ctx->pc = 0x2d8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d8abc:
    // 0x2d8abc: 0x80802d
    ctx->pc = 0x2d8abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ac0:
    // 0x2d8ac0: 0x12000014
label_2d8ac4:
    if (ctx->pc == 0x2D8AC4u) {
        ctx->pc = 0x2D8AC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8AC8u;
        goto label_2d8ac8;
    }
    ctx->pc = 0x2D8AC0u;
    {
        const bool branch_taken_0x2d8ac0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8AC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8ac0) {
            ctx->pc = 0x2D8B14u;
            goto label_2d8b14;
        }
    }
    ctx->pc = 0x2D8AC8u;
label_2d8ac8:
    // 0x2d8ac8: 0x8e02001c
    ctx->pc = 0x2d8ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8acc:
    // 0x2d8acc: 0x10400011
label_2d8ad0:
    if (ctx->pc == 0x2D8AD0u) {
        ctx->pc = 0x2D8AD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8AD4u;
        goto label_2d8ad4;
    }
    ctx->pc = 0x2D8ACCu;
    {
        const bool branch_taken_0x2d8acc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8AD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8acc) {
            ctx->pc = 0x2D8B14u;
            goto label_2d8b14;
        }
    }
    ctx->pc = 0x2D8AD4u;
label_2d8ad4:
    // 0x2d8ad4: 0x8e020024
    ctx->pc = 0x2d8ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d8ad8:
    // 0x2d8ad8: 0x54400003
label_2d8adc:
    if (ctx->pc == 0x2D8ADCu) {
        ctx->pc = 0x2D8ADCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x2D8AE0u;
        goto label_2d8ae0;
    }
    ctx->pc = 0x2D8AD8u;
    {
        const bool branch_taken_0x2d8ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8ad8) {
            ctx->pc = 0x2D8ADCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x2D8AE8u;
            goto label_2d8ae8;
        }
    }
    ctx->pc = 0x2D8AE0u;
label_2d8ae0:
    // 0x2d8ae0: 0x1000000c
label_2d8ae4:
    if (ctx->pc == 0x2D8AE4u) {
        ctx->pc = 0x2D8AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8AE8u;
        goto label_2d8ae8;
    }
    ctx->pc = 0x2D8AE0u;
    {
        const bool branch_taken_0x2d8ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8ae0) {
            ctx->pc = 0x2D8B14u;
            goto label_2d8b14;
        }
    }
    ctx->pc = 0x2D8AE8u;
label_2d8ae8:
    // 0x2d8ae8: 0x8c440014
    ctx->pc = 0x2d8ae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2d8aec:
    // 0x2d8aec: 0x10800003
label_2d8af0:
    if (ctx->pc == 0x2D8AF0u) {
        ctx->pc = 0x2D8AF0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AF4u;
        goto label_2d8af4;
    }
    ctx->pc = 0x2D8AECu;
    {
        const bool branch_taken_0x2d8aec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8AF0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8aec) {
            ctx->pc = 0x2D8AFCu;
            goto label_2d8afc;
        }
    }
    ctx->pc = 0x2D8AF4u;
label_2d8af4:
    // 0x2d8af4: 0xc0b6928
label_2d8af8:
    if (ctx->pc == 0x2D8AF8u) {
        ctx->pc = 0x2D8AF8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AFCu;
        goto label_2d8afc;
    }
    ctx->pc = 0x2D8AF4u;
    SET_GPR_U32(ctx, 31, 0x2D8AFCu);
    ctx->pc = 0x2D8AF8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DA4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_free_0x2da4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8AFCu; }
    }
    if (ctx->pc != 0x2D8AFCu) { return; }
    ctx->pc = 0x2D8AFCu;
label_2d8afc:
    // 0x2d8afc: 0x8e020024
    ctx->pc = 0x2d8afcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d8b00:
    // 0x2d8b00: 0x8e040028
    ctx->pc = 0x2d8b00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2d8b04:
    // 0x2d8b04: 0x40f809
label_2d8b08:
    if (ctx->pc == 0x2D8B08u) {
        ctx->pc = 0x2D8B08u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x2D8B0Cu;
        goto label_2d8b0c;
    }
    ctx->pc = 0x2D8B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8B0Cu);
        ctx->pc = 0x2D8B08u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8AB0u: goto label_2d8ab0;
            case 0x2D8AB4u: goto label_2d8ab4;
            case 0x2D8AB8u: goto label_2d8ab8;
            case 0x2D8ABCu: goto label_2d8abc;
            case 0x2D8AC0u: goto label_2d8ac0;
            case 0x2D8AC4u: goto label_2d8ac4;
            case 0x2D8AC8u: goto label_2d8ac8;
            case 0x2D8ACCu: goto label_2d8acc;
            case 0x2D8AD0u: goto label_2d8ad0;
            case 0x2D8AD4u: goto label_2d8ad4;
            case 0x2D8AD8u: goto label_2d8ad8;
            case 0x2D8ADCu: goto label_2d8adc;
            case 0x2D8AE0u: goto label_2d8ae0;
            case 0x2D8AE4u: goto label_2d8ae4;
            case 0x2D8AE8u: goto label_2d8ae8;
            case 0x2D8AECu: goto label_2d8aec;
            case 0x2D8AF0u: goto label_2d8af0;
            case 0x2D8AF4u: goto label_2d8af4;
            case 0x2D8AF8u: goto label_2d8af8;
            case 0x2D8AFCu: goto label_2d8afc;
            case 0x2D8B00u: goto label_2d8b00;
            case 0x2D8B04u: goto label_2d8b04;
            case 0x2D8B08u: goto label_2d8b08;
            case 0x2D8B0Cu: goto label_2d8b0c;
            case 0x2D8B10u: goto label_2d8b10;
            case 0x2D8B14u: goto label_2d8b14;
            case 0x2D8B18u: goto label_2d8b18;
            case 0x2D8B1Cu: goto label_2d8b1c;
            case 0x2D8B20u: goto label_2d8b20;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B0Cu; }
            if (ctx->pc != 0x2D8B0Cu) { return; }
        }
    }
    ctx->pc = 0x2D8B0Cu;
label_2d8b0c:
    // 0x2d8b0c: 0xae00001c
    ctx->pc = 0x2d8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2d8b10:
    // 0x2d8b10: 0x102d
    ctx->pc = 0x2d8b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8b14:
    // 0x2d8b14: 0xdfbf0020
    ctx->pc = 0x2d8b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8b18:
    // 0x2d8b18: 0xdfb00010
    ctx->pc = 0x2d8b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8b1c:
    // 0x2d8b1c: 0x3e00008
label_2d8b20:
    if (ctx->pc == 0x2D8B20u) {
        ctx->pc = 0x2D8B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D8B24u;
        goto label_fallthrough_0x2d8b1c;
    }
    ctx->pc = 0x2D8B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8AB0u: goto label_2d8ab0;
            case 0x2D8AB4u: goto label_2d8ab4;
            case 0x2D8AB8u: goto label_2d8ab8;
            case 0x2D8ABCu: goto label_2d8abc;
            case 0x2D8AC0u: goto label_2d8ac0;
            case 0x2D8AC4u: goto label_2d8ac4;
            case 0x2D8AC8u: goto label_2d8ac8;
            case 0x2D8ACCu: goto label_2d8acc;
            case 0x2D8AD0u: goto label_2d8ad0;
            case 0x2D8AD4u: goto label_2d8ad4;
            case 0x2D8AD8u: goto label_2d8ad8;
            case 0x2D8ADCu: goto label_2d8adc;
            case 0x2D8AE0u: goto label_2d8ae0;
            case 0x2D8AE4u: goto label_2d8ae4;
            case 0x2D8AE8u: goto label_2d8ae8;
            case 0x2D8AECu: goto label_2d8aec;
            case 0x2D8AF0u: goto label_2d8af0;
            case 0x2D8AF4u: goto label_2d8af4;
            case 0x2D8AF8u: goto label_2d8af8;
            case 0x2D8AFCu: goto label_2d8afc;
            case 0x2D8B00u: goto label_2d8b00;
            case 0x2D8B04u: goto label_2d8b04;
            case 0x2D8B08u: goto label_2d8b08;
            case 0x2D8B0Cu: goto label_2d8b0c;
            case 0x2D8B10u: goto label_2d8b10;
            case 0x2D8B14u: goto label_2d8b14;
            case 0x2D8B18u: goto label_2d8b18;
            case 0x2D8B1Cu: goto label_2d8b1c;
            case 0x2D8B20u: goto label_2d8b20;
            default: break;
        }
        return;
    }
label_fallthrough_0x2d8b1c:
    ctx->pc = 0x2D8B24u;
}
